import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from utils.text import Text
from utils.define import Define
from project import g_project

class PositionMonster:
    def __init__(self):
        self.id_world = 0
        self.x = 0
        self.y =0
        self.z = 0

    def add_position(self, val):
        if self.x == 0:
            self.x = val
        elif self.y == 0:
            self.y = val
        elif self.z == 0:
            self.z = val

class DataMonster:
    def __init__(self):
        self.interval = 0
        self.replace = 0
        self.active_attack = False
        self.position = list()

    def load(self, datas):
        for it in datas:
            if "nInterval" in it:
                arr = it.split("\t")
                for index in arr:
                    if len(index) == 0:
                        continue
                    try:
                        self.interval = int(index)
                    except:
                        continue
            elif "nReplace" in it:
                arr = it.split("\t")
                for index in arr:
                    if len(index) == 0:
                        continue
                    try:
                        self.replace = int(index)
                    except:
                        continue
            elif "bActiveAttack" in it:
                arr = it.split("\t")
                for index in arr:
                    if len(index) == 0:
                        continue
                    try:
                        self.active_attack = int(index)
                    except:
                        continue

        size = len(datas)
        for i in range(0, size):
            if "vRangda" in datas[i]:
                i = i + 2
                id_world = ""
                positionMonster = PositionMonster()
                while "}" not in datas[i]:
                    line_splited = datas[i].split("\t")
                    for it in line_splited:
                        if len(it) == 0:
                            continue
                        if " " in it:
                            positions = it.split(" ")
                            for p in positions:
                                try:
                                    positionMonster.add_position(float(p))
                                except:
                                    pass
                        else:
                            positionMonster.id_world = it
                    i = i + 1
                    self.position.append(positionMonster)

class RandomEventMonster(object):
    def __init__(self):
        self.properties = OrderedDict()

    def load(self, filename):
        gLogger.set_section("RandomEventMonster")
        gLogger.info("loading", filename)
        movers = dict()
        with open(filename) as fd:
            id = ""
            for line in fd:
                line = line.replace("\n", "").replace(";", "")
                if len(line) == 0:
                    continue
                if "MI_" in line and line[0] == 'M' and line[1] == 'I' and line [2] == '_':
                    id = line
                    movers[id] = list()
                if id != "":
                    movers[id].append(line)

        for it in movers:
            data = DataMonster()
            data.load(movers[it])
            self.properties[it] = data

        gLogger.reset_section()

    def json_format(self):
        gLogger.set_section("RandomEventMonster")
        gLogger.info("writing JSON randomeventmonster.json")

        data= dict()
        data["random_event_monster"] = dict()
        for key in self.properties:
            prop = self.properties[key]
            data["random_event_monster"][str(key)] = dict()
            data["random_event_monster"][str(key)]["interval"] = int(prop.interval)
            data["random_event_monster"][str(key)]["replace"] = int(prop.replace)
            data["random_event_monster"][str(key)]["active_attack"] = int(prop.active_attack)
            data["random_event_monster"][str(key)]["positions"] = list()
            for position in prop.position:
                vPos = dict()
                vPos["world"] = position.id_world
                vPos["x"] = position.x
                vPos["y"] = position.y
                vPos["z"] = position.z
                data["random_event_monster"][str(key)]["positions"].append(vPos)


        with open(g_project.path_json_prop + 'randomEventMonster.json', 'w') as fd:
            json.dump(data, fd, indent=4)

        gLogger.reset_section()



    def write_new_config(self, mode):
        if mode == "json":
            self.json_format()