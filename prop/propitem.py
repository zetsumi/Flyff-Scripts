import json
import subprocess
from lxml import etree as ET
from collections import OrderedDict
from project import g_project
from utils.logger import gLogger
from utils.text import Text
from utils.define import Define
from .prop import Prop
from utils.common import convert_value

ItemParameters = {
    "version": 0,
    "dwID": 1,
    "szName": 2,
    "dwNum": 3,
    "dwPackMax": 4,
    "dwItemKind1": 5,
    "dwItemKind2": 6,
    "dwItemKind3": 7,
    "dwItemJob": 8,
    "bPermanence": 9,
    "dwUseable": 10,
    "dwItemSex": 11,
    "dwCost": 12,
    "dwEndurance": 13,
    "nAbrasion": 14,
    "nMaxRepair": 15,
    "dwHanded": 16,
    "dwFlag": 17,
    "dwParts": 18,
    "dwPartsub": 19,
    "bPartFile": 20,
    "dwExclusive": 21,
    "dwBasePartsIgnore": 22,
    "dwItemLV": 23,
    "dwItemRare": 24,
    "dwShopAble": 25,
    "bLog": 26,
    "bCharged": 27,
    "dwLinkKindBullet": 28,
    "dwLinkKind": 29,
    "dwAbilityMin": 30,
    "dwAbilityMax": 31,
    "eItemType": 32,
    "wItemEAtk": 33,
    "dwParry": 34,
    "dwBlockRating": 35,
    "dwAddSkillMin": 36,
    "dwAddSkillMax": 37,
    "dwAtkStyle": 38,
    "dwWeaponType": 39,
    "dwItemAtkOrder1": 40,
    "dwItemAtkOrder2": 41,
    "dwItemAtkOrder3": 42,
    "dwItemAtkOrder4": 43,
    "bContinuousPain": 44,
    "dwShellQuantity": 45,
    "dwRecoil": 46,
    "dwLoadingTime": 47,
    "nAdjHitRate": 48,
    "dwAttackSpeed": 49,
    "dwDmgShift": 50,
    "dwAttackRange": 51,
    "dwProbability": 52,
    "dwDestParam1": 53,
    "dwDestParam2": 54,
    "dwDestParam3": 55,
    "nAdjParamVal1": 56,
    "nAdjParamVal2": 57,
    "nAdjParamVal3": 58,
    "dwChgParamVal1": 59,
    "dwChgParamVal2": 60,
    "dwChgParamVal3": 61,
    "dwdestData1": 62,
    "dwdestData2": 63,
    "dwdestData3": 64,
    "dwactiveskill": 65,
    "dwactiveskillLv": 66,
    "dwactiveskillper": 67,
    "dwReqMp": 68,
    "dwRepFp": 69,
    "dwReqDisLV": 70,
    "dwReSkill1": 71,
    "dwReSkillLevel1": 72,
    "dwReSkill2": 73,
    "dwReSkillLevel2": 74,
    "dwSkillReadyType": 75,
    "dwSkillReady": 76,
    "dwSkillRange": 77,
    "dwSfxElemental": 78,
    "dwSfxObj": 79,
    "dwSfxObj2": 80,
    "dwSfxObj3": 81,
    "dwSfxObj4": 82,
    "dwSfxObj5": 83,
    "dwUseMotion": 84,
    "dwCircleTime": 85,
    "dwSkillTime": 86,
    "dwExeTarget": 87,
    "dwUseChance": 88,
    "dwSpellRegion": 89,
    "dwSpellType": 90,
    "dwReferStat1": 91,
    "dwReferStat2": 92,
    "dwReferTarget1": 93,
    "dwReferTarget2": 94,
    "dwReferValue1": 95,
    "dwReferValue2": 96,
    "dwSkillType": 97,
    "fItemResistElecricity": 98,
    "fItemResistFire": 99,
    "fItemResistWind": 100,
    "fItemResistWater": 101,
    "fItemResistEarth": 102,
    "nEvildoing": 103,
    "dwExpertLV": 104,
    "ExpertMax": 105,
    "dwSubDefine": 106,
    "dwExp": 107,
    "dwComboStyle": 108,
    "fFlightSpeed": 109,
    "fFlightLRAngle": 110,
    "fFlightTBAngle": 111,
    "dwFlightLimit": 112,
    "dwFFuelReMax": 113,
    "dwAFuelReMax": 114,
    "dwFuelRe": 115,
    "dwLimitLevel1": 116,
    "dwReflect": 117,
    "dwSndAttack1": 118,
    "dwSndAttack2": 119,
    "szIcon": 120,
    "dwQuestID": 121,
    "szTextFile": 122,
    "szComment": 123
}


