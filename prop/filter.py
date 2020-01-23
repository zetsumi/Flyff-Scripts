import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project


class Filter:

    def __init__(self):
        self.data = OrderedDict()
        self.in_filename = str()
        self.out_filename_xml = g_project.path_xml + 'filter.xml'
        self.out_filename_json = g_project.path_json_prop + 'filter.json'

    def load(self, filename):
        gLogger.set_section("filter")
        self.in_filename = filename
        gLogger.info("loading:", self.in_filename)

        with open(self.in_filename, 'r', encoding="utf-8") as fd:
            for line in fd:
                line = line.replace("\n", "")
                arr = line.split('"')
                if len(arr) < 4:
                    continue
                self.data[str(arr[1])] = str(arr[3])

        gLogger.reset_section()

    def __write_format_json__(self):
        gLogger.set_section("filter")
        gLogger.info("writing:", self.out_filename_json)
        with open(self.out_filename_json, 'w') as fd:
            json.dump(self.data, fd, indent=4)
        gLogger.reset_section()

    def __write_format_xml__(self):
        gLogger.set_section("filter")
        gLogger.info("writing:", self.out_filename_xml)

        root = ET.Element("filters")
        for k in self.data:
            section = ET.SubElement(root, "filter")
            section.set("text", k)
            section.set("replace", self.data[k])
        tree = ET.ElementTree(root)
        tree.write(self.out_filename_xml, pretty_print=True, xml_declaration=True)
        gLogger.reset_section()

    def write_new_config(self, mode):
        if mode == 'xml':
            self.__write_format_xml__()
        elif mode == 'json':
            self.__write_format_json__()
