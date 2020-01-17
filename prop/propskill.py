import json
import subprocess
from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project
from utils.common import convert_value

SkillProperties = {
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


def skip_value(key, value):
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


class PropSkill:

    def __init__(self):
        self.skills = OrderedDict()

    def load(self, f):
        gLogger.set_section("propskill")
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
                id_skill = arr[SkillProperties["dwID"]]
                self.skills[id_skill] = dict()
                for key in SkillProperties:
                    self.skills[id_skill][key] = convert_value(key, arr[SkillProperties[key]].replace("\"", ""))
        gLogger.reset_section()

    def filter(self, defineSkill, define, defineObj, defineJob, defineAttribute, defineNeuz, defineSound,
               path_icon, text_skill):
        gLogger.set_section("propskill")

        skill_undeclared = list()
        skill_parameter_undeclared = list()
        skill_icon_unfound = list()

        gLogger.info("filtering parameter")
        for it in self.skills:
            skill = self.skills[it]
            if skill.dwID not in defineSkill and skill.dwID not in skill_undeclared:
                skill_undeclared.append(skill.dwID)
            if skill.szName != "=" and skill.szName not in text_skill and skill.szName not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.szName)
            if skill.szComment != "=" and skill.szComment not in text_skill and skill.szComment not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.szComment)
            if skill.dwItemKind1 != "=" and skill.dwItemKind1 not in defineJob and skill.dwItemKind1 not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwItemKind1)
            if skill.dwItemKind2 != "=" and skill.dwItemKind2 not in defineJob and skill.dwItemKind2 not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwItemKind2)
            if skill.dwItemKind3 != "=" and skill.dwItemKind3 not in defineJob and skill.dwItemKind3 not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwItemKind3)
            if skill.dwItemJob != "=" and skill.dwItemJob not in defineJob and skill.dwItemJob not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwItemJob)
            if skill.dwHanded != "=" and skill.dwHanded not in defineJob and skill.dwHanded not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwHanded)
            if skill.dwAttackRange != "=" and skill.dwAttackRange not in defineAttribute and skill.dwAttackRange not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwAttackRange)
            if skill.dwExeTarget != "=" and skill.dwExeTarget not in define and skill.dwExeTarget not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwExeTarget)
            if skill.dwReferTarget1 != "=" and skill.dwReferTarget1 not in defineAttribute and skill.dwReferTarget1 not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwReferTarget1)
            if skill.dwSfxObj3 != "=" and skill.dwSfxObj3 not in defineObj and skill.dwSfxObj3 not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwSfxObj3)
            if skill.dwComboStyle != "=" and skill.dwComboStyle not in defineAttribute and skill.dwComboStyle not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwComboStyle)
            if skill.dwUseChance != "=" and skill.dwUseChance not in define and skill.dwUseChance not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwUseChance)
            if skill.dwSkillType != "=" and skill.dwSkillType not in defineAttribute and skill.dwSkillType not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwSkillType)
            if skill.dwUseMotion != "=" and skill.dwUseMotion not in defineNeuz and skill.dwUseMotion not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwUseMotion)
            if skill.dwSndAttack1 != "=" and skill.dwSndAttack1 not in defineSound and skill.dwSndAttack1 not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwSndAttack1)
            if skill.dwWeaponType != "=" and skill.dwWeaponType not in defineAttribute and skill.dwWeaponType not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwWeaponType)
            if skill.dwSpellRegion != "=" and skill.dwSpellRegion not in defineAttribute and skill.dwSpellRegion not in skill_parameter_undeclared:
                skill_parameter_undeclared.append(skill.dwSpellRegion)

        gLogger.info("filtering icons")
        for it in self.skills:
            skill = self.skills[it]
            icon = skill.szIcon
            icon = icon.replace('"', "")
            icon = icon.replace(" ", "")
            icon = icon.replace("\t", "")
            if len(icon) <= 0 or icon == "" or icon == "=":
                continue
            out = subprocess.check_output(['find', path_icon, '-iname', icon])
            if (out == "" or len(out) <= 0) and icon not in skill_icon_unfound:
                skill_icon_unfound.append(icon)

        gLogger.write(g_project.path_filter + "skill_undeclared.txt", skill_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Skill  undeclared:",
                          undeclared=len(skill_undeclared),
                          total=len(self.skills)))
        gLogger.write(g_project.path_filter + "skill_parameter_undeclared.txt", skill_parameter_undeclared,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Parameter  undeclared:",
                          undeclared=len(skill_parameter_undeclared),
                          total=len(self.skills)))
        gLogger.write(g_project.path_filter + "skill_icon_unfound.txt", skill_icon_unfound,
                      "{infos}: {undeclared}/{total}".format(
                          infos="Icon not found:",
                          undeclared=len(skill_icon_unfound),
                          total=len(self.skills)))

        gLogger.reset_section()

    def write_new_config(self, mode):
        if mode == 'json':
            self.write_json_config()
        elif mode == 'xml':
            self.write_xml_config()

    def write_json_config(self):
        gLogger.set_section("propskill")
        gLogger.info("writing config JSON")

        with open(g_project.path_json_prop + 'propSkill.json', 'w') as fd:
            json.dump(self.skills, fd, indent=4)
        gLogger.reset_section()

    def write_xml_config(self):
        gLogger.set_section("propskill")

        root = ET.Element("skills")
        section_master = ET.SubElement(root, "master")
        section_hero = ET.SubElement(root, "hero")
        section_unknow = ET.SubElement(root, "unknow")

        sections_job = dict()
        sections_job["JOB_VAGRANT"] = ET.SubElement(root, "vagrant")

        sections_job["JOB_MERCENARY"] = ET.SubElement(root, "mercenary")
        sections_job["JOB_ACROBAT"] = ET.SubElement(root, "acrobat")
        sections_job["JOB_ASSIST"] = ET.SubElement(root, "assist")
        sections_job["JOB_MAGICIAN"] = ET.SubElement(root, "magician")
        sections_job["JOB_KNIGHT"] = ET.SubElement(root, "knight")
        sections_job["JOB_BLADE"] = ET.SubElement(root, "blade")
        sections_job["JOB_JESTER"] = ET.SubElement(root, "jester")
        sections_job["JOB_RANGER"] = ET.SubElement(root, "ranger")
        sections_job["JOB_RINGMASTER"] = ET.SubElement(root, "ringmaster")
        sections_job["JOB_BILLPOSTER"] = ET.SubElement(root, "billposter")
        sections_job["JOB_PSYCHIKEEPER"] = ET.SubElement(root, "psycheeper")
        sections_job["JOB_ELEMENTOR"] = ET.SubElement(root, "elementor")

        sections_job["JOB_KNIGHT_MASTER"] = ET.SubElement(section_master, "knight")
        sections_job["JOB_BLADE_MASTER"] = ET.SubElement(section_master, "blade")
        sections_job["JOB_JESTER_MASTER"] = ET.SubElement(section_master, "jester")
        sections_job["JOB_RANGER_MASTER"] = ET.SubElement(section_master, "ranger")
        sections_job["JOB_RINGMASTER_MASTER"] = ET.SubElement(section_master, "ringmaster")
        sections_job["JOB_BILLPOSTER_MASTER"] = ET.SubElement(section_master, "billposter")
        sections_job["JOB_PSYCHIKEEPER_MASTER"] = ET.SubElement(section_master, "psychikeeper")
        sections_job["JOB_ELEMENTOR_MASTER"] = ET.SubElement(section_master, "elementor")

        sections_job["JOB_KNIGHT_HERO"] = ET.SubElement(section_hero, "knight")
        sections_job["JOB_BLADE_HERO"] = ET.SubElement(section_hero, "blade")
        sections_job["JOB_JESTER_HERO"] = ET.SubElement(section_hero, "jester")
        sections_job["JOB_RANGER_HERO"] = ET.SubElement(section_hero, "ranger")
        sections_job["JOB_RINGMASTER_HERO"] = ET.SubElement(section_hero, "ringmaster")
        sections_job["JOB_BILLPOSTER_HERO"] = ET.SubElement(section_hero, "billposter")
        sections_job["JOB_PSYCHIKEEPER_HERO"] = ET.SubElement(section_hero, "psychikeeper")
        sections_job["JOB_ELEMENTOR_HERO"] = ET.SubElement(section_hero, "elementor")

        for it in self.skills:
            skill = self.skills[it]
            section = None

            if skill["dwItemJob"] in sections_job:
                section = ET.SubElement(sections_job[skill["dwItemJob"]], "skill")

            if section is None:
                section = section_unknow

            section.set("dwID", skill["dwID"])
            for key in skill:
                value = skill[key]
                if skip_value(key, value) is True:
                    continue
                section.set(key, str(value))

        tree = ET.ElementTree(root)
        tree.write(g_project.path_xml + 'propSkill.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()
