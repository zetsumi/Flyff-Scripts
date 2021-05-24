import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project


class Invalid:

    def __init__(self):
        self.data = OrderedDict({"invalid": list()})
        self.in_filename = str()
        self.out_filename_xml = g_project.path_xml + 'invalid.xml'
        self.out_filename_json = g_project.path_json_prop + 'invalid.json'

    def load(self, filename):
        gLogger.set_section("filter")
        self.in_filename = filename
        gLogger.info("loading:", self.in_filename)

        with open(self.in_filename, 'r', encoding="utf-8") as fd:
            for line in fd:
                line = line.replace("\n", "")
                if len(line) == 0:
                    continue
                self.data["invalid"].append(line)
            print(self.data)

        gLogger.reset_section()

    def __write_format_json__(self):
        gLogger.set_section("filter")
        gLogger.info("writing:", self.out_filename_json)
        with open(self.out_filename_json, 'w') as fd:
            json.dump(self.data, fd, indent=4)
        gLogger.reset_section()

    def __write_format_xml__(self):
        gLogger.set_section("invalid")
        gLogger.info("writing:", self.out_filename_xml)

        root = ET.Element("invalids")
        for k in self.data["invalid"]:
            section = ET.SubElement(root, "invalid")
            section.set("text", k)
        tree = ET.ElementTree(root)
        tree.write(self.out_filename_xml, pretty_print=True, xml_declaration=True)
        gLogger.reset_section()

    def write_new_config(self, mode):
        if mode == 'xml':
            self.__write_format_xml__()
        elif mode == 'json':
            self.__write_format_json__()