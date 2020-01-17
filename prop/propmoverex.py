import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from utils.text import Text
from utils.define import Define
from project import g_project

'''
Information sur les drops
9375        0.0003125%    320000
18750        0.000625%    160000
37500        0.00125%    80000
75000        0.0025%        40000
150000        0.005%        20000
300000        0.01%        10000
1000000        0.0333%        3000
1875000        0.0625%        1600
3000000        0.1%        1000
3750000        0.125%        800
5000000        0.166%        600
7500000        0.25%        400
15000000    0.5%        200
30000000    1%        100
300000000    10%        10
3000000000    100%        1
'''

class DropItem:

    def __init__(self):
        self.id = 0
        self.probability = 0
        self.level = 1
        self.number = 1
        self.level_min = 1
        self.level_max = 1

    def load(self, line):
        params = line.replace("DropItem", "").replace("(", "").replace(")", "").split(",")
        self.id = params[0]
        self.probability = int(params[1])
        self.level = int(params[2])
        self.number = int(params[3])
        if len(params) > 4:
            self.id = int(params[4])
            self.id = int(params[5])
        else:
            self.level_min = self.level
            self.level_max = self.level_max

        if self.level_min > self.level_max:
            self.level_max = self.level_min

        # -1 = 1
        if self.number <= 0:
            self.number = 1

class DropKind:

    def __init__(self):
        self.id = 0
        self.min = 1
        self.max = 1

    def load(self, line):
        params = line.replace("DropKind", "").replace("(", "").replace(")", "").split(",")
        self.id = params[0]
        self.min = int(params[1])
        self.max = int(params[2])

        if self.min > self.max:
            self.max = self.min


class DropGold:

    def __init__(self):
        self.min = 1
        self.max = 1

    def load(self, line):
        params = line.replace("DropGold", "").replace("(", "").replace(")", "").split(",")
        self.min = int(params[0])
        self.max = int(params[1])

class PropExtend:

    def __init__(self):
        self.id_mover = 0
        self.max_item = 1
        self.gold = DropGold()
        self.items = dict()
        self.kinds = dict()

    def load(self, id, mover):
        self.id_mover = id
        for it in mover:
            if "Maxitem" in it:
                self.max_item = it.split("=")[1]
            elif "DropGold" in it:
                self.gold = DropGold()
                self.gold.load(it)
            elif "DropItem" in it:
                item = DropItem()
                item.load(it)
                self.items[item.id] = item
            elif "DropKind" in it:
                kind = DropKind()
                kind.load(it)
                self.kinds[kind.id] = kind

class   PropMoverEx:

    def __init__(self):
        self.properties = dict()


    def load(self, file_prop):
        gLogger.set_section("propmoverex")
        gLogger.info("loading", file_prop)

        movers = dict()
        with open(file_prop, "r", encoding="ISO-8859-1") as fd:
            id = ""
            for line in fd:
                line = line.replace("\t", "").replace("\n", "").replace(" ", "").replace(";", "")
                if len(line) == 0:
                    continue
                if "MI_" in line and line[0] == 'M' and line[1] == 'I' and line [2] == '_':
                    id = line
                    movers[id] = list()
                    continue
                if id != "":
                    movers[id].append(line)
        for it in movers:
            mover = movers[it]
            prop = PropExtend()
            prop.load(it, mover)
            self.properties[it] = prop

        gLogger.reset_section()

    def json_format(self):
        gLogger.set_section("propmoverex")
        gLogger.info("writing JSON propmoverex")

        data = dict()
        data["prop_mover_extend"] = {}
        for key in self.properties:
            prop = self.properties[key]
            data["prop_mover_extend"][str(key)] = dict()
            data["prop_mover_extend"][str(key)]["id_mover"] = str(prop.id_mover)
            data["prop_mover_extend"][str(key)]["max_item"] = int(prop.max_item)
            data["prop_mover_extend"][str(key)]["gold_min"] = int(prop.gold.min)
            data["prop_mover_extend"][str(key)]["gold_max"] = int(prop.gold.max)

            if len(prop.items) > 0:
                data["prop_mover_extend"][str(key)]["items"] = list()
                for it in prop.items:
                    item = prop.items[it]
                    item_data = dict()
                    item_data["id_item"] = item.id
                    item_data["probability"] = item.probability
                    item_data["level_min"] = item.level_min
                    item_data["level_max"] = item.level_max
                    item_data["number"] = item.number
                    data["prop_mover_extend"][str(key)]["items"].append(item_data)

            if len(prop.kinds) > 0:
                data["prop_mover_extend"][str(key)]["kinds"] = list()
                for it in prop.kinds:
                    kind = prop.kinds[it]
                    kind_data = dict()
                    kind_data["id_item"] = kind.id
                    kind_data["level_min"] = kind.min
                    kind_data["level_max"] = kind.max
                    data["prop_mover_extend"][str(key)]["kinds"].append(kind_data)

        with open(g_project.path_json_prop + 'propMoverEx.json', 'w') as fd:
            json.dump(data, fd, indent=4)

        gLogger.reset_section()


    def xml_format(self):
        gLogger.set_section("propmoverex")
        gLogger.info("writing XML propmoverex")

        root = ET.Element("prop_mover_extend")

        for key in self.properties:
            prop = self.properties[key]

            section = ET.SubElement(root, "mover")
            section.set("id_mover", str(prop.id_mover))
            section.set("gold_min", str(prop.gold.min))
            section.set("gold_max", str(prop.gold.max))
            section.set("max_item", str(prop.max_item))

            if len(prop.items) > 0:
                for it in prop.items:
                    section_item = ET.SubElement(section, "item")
                    item = prop.items[it]
                    section_item.set("id_item", str(item.id))
                    section_item.set("probability", str(item.probability))
                    section_item.set("level_min", str(item.level_min))
                    section_item.set("level_max", str(item.level_max))
                    section_item.set("number", str(item.number))

            if len(prop.kinds) > 0:
                for it in prop.kinds:
                    section_kind = ET.SubElement(section, "kind")
                    kind = prop.kinds[it]
                    section_kind.set("id_item", str(kind.id))
                    section_kind.set("level_min", str(kind.min))
                    section_kind.set("level_max", str(kind.max))

        tree = ET.ElementTree(root)
        tree.write(g_project.path_xml + 'propMoverExtend.xml', pretty_print=True, xml_declaration=True)

        gLogger.reset_section()

    def write_new_config(self, mode):
        if mode == "json":
            self.json_format()
        elif mode == "xml":
            self.xml_format()