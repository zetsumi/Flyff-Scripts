import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project


class DiePenalty:

    def __init__(self):
        self.data = OrderedDict()
        self.in_filename = str()
        self.out_filename_xml = g_project.path_xml + 'die_penalty.xml'
        self.out_filename_json = g_project.path_json_prop + 'die_penalty.json'

    def load(self, fn):
        gLogger.set_section("die penalty")
        self.in_filename = fn
        gLogger.info("loading :", self.in_filename)

        with open(self.in_filename, 'r', encoding="ISO-8859-1") as fd:
            stat = str()
            for line in fd:
                line = line.replace("\n", "").replace(" ", "")
                if "ADDPENALTY" not in line and "}" not in line and "{" not in line:
                    stat = line
                    if len(stat) > 0:
                        self.data[stat] = OrderedDict()
                elif "ADDPENALTY" in line:
                    arr = line.split("\t")
                    index = str(arr[2])
                    value = int(arr[3])
                    if len(stat) > 0:
                        self.data[stat][index] = value

        gLogger.reset_section()

    def __write_json__(self):
        gLogger.set_section("diepenalty")
        gLogger.info("writing:", self.out_filename_json)
        with open(self.out_filename_json, 'w') as fd:
            json.dump(self.data, fd, indent=4)
        gLogger.reset_section()

    def __write_xml__(self):
        gLogger.set_section("diepenalty")
        gLogger.info("writing:", self.out_filename_xml)
        root = ET.Element("penalties")
        for k in self.data:
            section = ET.SubElement(root, k)
            for j in self.data[k]:
                sub_section = ET.SubElement(section, "penalty")
                sub_section.set("id", str(j))
                sub_section.set("value", str(self.data[k][j]))
        tree = ET.ElementTree(root)
        tree.write(self.out_filename_xml, pretty_print=True, xml_declaration=True)
        gLogger.reset_section()


    def write_new_config(self, mode):
        if mode == 'xml':
            self.__write_xml__()
        elif mode == 'json':
            self.__write_json__()
