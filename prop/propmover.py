import json
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from utils.common import skip_preproc
from utils.text import Text
from utils.define import Define
from project import g_project

MoverParams = {
    "dwID": 0,
    "szName": 1,
    "dwAI": 2,
    "dwStr": 3,
    "dwSta": 4,
    "dwDex": 5,
    "dwInt": 6,
    "dwHR": 7,
    "dwER": 8,
    "dwRace": 9,
    "dwBelligerence": 10,
    "dwGender": 11,
    "dwLevel": 12,
    "dwFilghtLevel": 13,
    "dwSize": 14,
    "dwClass": 15,
    "bIfPart": 16,
    "dwKarma": 17,
    "dwUseable": 18,
    "dwActionRadius": 19,
    "dwAtkMin": 20,
    "dwAtkMax": 21,
    "dwAtk1": 22,
    "dwAtk2": 23,
    "dwAtk3": 24,
    "dwHorizontalRate": 25,
    "dwVerticalRate": 26,
    "dwDiagonalRate": 27,
    "dwThrustRate": 28,
    "dwChestRate": 29,
    "dwHeadRate": 30,
    "dwArmRate": 31,
    "dwLegRate": 32,
    "dwAttackSpeed": 33,
    "dwReAttackDelay": 34,
    "dwAddHp": 35,
    "dwAddMp": 36,
    "dwNaturealArmor": 37,
    "nAbrasion": 38,
    "nHardness": 39,
    "dwAdjAtkDelay": 40,
    "eElementType": 41,
    "wElementAtk": 42,
    "dwHideLevel": 43,
    "fSpeed": 44,
    "dwShelter": 45,
    "bFlying": 46,
    "dwJumpIng": 47,
    "dwAirJump": 48,
    "bTaming": 49,
    "dwResisMagic": 50,
    "fResistElecricity": 51,
    "fResistFire": 52,
    "fResistWind": 53,
    "fResistWater": 54,
    "fResistEarth": 55,
    "dwCash": 56,
    "dwSourceMaterial": 57,
    "dwMaterialAmount": 58,
    "dwCohesion": 59,
    "dwHoldingTime": 60,
    "dwCorrectionValue": 61,
    "dwExpValue": 62,
    "nFxpValue": 63,
    "nBodyState": 64,
    "dwAddAbility": 65,
    "bKillable": 66,
    "dwVirtItem1": 67,
    "dwVirtType1": 68,
    "dwVirtItem2": 69,
    "dwVirtType2": 70,
    "dwVirtItem3": 71,
    "dwVirtType3": 72,
    "dwSndAtk1": 73,
    "dwSndAtk2": 74,
    "dwSndDie1": 75,
    "dwSndDie2": 76,
    "dwSndDmg1": 77,
    "dwSndDmg2": 78,
    "dwSndDmg3": 79,
    "dwSndIdle1": 80,
    "dwSndIdle2": 81,
    "szComment": 82
}


def skip_value(key, value):
    if value is None or value == "=":
        return True
    if key == "dwID":
        return True
    if key == "dwClass":
        return True
    try:
        v = int(value)
        if v == 0:
            return True
    except ValueError:
        if value == "=" or value == "":
            return True
    return False


