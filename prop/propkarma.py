from collections import OrderedDict
from utils.logger import gLogger
from lxml import etree as ET


class PropKarma:


    def __init__(self):
        self.nGrade = 0
        self.szName = 1
        self.dwKarmaPoint = 2
        self.dwGrade = 3
        self.dwColor = 4
        self.dwKarmaRecoverPoint = 5
        self.dwDiscountRate = 6
        self.dwSellPenaltyRate = 7
        self.dwGuardReaction = 8
        self.SubtractExpRate = 9
        self.nDropGoldPercent = 10
        self.nDropItem = 11
        self.nDropPercent = 12
        self.dwKarmaRecoverNum = 13
        self.dwStatLimitTime = 14
        self.dwStatLimitNum = 15
        self.dwStatLimitRate = 16
        self.szComment = 17


    def toString(self):
        toString = str(str(self.nGrade) + " " + str(self.szName) + " " + str(self.dwKarmaPoint) + " " + \
		str(self.dwGrade) + " " + str(self.dwColor) + " " + str(self.dwKarmaRecoverPoint) + " " + \
		str(self.dwDiscountRate) + " " + str(self.dwSellPenaltyRate) + " " + str(self.dwGuardReaction) + " " + \
		str(self.SubtractExpRate) + " " + str(self.nDropGoldPercent) + " " + str(self.nDropItem) + " " + \
		str(self.nDropPercent) + " " + str(self.dwKarmaRecoverNum) + " " + str(self.dwStatLimitTime) + " " + \
		str(self.dwStatLimitNum) + " " + str(self.dwStatLimitRate) + " " + str(self.szComment))
        return toString


    def getIdMax(self):
        return 17


    def getSize(self):
        return self.getIdMax() + 1


    def load(self, f):
        gLogger.set_section("propkarma")
        gLogger.info("Loading: ", f)
        datas = OrderedDict()
        with open(f, "r") as fd:
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
                    if it != "" and len(it) > 0:
                        cpy.append(it)
                arr = cpy
                if len(arr) < self.getSize():
                    continue
                datas[arr[self.nGrade]] = PropKarma()
                for key in self.__dict__:
                    setattr(datas[arr[self.nGrade]], key, arr[getattr(self, key)])
        gLogger.reset_section()
        return datas


    def filter(self, karmas, textKarma):
        gLogger.set_section("propkarma")

        karma_name_undeclared = list()
        karma_comment_undeclared = list()
        karma_color_invalid = list()

        gLogger.info("name and comment")
        for it in karmas:
            karma = karmas[it]
            if karma.szName not in textKarma and karma.szName not in karma_name_undeclared:
                karma_name_undeclared.append(karma.szName)
            if karma.szComment not in textKarma and karma.szComment not in karma_name_undeclared:
                karma_comment_undeclared.append(karma.szComment)

        gLogger.info("color")
        for it in karmas:
            karma = karmas[it]
            try:
                nb = int(str(karma.dwColor), 16)
            except:
                if karma.dwColor not in karma_color_invalid:
                    karma_color_invalid.append(karma.dwColor)

        gLogger.write(gProject.path_filter + "karma_name_undeclared.txt", karma_name_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="names undeclared:",
                undeclared=len(karma_name_undeclared),
                total=len(karmas)))
        gLogger.write(gProject.path_filter + "karma_comment_undeclared.txt", karma_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="comment undeclared:",
                undeclared=len(karma_comment_undeclared),
                total=len(karmas)))
        gLogger.write(gProject.path_filter + "karma_color_invalid.txt", karma_color_invalid, "{infos}: {undeclared}/{total}".format(
                infos="color invalid:",
                undeclared=len(karma_color_invalid),
                total=len(karmas)))

        gLogger.reset_section()

        return karma_name_undeclared, karma_comment_undeclared


    def skip_value(self, key, value):
        try:
            v = int(value)
            if v == 0:
                return True
        except:
            if value == "=" or value == "":
                return True
        return False


    def write_new_config(self, karmas):
        gLogger.set_section("propctrls")

        root = ET.Element("karmas")

        for it in karmas:
            karma = karmas[it]
            section = ET.SubElement(root, "grade")
            for key in karma.__dict__:
                value = getattr(karma, key)
                value = value.replace('"', "")
                if self.skip_value(key, value) is True:
                    continue
                section.set(key, value)
        tree = ET.ElementTree(root)
        tree.write(g_projectpath_xml + 'propKarma.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()