import json
import subprocess
from collections import OrderedDict
from utils.logger import gLogger
from lxml import etree as ET
from project import g_project

TroupeSkillProperties = {
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
    "nHardness": 15,
    "dwHanded": 16,
    "dwHeelH": 17,
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
    "dwparry": 34,
    "dwblockRating": 35,
    "dwAddSkillMin": 36,
    "dwAddSkillMax": 37,
    "dwAtkStyle": 38,
    "dwWeaponType": 39,
    "dwItemAtkOrder1": 40,
    "dwItemAtkOrder2": 41,
    "dwItemAtkOrder3": 42,
    "dwItemAtkOrder4": 43,
    "tmContinuousPain": 44,
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


class PropTroupeSkill:

    def __init__(self):
        self.troupeSkills = OrderedDict()
        self.in_filename = str()
        self.out_filename_xml = g_project.path_xml + 'propTroupeSkill.xml'
        self.out_filename_json = g_project.path_json_prop + 'propTroupeSkill.json'

    def load(self, f):
        gLogger.set_section("proptroupeskill")
        self.in_filename = f
        gLogger.info("Loading: ", self.in_filename)

        with open(self.in_filename, "r") as fd:
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
                if len(arr) < len(TroupeSkillProperties):
                    continue
                id_ts = arr[TroupeSkillProperties["dwID"]]
                self.troupeSkills[id_ts] = dict()
                for k in TroupeSkillProperties:
                    self.troupeSkills[id_ts][k] = arr[TroupeSkillProperties[k]]

        gLogger.reset_section()


    def filter(self, path_icon, textTroupeSkill, defineSkill, defineJob, define, defineObj, defineAttribute):
        gLogger.set_section("proptroupeskill")

        troupeskill_undeclared = list()
        troupeskill_parameter_undeclared = list()
        troupeskill_icon_unfound = list()


        gLogger.info("filtering parameters")
        for it in self.troupeSkills:
            troupeSkill = self.troupeSkills[it]
            if troupeSkill.dwID not in defineSkill and troupeSkill["dwID"] not in troupeskill_undeclared:
                troupeskill_undeclared.append(troupeSkill["dwID"])
            if troupeSkill.szName != "=" and troupeSkill.szName not in textTroupeSkill and troupeSkill["dwID"] not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.szName)
            if troupeSkill.szComment != "=" and troupeSkill.szComment not in textTroupeSkill and troupeSkill.szComment not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.szComment)
            if troupeSkill.dwItemKind1 != "=" and troupeSkill.dwItemKind1 not in defineJob and troupeSkill.dwItemKind1 not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwItemKind1)
            if troupeSkill.dwItemKind2 != "=" and troupeSkill.dwItemKind2 not in defineJob and troupeSkill.dwItemKind2 not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwItemKind2)
            if troupeSkill.dwItemKind3 != "=" and troupeSkill.dwItemKind3 not in defineJob and troupeSkill.dwItemKind3 not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwItemKind3)
            if troupeSkill.dwItemJob != "=" and troupeSkill.dwItemJob not in defineJob and troupeSkill.dwItemJob not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwItemJob)
            if troupeSkill.dwExeTarget != "=" and troupeSkill.dwExeTarget not in define and troupeSkill.dwExeTarget not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwExeTarget)
            if troupeSkill.dwSfxObj2 != "=" and troupeSkill.dwSfxObj2 not in defineObj and troupeSkill.dwSfxObj2 not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwSfxObj2)
            if troupeSkill.dwSfxObj != "=" and troupeSkill.dwSfxObj not in defineObj and troupeSkill.dwSfxObj not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwSfxObj)
            if troupeSkill.dwSkillType != "=" and troupeSkill.dwSkillType not in defineAttribute and troupeSkill.dwSkillType not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwSkillType)
            if troupeSkill.dwUseChance != "=" and troupeSkill.dwUseChance not in define and troupeSkill.dwUseChance not in troupeskill_parameter_undeclared:
                troupeskill_parameter_undeclared.append(troupeSkill.dwUseChance)

        gLogger.info("filtering icons")
        for it in self.troupeSkills:
            troupeSkill = self.troupeSkills[it]
            icon = troupeSkill.szIcon
            icon = icon.replace('"', "")
            icon =  icon.replace(" ", "")
            icon = icon.replace("\t", "")
            if len(icon) <= 0 or icon == "" or icon == "=":
                continue
            out = subprocess.check_output(['find', path_icon, '-iname', icon])
            if (out == "" or len(out) <= 0) and icon not in troupeskill_icon_unfound:
                troupeskill_icon_unfound.append(icon)

        gLogger.write(g_project.path_filter + "troupeskill_undeclared.txt", troupeskill_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="troupeSkill undeclared:",
                undeclared=len(troupeskill_undeclared),
                total=len(self.troupeSkills)))
        gLogger.write(g_project.path_filter + "troupeskill_parameter_undeclared.txt", troupeskill_parameter_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Parameter troupeskill undeclared:",
                undeclared=len(troupeskill_parameter_undeclared),
                total=len(self.troupeSkills)))
        gLogger.write(g_project.path_filter + "troupeskill_icon_unfound.txt", troupeskill_icon_unfound, "{infos}: {undeclared}/{total}".format(
                infos="Icon troupeskill not found:",
                undeclared=len(troupeskill_icon_unfound),
                total=len(self.troupeSkills)))

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

    def __write_xml_format__(self):
        gLogger.set_section("propTroupeSkill")
        gLogger.info("writing config XML")

        root = ET.Element("troupeskills")

        for it in self.troupeSkills:
            troupe_skill = self.troupeSkills[it]
            section = ET.SubElement(root, "troupeskill")

            section.set("dwID", troupe_skill["dwID"])
            for k in troupe_skill:
                value = troupe_skill[k]
                if self.skip_value(k, value) is True:
                    continue
                section.set(k, value)

        tree = ET.ElementTree(root)
        tree.write(self.out_filename_xml, pretty_print=True, xml_declaration=True)

        gLogger.reset_section()

    def __write_json_format__(self):
        gLogger.set_section("propskill")
        gLogger.info("writing config JSON")

        with open(self.out_filename_json, 'w') as fd:
            json.dump(self.troupeSkills, fd, indent=4)
        gLogger.reset_section()

    def write_new_config(self, mode):
        if mode == 'json':
            self.__write_json_format__()
        elif mode == 'xml':
            self.__write_xml_format__()

