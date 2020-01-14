import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project
from utils.common import convert_value

CtrlProperties = {
    "dwID" : 0,
    "szName" : 1,
    "dwCtrlKind1" : 2,
    "dwCtrlKind2" : 3,
    "dwCtrlKind3" : 4,
    "dwSfxCtrl" : 5,
    "dwSndDamage" : 6,
    "szComment" : 7
}

class PropCtrl:

    def __init__(self):
        self.ctrls = OrderedDict()

    def load(self, f):
        gLogger.set_section("propctrl")
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
                    if it != "" and len(it) > 0:
                        cpy.append(it)
                arr = cpy
                if len(arr) < len(CtrlProperties):
                    continue
                id_ctrl = arr[CtrlProperties["dwID"]]
                self.ctrls[id_ctrl] = dict()
                for key in CtrlProperties:
                    value = convert_value(key, arr[CtrlProperties[key]].replace("\"", "").replace(" ", ""))
                    self.ctrls[id_ctrl][key] = value
        gLogger.reset_section()


    def filter(self, defineObj, defineItemKind, textCtrl):
        gLogger.set_section("propCtrl")

        ctrl_undeclared = []
        ctrl_name_undeclared = []
        ctrl_comment_undeclared = []
        ctrl_item_kind_undeclared = []
        ctrl_sfx_undeclared = []

        gLogger.info("ID")
        for it in self.ctrls:
            ctrl = ctrls[it]
            if ctrl.dwID not in defineObj:
                if ctrl.dwID not in ctrl_undeclared:
                    ctrl_undeclared.append(ctrl.dwID)

        gLogger.info("Name and Comment")
        for it in self.ctrls:
            ctrl = ctrls[it]
            if ctrl.szName not in textCtrl:
                if ctrl.szName not in ctrl_name_undeclared:
                    ctrl_name_undeclared.append(ctrl.szName)
            if ctrl.szComment not in textCtrl:
                if ctrl.szComment not in ctrl_comment_undeclared:
                    ctrl_comment_undeclared.append(ctrl.szComment)

        gLogger.info("Item Kind")
        for it in self.ctrls:
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
        for it in self.ctrls:
            ctrl = ctrls[it]
            if ctrl.dwSfxCtrl == "=":
                continue
            if ctrl.dwSfxCtrl not in defineObj and ctrl.dwSfxCtrl not in ctrl_sfx_undeclared:
                ctrl_sfx_undeclared.append(ctrl.dwSfxCtrl)

        gLogger.write(g_project.path_filter + "ctrl_undeclared.txt", ctrl_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl undeclared",
                undeclared=len(ctrl_undeclared),
                total=len(ctrls)))
        gLogger.write(g_project.path_filter + "ctrl_name_undeclared.txt", ctrl_name_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl Name undeclared:",
                undeclared=len(ctrl_name_undeclared),
                total=len(ctrls)))
        gLogger.write(g_project.path_filter + "ctrl_comment_undeclared.txt", ctrl_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl Comment undeclared:",
                undeclared=len(ctrl_comment_undeclared),
                total=len(ctrls)))
        gLogger.write(g_project.path_filter + "ctrl_item_kind_undeclared.txt", ctrl_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Ctrl ItemKind undeclared:",
                undeclared=len(ctrl_item_kind_undeclared),
                total=len(ctrls)))
        gLogger.write(g_project.path_filter + "ctrl_sfx_undeclared.txt", ctrl_sfx_undeclared, "{infos}: {undeclared}/{total}".format(
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
        except ValueError:
            if value == "=" or value == "":
                return True
        return False

    def write_new_config(self, mode):
        if mode == 'json':
            self.write_json_config()
        elif mode == 'xml':
            self.write_xml_config()

    def write_json_config(self):
        gLogger.set_section("propctrl")
        gLogger.info("writing config JSON")

        with open(g_project.path_json + 'propCtrl.json', 'w') as fd:
            json.dump(self.ctrls, fd, indent=4)
        gLogger.reset_section()

    def write_xml_config(self):
        gLogger.set_section("propctrls")
        gLogger.info("writing config XML")

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

        for it in self.ctrls:
            ctrl = self.ctrls[it]
            section = None

            if str(ctrl["dwCtrlKind1"]) in sections_kind1:
                section = ET.SubElement(sections_kind1[str(ctrl["dwCtrlKind1"])], "ctrl")

            if section is None:
                section = ET.SubElement(section_unknow, "ctrl")

            section.set("dwID", str(ctrl["dwID"]))
            for key in ctrl:
                value = str(ctrl[key])
                if self.skip_value(str(key), value) is True:
                    continue
                section.set(str(key), value)


        tree = ET.ElementTree(root)
        tree.write(g_project.path_xml + 'propCtrl.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()