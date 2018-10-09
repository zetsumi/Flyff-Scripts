from lxml import etree as ET
from collections import OrderedDict
from logger import gLogger


class PropCtrl:


    def __init__(self):
        self.dwID = 0
        self.szName = 1
        self.dwCtrlKind1 = 2
        self.dwCtrlKind2 = 3
        self.dwCtrlKind3 = 4
        self.dwSfxCtrl = 5
        self.dwSndDamage = 6 #usless parameter
        self.szComment = 7


    def toString(self):
        toString = str(str(self.dwID) + " " + str(self.szName) + " " + str(self.dwCtrlKind1) + " " + \
		    str(self.dwCtrlKind2) + " " + str(self.dwCtrlKind3) + " " + str(self.dwSfxCtrl) + " " + \
		    str(self.dwSndDamage) + " " + str(self.szComment))
        return toString


    def getIdMax(self):
        return 7


    def getSize(self):
        return self.getIdMax() + 1


    def load(self, f):
        gLogger.set_section("propctrl")
        gLogger.info("Loading: ", f)
        ctrls = {}
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
                ctrls[arr[self.dwID]] = PropCtrl()
                for key in self.__dict__:
                    setattr(ctrls[arr[self.dwID]], key, arr[getattr(self, key)])
        gLogger.reset_section()
        return ctrls


    def filter(self, ctrls, defineObj, defineItemKind, textCtrl):
        gLogger.set_section("propCtrl")

        ctrl_undeclared = []
        ctrl_name_undeclared = []
        ctrl_comment_undeclared = []
        ctrl_item_kind_undeclared = []
        ctrl_sfx_undeclared = []

        gLogger.info("ID")
        for it in ctrls:
            ctrl = ctrls[it]
            if ctrl.dwID not in defineObj:
                if ctrl.dwID not in ctrl_undeclared:
                    ctrl_undeclared.append(ctrl.dwID)
        
        gLogger.info("Name and Comment")
        for it in ctrls:
            ctrl = ctrls[it]
            if ctrl.szName not in textCtrl:
                if ctrl.szName not in ctrl_name_undeclared:
                    ctrl_name_undeclared.append(ctrl.szName)
            if ctrl.szComment not in textCtrl:
                if ctrl.szComment not in ctrl_comment_undeclared:
                    ctrl_comment_undeclared.append(ctrl.szComment)

        gLogger.info("Item Kind")
        for it in ctrls:
            ctrl = ctrls[it]
            if ctrl.dwCtrlKind1 not in defineItemKind:
                if ctrl.dwCtrlKind1 not in ctrl_item_kind_undeclared:
                    ctrl_item_kind_undeclared.append(ctrl.dwCtrlKind1)
            if ctrl.dwCtrlKind2 not in defineItemKind:
                if ctrl.dwCtrlKind2 not in ctrl_item_kind_undeclared:
                    ctrl_item_kind_undeclared.append(ctrl.dwCtrlKind2)
            if ctrl.dwCtrlKind3 not in defineItemKind:
                if ctrl.dwCtrlKind3 not in ctrl_item_kind_undeclared:
                    ctrl_item_kind_undeclared.append(ctrl.dwCtrlKind3)

        gLogger.info("Sfx")
        for it in ctrls:
            ctrl = ctrls[it]
            if ctrl.dwSfxCtrl == "=":
                continue
            if ctrl.dwSfxCtrl not in defineObj and ctrl.dwSfxCtrl not in ctrl_sfx_undeclared:
                ctrl_sfx_undeclared.append(ctrl.dwSfxCtrl)

        gLogger.write("./filter/ctrl_undeclared.txt", ctrl_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl undeclared",
                undeclared=len(ctrl_undeclared),
                total=len(ctrls)))
        gLogger.write("./filter/ctrl_name_undeclared.txt", ctrl_name_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl Name undeclared:",
                undeclared=len(ctrl_name_undeclared),
                total=len(ctrls)))
        gLogger.write("./filter/ctrl_comment_undeclared.txt", ctrl_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl Comment undeclared:",
                undeclared=len(ctrl_comment_undeclared),
                total=len(ctrls)))
        gLogger.write("./filter/ctrl_item_kind_undeclared.txt", ctrl_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl ItemKind undeclared:",
                undeclared=len(ctrl_item_kind_undeclared),
                total=len(ctrls)))
        gLogger.write("./filter/ctrl_sfx_undeclared.txt", ctrl_sfx_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl SFX undeclared:",
                undeclared=len(ctrl_sfx_undeclared),
                total=len(ctrls)))
        gLogger.reset_section()

    def skip_value(self, key, value):
        if key == "dwID":
            return True
        try:
            v = int(value)
            if v == 0:
                return True
        except:
            if value == "=" or value == "":
                return True
        return False


    def write_new_config(self, ctrls):
        gLogger.set_section("propctrls")

        root = ET.Element("ctrls")
        section_trigger = ET.SubElement(root, "trigger")
        section_house = ET.SubElement(root, "housing")
        section_guild_house = ET.SubElement(root, "guild_house")
        section_chest = ET.SubElement(root, "chest")
        section_door = ET.SubElement(root, "door")
        section_unknow = ET.SubElement(root, "unknow")

        sections_kind1 = dict()
        sections_kind1["CK1_TRIGGER"] = section_trigger
        sections_kind1["CK1_HOUSING"] = section_house
        sections_kind1["CK1_GUILD_HOUSE"] = section_guild_house
        sections_kind1["CK1_CHEST"] = section_chest
        sections_kind1["CK1_DOOR"] = section_door

        for it in ctrls:
            ctrl = ctrls[it]
            section = None

            if ctrl.dwCtrlKind1 in sections_kind1:
                section = ET.SubElement(sections_kind1[ctrl.dwCtrlKind1], "ctrl")

            if section is None:
                section = ET.SubElement(section_unknow, "ctrl")

            section.set("dwID", ctrl.dwID)
            for key in ctrl.__dict__:
                value = getattr(ctrl, key)
                value = value.replace('"', "")
                if self.skip_value(key, value) is True:
                    continue
                section.set(key, value)


        tree = ET.ElementTree(root)
        tree.write('xml/propCtrl.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()