class PropItem(Prop):

    def __init__(self):
        self.items = OrderedDict()
        self.in_filename = str()
        self.out_filename_xml = g_project.path_xml + 'propItem.xml'
        self.out_filename_json = g_project.path_json_prop + 'propItem.json'

    def __skip_preproc__(self, string):
        if 'ifdef' in string or 'endif' in string or 'ifndef' in string:
            return True
        return False

    def load(self, file_item):
        gLogger.set_section("propitem")
        self.in_filename = file_item
        gLogger.info("Loading: ", self.in_filename)

        with open(file_item, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                if self.__skip_preproc__(line) is True or "//" in line:
                    continue
                line = line.replace("\n", "")
                arr = line.split("\t")
                copy = []
                for it in arr:
                    if it != "":
                        copy.append(it)
                arr = copy
                if len(arr) < len(ItemParameters):
                    continue
                item_id = arr[1]
                self.items[item_id] = dict()
                for key in ItemParameters:
                    value = convert_value(key, arr[ItemParameters[key]].replace("\"", "").replace(" ", ""))
                    self.items[item_id][key] = value
        return True

    def filter(self, path_icon):
        gLogger.set_section("propitem")
        gLogger.info("Filtering")

        items_undeclared = []
        items_unused = []
        items_icon_unfound = []
        item_name_undeclared = []
        item_comment_undeclared = []

        for key in self.items:
            item = self.items[key]
            #            if key not in self.define.datas:
            #                items_undeclared.append(key)
            #            if item["szName"] not in self.text.datas:
            #                item_name_undeclared.append(key)
            #            if item["szComment"] not in self.text.datas:
            #                item_comment_undeclared.append(key)
            if len(item["szIcon"]) > 0:
                icon = item["szIcon"]
                out = subprocess.check_output(['find', path_icon, '-iname', icon])
                if out == "" or len(out) <= 0:
                    items_icon_unfound.append(icon)

        #        for it in self.define.datas:
        #            define = self.define.datas[it]
        #            if define.key not in self.items:
        #                items_unused.append(define.key)

        gLogger.write(g_project.path_filter + "items_undeclared.txt", items_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Items undeclared:",
                          undeclared=len(items_undeclared),
                          total=len(self.items)))
        gLogger.write(g_project.path_filter + "items_undefined.txt", items_unused,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Items unused:",
                          undeclared=len(items_unused),
                          total=len(self.items)))
        gLogger.write(g_project.path_filter + "items_icon_unfound.txt", items_icon_unfound,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Icon unfound:",
                          undeclared=len(items_icon_unfound),
                          total=len(self.items)))
        gLogger.write(g_project.path_filter + "item_name_undeclared.txt", item_name_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Name undeclared:",
                          undeclared=len(item_name_undeclared),
                          total=len(self.items)))
        gLogger.write(g_project.path_filter + "item_comment_undeclared.txt", item_comment_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Comment undeclared:",
                          undeclared=len(item_comment_undeclared),
                          total=len(self.items)))
        gLogger.reset_section()
        return True

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

    def write_new_config(self, mode):
        if mode == 'json':
            self.write_json_config()
        elif mode == 'xml':
            self.write_xml_config()

    def write_json_config(self):
        gLogger.set_section("propitem")
        gLogger.info("writing config JSON", self.out_filename_json)

        with open(self.out_filename_json, 'w') as fd:
            json.dump(self.items, fd, indent=4)
        gLogger.reset_section()

    def write_xml_config(self):
        gLogger.set_section("propitem")
        gLogger.info("writing config XML")

        root = ET.Element("items")
        section_gold = ET.SubElement(root, "gold")
        section_weapons = ET.SubElement(root, "weapon")
        section_armor = ET.SubElement(root, "armor")
        section_general = ET.SubElement(root, "general")
        section_ride = ET.SubElement(root, "ride")
        section_system = ET.SubElement(root, "system")
        section_charged = ET.SubElement(root, "charged")
        section_housing = ET.SubElement(root, "housing")
        section_monster = ET.SubElement(root, "monster")
        section_unknow = ET.SubElement(root, "unknow")

        section_armor_job_master = ET.SubElement(section_armor, "master")
        section_armor_job_hero = ET.SubElement(section_armor, "hero")
        section_weapon_job_master = ET.SubElement(section_weapons, "master")
        section_weapon_job_hero = ET.SubElement(section_weapons, "hero")

        sections_ik1 = dict()
        sections_ik1["IK1_GOLD"] = section_gold
        sections_ik1["IK1_WEAPON"] = section_weapons
        sections_ik1["IK1_ARMOR"] = section_armor
        sections_ik1["IK1_GENERAL"] = section_general
        sections_ik1["IK1_RIDE"] = section_ride
        sections_ik1["IK1_SYSTEM"] = section_system
        sections_ik1["IK1_CHARGED"] = section_charged
        sections_ik1["IK1_HOUSING"] = section_housing

        sections_job = dict()
        sections_job["JOB_VAGRANT"] = {"armor": ET.SubElement(section_armor, "vagrant"),
                                       "weapon": ET.SubElement(section_weapons, "vagrant")}
        sections_job["JOB_MERCENARY"] = {"armor": ET.SubElement(section_armor, "mercenary"),
                                         "weapon": ET.SubElement(section_weapons, "mercenary")}
        sections_job["JOB_ACROBAT"] = {"armor": ET.SubElement(section_armor, "acrobat"),
                                       "weapon": ET.SubElement(section_weapons, "acrobat")}
        sections_job["JOB_ASSIST"] = {"armor": ET.SubElement(section_armor, "assist"),
                                      "weapon": ET.SubElement(section_weapons, "assist")}
        sections_job["JOB_MAGICIAN"] = {"armor": ET.SubElement(section_armor, "magician"),
                                        "weapon": ET.SubElement(section_weapons, "magician")}
        sections_job["JOB_KNIGHT"] = {"armor": ET.SubElement(section_armor, "knight"),
                                      "weapon": ET.SubElement(section_weapons, "knight")}
        sections_job["JOB_BLADE"] = {"armor": ET.SubElement(section_armor, "blade"),
                                     "weapon": ET.SubElement(section_weapons, "blade")}
        sections_job["JOB_JESTER"] = {"armor": ET.SubElement(section_armor, "jester"),
                                      "weapon": ET.SubElement(section_weapons, "jester")}
        sections_job["JOB_RANGER"] = {"armor": ET.SubElement(section_armor, "ranger"),
                                      "weapon": ET.SubElement(section_weapons, "ranger")}
        sections_job["JOB_RINGMASTER"] = {"armor": ET.SubElement(section_armor, "ringmaster"),
                                          "weapon": ET.SubElement(section_weapons, "ringmaster")}
        sections_job["JOB_BILLPOSTER"] = {"armor": ET.SubElement(section_armor, "billposter"),
                                          "weapon": ET.SubElement(section_weapons, "billposter")}
        sections_job["JOB_PSYCHIKEEPER"] = {"armor": ET.SubElement(section_armor, "psychikeeper"),
                                            "weapon": ET.SubElement(section_weapons, "psychikeeper")}
        sections_job["JOB_ELEMENTOR"] = {"armor": ET.SubElement(section_armor, "elementor"),
                                         "weapon": ET.SubElement(section_weapons, "elementor")}

        sections_job["JOB_KNIGHT_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "knight"),
                                             "weapon": ET.SubElement(section_weapon_job_master, "knight")}
        sections_job["JOB_BLADE_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "blade"),
                                            "weapon": ET.SubElement(section_weapon_job_master, "blade")}
        sections_job["JOB_JESTER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "jester"),
                                             "weapon": ET.SubElement(section_weapon_job_master, "jester")}
        sections_job["JOB_RANGER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "ranger"),
                                             "weapon": ET.SubElement(section_weapon_job_master, "ranger")}
        sections_job["JOB_RINGMASTER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "ringmaster"),
                                                 "weapon": ET.SubElement(section_weapon_job_master, "ringmaster")}
        sections_job["JOB_BILLPOSTER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "billposter"),
                                                 "weapon": ET.SubElement(section_weapon_job_master, "billposter")}
        sections_job["JOB_PSYCHIKEEPER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "psychikeeper"),
                                                   "weapon": ET.SubElement(section_weapon_job_master, "psychikeeper")}
        sections_job["JOB_ELEMENTOR_MASTER"] = {"armor": ET.SubElement(section_armor_job_master, "elementor"),
                                                "weapon": ET.SubElement(section_weapon_job_master, "elementor")}

        sections_job["JOB_KNIGHT_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "knight"),
                                           "weapon": ET.SubElement(section_weapon_job_hero, "knight")}
        sections_job["JOB_BLADE_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "blade"),
                                          "weapon": ET.SubElement(section_weapon_job_hero, "blade")}
        sections_job["JOB_JESTER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "jester"),
                                           "weapon": ET.SubElement(section_weapon_job_hero, "jester")}
        sections_job["JOB_RANGER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "ranger"),
                                           "weapon": ET.SubElement(section_weapon_job_hero, "ranger")}
        sections_job["JOB_RINGMASTER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "ringmaster"),
                                               "weapon": ET.SubElement(section_weapon_job_hero, "ringmaster")}
        sections_job["JOB_BILLPOSTER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "billposter"),
                                               "weapon": ET.SubElement(section_weapon_job_hero, "billposter")}
        sections_job["JOB_PSYCHIKEEPER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "psychikeeper"),
                                                 "weapon": ET.SubElement(section_weapon_job_hero, "psychikeeper")}
        sections_job["JOB_ELEMENTOR_HERO"] = {"armor": ET.SubElement(section_armor_job_hero, "elementor"),
                                              "weapon": ET.SubElement(section_weapon_job_hero, "elementor")}

        for it in self.items:
            item = self.items[it]
            section = None

            if section is None and item["dwItemJob"] in sections_job:
                if item["dwItemKind1"] == "IK1_ARMOR":
                    section = ET.SubElement(sections_job[item["dwItemJob"]]["armor"], "item")
                elif item["dwItemKind1"] == "IK1_WEAPON":
                    section = ET.SubElement(sections_job[item["dwItemJob"]]["weapon"], "item")

            if section is None and item["dwItemJob"] == "=" and "II_WEA_MOB" in item["dwID"]:
                section = ET.SubElement(section_monster, "item")

            if section is None and item["dwItemKind1"] != "=" and item["dwItemKind1"] in sections_ik1:
                section = ET.SubElement(sections_ik1[item["dwItemKind1"]], "item")

            if section is None:
                section = section_unknow

            section.set("dwID", item["dwID"])
            for key in item:
                value = str(item[key])
                value = value.replace('"', "")
                if self.skip_value(key, value) is True:
                    continue
                section.set(str(key), value)

        tree = ET.ElementTree(root)
        tree.write(self.out_filename_xml, pretty_print=True, xml_declaration=True)
        gLogger.reset_section()