class PropMover:

    def __init__(self):
        self.movers = dict()
        self.items = None
        self.in_filename = str()
        self.out_filename_xml = g_project.path_xml + 'propMover.xml'
        self.out_filename_json = g_project.path_json_prop + 'propMover.json'

    def load(self, file_prop, ):
        gLogger.set_section("propmover")
        self.in_filename = file_prop
        gLogger.info("Loading: ", self.in_filename)

        with open(self.in_filename, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                if skip_preproc(line) is True:
                    continue
                if "//" in line:
                    continue
                line = line.replace("\n", "")
                arr = line.split("\t")
                copy = []
                for it in arr:
                    if it != "":
                        copy.append(it)
                arr = copy

                if len(MoverParams) != len(arr):
                    continue

                mover_id = arr[0]
                self.movers[mover_id] = dict()
                for key in MoverParams:
                    self.movers[mover_id][key] = arr[MoverParams[key]].replace("\"", "")

        gLogger.reset_section()
        return True

    def filter(self):
        gLogger.info("Filtering propmover")
        gLogger.set_section("propmover")

        mover_undeclared = []
        mover_unused = []
        weapon_undeclared = []
        mover_name_undeclared = []
        mover_comment_undeclared = []

        # pass
        for key in self.movers:
            mover = self.movers[key]
            #            if key not in self.define.datas:
            #                mover_undeclared.append(key)
            #           if mover["szComment"] not in self.text.datas:
            #                mover_comment_undeclared.append(key)
            #            if mover["szName"] not in self.text.datas:
            #                mover_name_undeclared.append(key)
            if self.items is not None:
                if mover["dwAtk1"] not in self.items:
                    weapon_undeclared.append(mover["dwAtk1"])
                if mover["dwAtk2"] not in self.items:
                    weapon_undeclared.append(mover["dwAtk2"])
                if mover["dwAtk3"] not in self.items:
                    weapon_undeclared.append(mover["dwAtk3"])

        gLogger.write(g_project.path_filter + "mover_undeclared.txt", mover_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Movers undeclared:",
                          undeclared=len(mover_undeclared),
                          total=len(self.movers)))
        gLogger.write(g_project.path_filter + "mover_unused.txt", mover_unused, "{infos}: {undeclared}/{total}".format(
            infos="Movers mover_unused:",
            undeclared=len(mover_unused),
            total=len(self.movers)))
        gLogger.write(g_project.path_filter + "mover_name_undeclared.txt", mover_name_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Movers mover_name_undeclared:",
                          undeclared=len(mover_name_undeclared),
                          total=len(self.movers)))
        gLogger.write(g_project.path_filter + "mover_comment_undeclared.txt", mover_comment_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Movers mover_comment_undeclared:",
                          undeclared=len(mover_comment_undeclared),
                          total=len(self.movers)))
        gLogger.reset_section()

        return mover_undeclared, mover_unused, weapon_undeclared, mover_name_undeclared, mover_comment_undeclared

    def replace(self, textMover):
        if self.szName != "=":
            if len(self.szName) >= 0 and self.szName != "" and self.szName in textMover:
                self.szName = '\"' + textMover[self.szName] + '\"'
        if self.szComment != "=":
            if self.szComment != "" and len(self.szComment) > 0 and self.szComment in textMover:
                self.szComment = '\"' + textMover[self.szComment] + '\"'

    def __write_xml_format__(self):
        gLogger.set_section("promover")
        gLogger.info("Writing propmover XML")

        root = ET.Element("movers")
        movers_players = ET.SubElement(root, "player")
        movers_npcs = ET.SubElement(root, "npc")
        movers_monsters = ET.SubElement(root, "monster")
        movers_pets = ET.SubElement(root, "pet")
        movers_unknow = ET.SubElement(root, "unknow")

        movers_monsters_special = ET.SubElement(movers_monsters, "special")

        movers_monsters_rank = dict()
        movers_monsters_rank["RANK_LOW"] = ET.SubElement(movers_monsters, "low")
        movers_monsters_rank["RANK_NORMAL"] = ET.SubElement(movers_monsters, "normal")
        movers_monsters_rank["RANK_CAPTAIN"] = ET.SubElement(movers_monsters, "captain")
        movers_monsters_rank["RANK_MIDBOSS"] = ET.SubElement(movers_monsters, "midboss")
        movers_monsters_rank["RANK_BOSS"] = ET.SubElement(movers_monsters, "boss")
        movers_monsters_rank["RANK_SUPER"] = ET.SubElement(movers_monsters, "super")
        movers_monsters_rank["RANK_MATERIAL"] = ET.SubElement(movers_monsters_special, "material")
        movers_monsters_rank["RANK_GUARD"] = ET.SubElement(movers_monsters_special, "guard")

        for it in self.movers:
            mover = self.movers[it]
            section = None

            if mover["dwAI"] == "AII_NONE":
                section = movers_npcs
            elif mover["dwAI"] == "AII_MOVER":
                section = movers_players
            elif mover["dwAI"] == "AII_PET" or mover["dwAI"] == "AII_EGG":
                section = movers_pets
            elif mover["dwAI"] == "AII_MONSTER" or mover["dwAI"] == "AII_CLOCKWORKS" or \
                    mover["dwAI"] == "AII_BIGMUSCLE" or mover["dwAI"] == "AII_KRRR" or \
                    mover["dwAI"] == "AII_BEAR" or mover["dwAI"] == "AII_METEONYKER":
                section = movers_monsters

            if section is not None:
                if section is movers_monsters:
                    if mover["dwClass"] != "=" and mover["dwClass"] in movers_monsters_rank:
                        section = ET.SubElement(movers_monsters_rank[mover["dwClass"]], "mover")
                elif section is movers_players:
                    section = ET.SubElement(movers_players, "mover")
                elif section is movers_npcs:
                    section = ET.SubElement(movers_npcs, "mover")
                elif section is movers_pets:
                    section = ET.SubElement(movers_pets, "mover")

            if section is None:
                section = ET.SubElement(movers_unknow, "mover")

            section.set("dwID", mover["dwID"])
            for key in mover:
                value = mover[key]
                value = value.replace('"', "")
                if skip_value(key, value) is True:
                    continue
                section.set(key, value)

        tree = ET.ElementTree(root)
        tree.write(self.out_filename_xml, pretty_print=True, xml_declaration=True)

        gLogger.reset_section()

    def __write_json_format__(self):
        gLogger.set_section("propmover")
        gLogger.info("writing config JSON")

        with open(self.out_filename_json, 'w') as fd:
            json.dump(self.movers, fd, indent=4)
        gLogger.reset_section()

    def write_new_config(self, mode):
        if mode == 'json':
            self.__write_json_format__()
        elif mode == 'xml':
            self.__write_xml_format__()

