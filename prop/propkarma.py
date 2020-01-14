import json
from collections import OrderedDict
from utils.logger import gLogger
from lxml import etree as ET
from utils.common import convert_value
from project import g_project

KarmaProperties = {
    "nGrade": 0,
    "szName": 1,
    "dwKarmaPoint": 2,
    "dwGrade": 3,
    "dwColor": 4,
    "dwKarmaRecoverPoint": 5,
    "dwDiscountRate": 6,
    "dwSellPenaltyRate": 7,
    "dwGuardReaction": 8,
    "SubtractExpRate": 9,
    "nDropGoldPercent": 10,
    "nDropItem": 11,
    "nDropPercent": 12,
    "dwKarmaRecoverNum": 13,
    "dwStatLimitTime": 14,
    "dwStatLimitNum": 15,
    "dwStatLimitRate": 16,
    "szComment": 17
}


class PropKarma:


    def __init__(self):
        self.karmas = OrderedDict()

    def load(self, f):
        gLogger.set_section("propkarma")
        gLogger.info("Loading: ", f)
        with open(f, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or \
                    len(line) <= 0 or \
                    line == "":
                    continue
                arr = line.split("\t")
                cpy = list()
                for it in arr:
                    if len(it) > 0:
                        cpy.append(it)
                arr = cpy
                if len(arr) < len(KarmaProperties):
                    continue
                id_karma = arr[KarmaProperties["nGrade"]]
                self.karmas[id_karma] = dict()
                print(arr)
                for key in KarmaProperties:
                    value = convert_value(key, arr[KarmaProperties[key]].replace("\"", "").replace(" ", ""))
                    self.karmas[id_karma][key] = value
        gLogger.reset_section()


    def filter(self, textKarma):
        gLogger.set_section("propkarma")

        karma_name_undeclared = list()
        karma_comment_undeclared = list()
        karma_color_invalid = list()

        gLogger.info("name and comment")
        for it in self.karmas:
            karma = karmas[it]
            if karma.szName not in textKarma and karma.szName not in karma_name_undeclared:
                karma_name_undeclared.append(karma.szName)
            if karma.szComment not in textKarma and karma.szComment not in karma_name_undeclared:
                karma_comment_undeclared.append(karma.szComment)

        gLogger.info("color")
        for it in self.karmas:
            karma = karmas[it]
            try:
                nb = int(str(karma.dwColor), 16)
            except:
                if karma.dwColor not in karma_color_invalid:
                    karma_color_invalid.append(karma.dwColor)

        gLogger.write(g_project.path_filter + "karma_name_undeclared.txt", karma_name_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="names undeclared:",
                undeclared=len(karma_name_undeclared),
                total=len(karmas)))
        gLogger.write(g_project.path_filter + "karma_comment_undeclared.txt", karma_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="comment undeclared:",
                undeclared=len(karma_comment_undeclared),
                total=len(karmas)))
        gLogger.write(g_project.path_filter + "karma_color_invalid.txt", karma_color_invalid, "{infos}: {undeclared}/{total}".format(
                infos="color invalid:",
                undeclared=len(karma_color_invalid),
                total=len(karmas)))

        gLogger.reset_section()

        return karma_name_undeclared, karma_comment_undeclared

    def write_new_config(self, mode):
        if mode == 'json':
            self.write_json_config()
        elif mode == 'xml':
            self.write_xml_config()

    def write_json_config(self):
        gLogger.set_section("propkarma")
        gLogger.info("writing config JSON")

        with open(g_project.path_json + 'propKarma.json', 'w') as fd:
            json.dump(self.karmas, fd, indent=4)
        gLogger.reset_section()

    def write_xml_config(self):
        gLogger.set_section("propkarma")
        gLogger.info("writing config XML")

        root = ET.Element("karmas")

        for it in self.karmas:
            karma = self.karmas[it]
            section = ET.SubElement(root, "grade")
            for key in karma:
                value = karma[key]
                section.set(str(key), str(value))
        tree = ET.ElementTree(root)
        tree.write(g_project.path_xml + 'propKarma.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()
