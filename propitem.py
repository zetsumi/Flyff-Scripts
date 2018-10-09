import subprocess
from lxml import etree as ET
from collections import OrderedDict
from logger import gLogger


class PropItem():
    def __init__(self):
        self.version = 0
        self.dwID = 1
        self.szName = 2
        self.dwNum = 3
        self.dwPackMax = 4
        self.dwItemKind1 = 5
        self.dwItemKind2 = 6
        self.dwItemKind3 = 7
        self.dwItemJob = 8
        self.bPermanence = 9
        self.dwUseable = 10
        self.dwItemSex = 11
        self.dwCost = 12
        self.dwEndurance = 13
        self.nAbrasion = 14
        self.nMaxRepair = 15
        self.dwHanded = 16
        self.dwFlag = 17
        self.dwParts = 18
        self.dwPartsub = 19
        self.bPartFile = 20
        self.dwExclusive = 21
        self.dwBasePartsIgnore = 22
        self.dwItemLV = 23
        self.dwItemRare = 24
        self.dwShopAble = 25
        self.bLog = 26
        self.bCharged = 27
        self.dwLinkKindBullet = 28
        self.dwLinkKind = 29
        self.dwAbilityMin = 30
        self.dwAbilityMax = 31
        self.eItemType = 32
        self.wItemEAtk = 33
        self.dwParry = 34
        self.dwBlockRating = 35
        self.dwAddSkillMin = 36
        self.dwAddSkillMax = 37
        self.dwAtkStyle = 38
        self.dwWeaponType = 39
        self.dwItemAtkOrder1 = 40
        self.dwItemAtkOrder2 = 41
        self.dwItemAtkOrder3 = 42
        self.dwItemAtkOrder4 = 43
        self.bContinuousPain = 44
        self.dwShellQuantity = 45
        self.dwRecoil = 46
        self.dwLoadingTime = 47
        self.nAdjHitRate = 48
        self.dwAttackSpeed = 49
        self.dwDmgShift = 50
        self.dwAttackRange = 51
        self.dwProbability = 52
        self.dwDestParam1 = 53
        self.dwDestParam2 = 54
        self.dwDestParam3 = 55
        self.nAdjParamVal1 = 56
        self.nAdjParamVal2 = 57
        self.nAdjParamVal3 = 58
        self.dwChgParamVal1 = 59
        self.dwChgParamVal2 = 60
        self.dwChgParamVal3 = 61
        self.dwdestData1 = 62
        self.dwdestData2 = 63
        self.dwdestData3 = 64
        self.dwactiveskill = 65
        self.dwactiveskillLv = 66
        self.dwactiveskillper = 67
        self.dwReqMp = 68
        self.dwRepFp = 69
        self.dwReqDisLV = 70
        self.dwReSkill1 = 71
        self.dwReSkillLevel1 = 72
        self.dwReSkill2 = 73
        self.dwReSkillLevel2 = 74
        self.dwSkillReadyType = 75
        self.dwSkillReady = 76
        self.dwSkillRange = 77
        self.dwSfxElemental = 78
        self.dwSfxObj = 79
        self.dwSfxObj2 = 80
        self.dwSfxObj3 = 81
        self.dwSfxObj4 = 82
        self.dwSfxObj5 = 83
        self.dwUseMotion = 84
        self.dwCircleTime = 85
        self.dwSkillTime = 86
        self.dwExeTarget = 87
        self.dwUseChance = 88
        self.dwSpellRegion = 89
        self.dwSpellType = 90
        self.dwReferStat1 = 91
        self.dwReferStat2 = 92
        self.dwReferTarget1 = 93
        self.dwReferTarget2 = 94
        self.dwReferValue1 = 95
        self.dwReferValue2 = 96
        self.dwSkillType = 97
        self.fItemResistElecricity = 98
        self.fItemResistFire = 99
        self.fItemResistWind = 100
        self.fItemResistWater = 101
        self.fItemResistEarth = 102
        self.nEvildoing = 103
        self.dwExpertLV = 104
        self.ExpertMax = 105
        self.dwSubDefine = 106
        self.dwExp = 107
        self.dwComboStyle = 108
        self.fFlightSpeed = 109
        self.fFlightLRAngle = 110
        self.fFlightTBAngle = 111
        self.dwFlightLimit = 112
        self.dwFFuelReMax = 113
        self.dwAFuelReMax = 114
        self.dwFuelRe = 115
        self.dwLimitLevel1 = 116
        self.dwReflect = 117
        self.dwSndAttack1 = 118
        self.dwSndAttack2 = 119
        self.szIcon = 120
        self.dwQuestID = 121
        self.szTextFile = 122
        self.szComment = 123


    def toString(item):
        toString = str(item.version) + " " + \
            str(item.dwID) + " " + \
            str(item.szName) + " " + \
            str(item.dwNum) + " " + \
            str(item.dwPackMax) + " " + \
            str(item.dwItemKind1) + " " + \
            str(item.dwItemKind2) + " " + \
            str(item.dwItemKind3) + " " + \
            str(item.dwItemJob) + " " + \
            str(item.bPermanence) + " " + \
            str(item.dwUseable) + " " + \
            str(item.dwItemSex) + " " + \
            str(item.dwCost) + " " + \
            str(item.dwEndurance) + " " + \
            str(item.nAbrasion) + " " + \
            str(item.nMaxRepair) + " " + \
            str(item.dwHanded) + " " + \
            str(item.dwFlag) + " " + \
            str(item.dwParts) + " " + \
            str(item.dwPartsub) + " " + \
            str(item.bPartFile) + " " + \
            str(item.dwExclusive) + " " + \
            str(item.dwBasePartsIgnore) + " " + \
            str(item.dwItemLV) + " " + \
            str(item.dwItemRare) + " " + \
            str(item.dwShopAble) + " " + \
            str(item.bLog) + " " + \
            str(item.bCharged) + " " + \
            str(item.dwLinkKindBullet) + " " + \
            str(item.dwLinkKind) + " " + \
            str(item.dwAbilityMin) + " " + \
            str(item.dwAbilityMax) + " " + \
            str(item.eItemType) + " " + \
            str(item.wItemEAtk) + " " + \
            str(item.dwParry) + " " + \
            str(item.dwBlockRating) + " " + \
            str(item.dwAddSkillMin) + " " + \
            str(item.dwAddSkillMax) + " " + \
            str(item.dwAtkStyle) + " " + \
            str(item.dwWeaponType) + " " + \
            str(item.dwItemAtkOrder1) + " " + \
            str(item.dwItemAtkOrder2) + " " + \
            str(item.dwItemAtkOrder3) + " " + \
            str(item.dwItemAtkOrder4) + " " + \
            str(item.bContinuousPain) + " " + \
            str(item.dwShellQuantity) + " " + \
            str(item.dwRecoil) + " " + \
            str(item.dwLoadingTime) + " " + \
            str(item.nAdjHitRate) + " " + \
            str(item.dwAttackSpeed) + " " + \
            str(item.dwDmgShift) + " " + \
            str(item.dwAttackRange) + " " + \
            str(item.dwProbability) + " " + \
            str(item.dwDestParam1) + " " + \
            str(item.dwDestParam2) + " " + \
            str(item.dwDestParam3) + " " + \
            str(item.nAdjParamVal1) + " " + \
            str(item.nAdjParamVal2) + " " + \
            str(item.nAdjParamVal3) + " " + \
            str(item.dwChgParamVal1) + " " + \
            str(item.dwChgParamVal2) + " " + \
            str(item.dwChgParamVal3) + " " + \
            str(item.dwdestData1) + " " + \
            str(item.dwdestData2) + " " + \
            str(item.dwdestData3) + " " + \
            str(item.dwactiveskill) + " " + \
            str(item.dwactiveskillLv) + " " + \
            str(item.dwactiveskillper) + " " + \
            str(item.dwReqMp) + " " + \
            str(item.dwRepFp) + " " + \
            str(item.dwReqDisLV) + " " + \
            str(item.dwReSkill1) + " " + \
            str(item.dwReSkillLevel1) + " " + \
            str(item.dwReSkill2) + " " + \
            str(item.dwReSkillLevel2) + " " + \
            str(item.dwSkillReadyType) + " " + \
            str(item.dwSkillReady) + " " + \
            str(item.dwSkillRange) + " " + \
            str(item.dwSfxElemental) + " " + \
            str(item.dwSfxObj) + " " + \
            str(item.dwSfxObj2) + " " + \
            str(item.dwSfxObj3) + " " + \
            str(item.dwSfxObj4) + " " + \
            str(item.dwSfxObj5) + " " + \
            str(item.dwUseMotion) + " " + \
            str(item.dwCircleTime) + " " + \
            str(item.dwSkillTime) + " " + \
            str(item.dwExeTarget) + " " + \
            str(item.dwUseChance) + " " + \
            str(item.dwSpellRegion) + " " + \
            str(item.dwSpellType) + " " + \
            str(item.dwReferStat1) + " " + \
            str(item.dwReferStat2) + " " + \
            str(item.dwReferTarget1) + " " + \
            str(item.dwReferTarget2) + " " + \
            str(item.dwReferValue1) + " " + \
            str(item.dwReferValue2) + " " + \
            str(item.dwSkillType) + " " + \
            str(item.fItemResistElecricity) + " " + \
            str(item.fItemResistFire) + " " + \
            str(item.fItemResistWind) + " " + \
            str(item.fItemResistWater) + " " + \
            str(item.fItemResistEarth) + " " + \
            str(item.nEvildoing) + " " + \
            str(item.dwExpertLV) + " " + \
            str(item.ExpertMax) + " " + \
            str(item.dwSubDefine) + " " + \
            str(item.dwExp) + " " + \
            str(item.dwComboStyle) + " " + \
            str(item.fFlightSpeed) + " " + \
            str(item.fFlightLRAngle) + " " + \
            str(item.fFlightTBAngle) + " " + \
            str(item.dwFlightLimit) + " " + \
            str(item.dwFFuelReMax) + " " + \
            str(item.dwAFuelReMax) + " " + \
            str(item.dwFuelRe) + " " + \
            str(item.dwLimitLevel1) + " " + \
            str(item.dwReflect) + " " + \
            str(item.dwSndAttack1) + " " + \
            str(item.dwSndAttack2) + " " + \
            str(item.szIcon) + " " + \
            str(item.dwQuestID) + " " + \
            str(item.szTextFile) + " " + \
            str(item.szComment)
        toString = toString.replace(" ", "\t")
        return toString


    def getIdMax(self):
        return 123


    def getSize(self):
        return self.getIdMax() + 1


    def skip_preproc(self, string):
        if "#ifdef" in string or \
            "# ifdef" in string or \
            "#endif" in string or \
            "# endif" in string or \
            "#ifndef" in string or \
            " #ifndef" in string:
            return True
        return False


    def load(self, f):
        gLogger.set_section("propitem")
        gLogger.info("loading: ", f)
        items = OrderedDict()
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or \
                    len(line) <= 0 or \
                    line == "" or \
                    self.skip_preproc(line) is True:
                    continue
                arr = line.split("\t")
                cpy = list()
                for it in arr:
                    if it != "" and len(it) > 0:
                        cpy.append(it)
                arr = cpy
                if len(arr) < self.getSize():
                    continue
                try:
                    int(arr[0])
                except:
                    continue
                items[arr[self.dwID]] = PropItem()
                for key in self.__dict__:
                    setattr(items[arr[self.dwID]], key, arr[getattr(self, key)])
        gLogger.reset_section()
        return items


    def filter(self, path_icon, items, defineItem, textItems, movers):
        gLogger.set_section("propitem")

        items_undeclared = []
        items_used = []
        items_icon_unfound = []
        item_name_undeclared = []
        item_comment_undeclared = []


        gLogger.info("ID")
        gLogger.info("Name and Comment")
        for it in items:
            item = items[it]
            if item.dwID not in defineItem:
                items_undeclared.append(it)
            if item.szName not in textItems:
                if item.szName not in item_name_undeclared:
                    item_name_undeclared.append(item.szName)
            if item.szComment not in textItems:
                if item.szComment not in item_comment_undeclared:
                    item_comment_undeclared.append(item.szComment)

        gLogger.info("define item")
        for it in defineItem:
            if it not in items:
                items_used.append(it)

        gLogger.info("icon exists")
        for it in items:
            icon = items[it].szIcon
            icon = icon.replace('"', "")
            icon = icon.replace(" ", "")
            icon = icon.replace("\t", "")
            if len(icon) <= 0 or icon == "" or icon == "=":
                continue
            out = subprocess.check_output(['find', path_icon, '-iname', icon])
            if out == "" or len(out) <= 0:
                items_icon_unfound.append(icon)


        gLogger.write("./filter/items_undeclared.txt", items_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Items undeclared:",
                undeclared=len(items_undeclared),
                total=len(items)))
        gLogger.write("./filter/items_used.txt", items_used, "{infos}: {undeclared}/{total}".format(
                infos="Items unused:",
                undeclared=len(items_used),
                total=len(items)))
        gLogger.write("./filter/items_icon_unfound.txt", items_icon_unfound, "{infos}: {undeclared}/{total}".format(
                infos="Icon unfound:",
                undeclared=len(items_icon_unfound),
                total=len(items)))
        gLogger.write("./filter/item_name_undeclared.txt", item_name_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Name undeclared:",
                undeclared=len(item_name_undeclared),
                total=len(items)))
        gLogger.write("./filter/item_comment_undeclared.txt", item_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Comment undeclared:",
                undeclared=len(item_comment_undeclared),
                total=len(items)))
        gLogger.reset_section()

        return items_undeclared, items_used, icon_unfound, item_name_undeclared, item_comment_undeclared


    def write(self, items):
        gLogger.set_section("propitem")
        gLogger.info("Writing propItem.txt")
        with open("output/propItem.txt", "w") as fd:
            for index in items:
                item = items[index]
                line = item.toString().replace("\t", " ")
                fd.write(line + "\n")
        gLogger.reset_section()
        return True


    def replace(self, text):
        if self.szName != "=":
            if len(self.szName) >= 0 and self.szName != "" and self.szName in text:
                self.szName = '\"' + text[self.szName] + '\"'
        if self.szComment != "=":
            if self.szComment != "" and len(self.szComment) > 0 and self.szComment in text:
                self.szComment = '\"' + text[self.szComment] + '\"'
        if self.szTextFile != "=":
            if self.szTextFile != "" and len(self.szTextFile) > 0 and self.szTextFile in text:
                self.szTextFile = '\"' + text[self.szTextFile] + '\"'


    def remove(self, items, delete):
        if len(delete) <= 0:
            return False
        gLogger.info("Removing on propitem")

        for it in delete:
            if it in items:
                del items[it]


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

    def write_new_config(self, items):
        gLogger.set_section("propitem")

        root = ET.Element("items")
        section_gold = ET.SubElement(root, "gold")
        section_weapons = ET.SubElement(root, "weapon")
        section_armor = ET.SubElement(root, "armor")
        section_general = ET.SubElement(root, "general")
        section_ride = ET.SubElement(root, "ride")
        section_system = ET.SubElement(root, "system")
        section_charged = ET.SubElement(root, "charged")
        section_housing = ET.SubElement(root, "housing")
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
        sections_job["JOB_VAGRANT"] = {"armor": ET.SubElement(section_armor, "vagrant"), "weapon":ET.SubElement(section_weapons,"vagrant")}
        sections_job["JOB_MERCENARY"] = {"armor": ET.SubElement(section_armor, "mercenary"), "weapon":ET.SubElement(section_weapons,"mercenary")}
        sections_job["JOB_ACROBAT"] = {"armor": ET.SubElement(section_armor,"acrobat"), "weapon":ET.SubElement(section_weapons,"acrobat")}
        sections_job["JOB_ASSIST"] = {"armor": ET.SubElement(section_armor,"assist"), "weapon":ET.SubElement(section_weapons,"assist")}
        sections_job["JOB_MAGICIAN"] = {"armor": ET.SubElement(section_armor,"magician"), "weapon":ET.SubElement(section_weapons,"magician")}
        sections_job["JOB_KNIGHT"] = {"armor": ET.SubElement(section_armor,"knight"), "weapon":ET.SubElement(section_weapons,"knight")}
        sections_job["JOB_BLADE"] = {"armor": ET.SubElement(section_armor,"blade"), "weapon":ET.SubElement(section_weapons,"blade")}
        sections_job["JOB_JESTER"] = {"armor": ET.SubElement(section_armor,"jester"), "weapon":ET.SubElement(section_weapons,"jester")}
        sections_job["JOB_RANGER"] = {"armor": ET.SubElement(section_armor,"ranger"), "weapon":ET.SubElement(section_weapons,"ranger")}
        sections_job["JOB_RINGMASTER"] = {"armor": ET.SubElement(section_armor,"ringmaster"), "weapon":ET.SubElement(section_weapons,"ringmaster")}
        sections_job["JOB_BILLPOSTER"] = {"armor": ET.SubElement(section_armor,"billposter"), "weapon":ET.SubElement(section_weapons,"billposter")}
        sections_job["JOB_PSYCHIKEEPER"] = {"armor": ET.SubElement(section_armor,"psychikeeper"), "weapon":ET.SubElement(section_weapons,"psychikeeper")}
        sections_job["JOB_ELEMENTOR"] = {"armor": ET.SubElement(section_armor,"elementor"), "weapon":ET.SubElement(section_weapons,"elementor")}


        sections_job["JOB_KNIGHT_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"knight"), "weapon":ET.SubElement(section_weapon_job_master,"knight")}
        sections_job["JOB_BLADE_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"blade"), "weapon":ET.SubElement(section_weapon_job_master,"blade")}
        sections_job["JOB_JESTER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"jester"), "weapon":ET.SubElement(section_weapon_job_master,"jester")}
        sections_job["JOB_RANGER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"ranger"), "weapon":ET.SubElement(section_weapon_job_master,"ranger")}
        sections_job["JOB_RINGMASTER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"ringmaster"), "weapon":ET.SubElement(section_weapon_job_master,"ringmaster")}
        sections_job["JOB_BILLPOSTER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"billposter"), "weapon":ET.SubElement(section_weapon_job_master,"billposter")}
        sections_job["JOB_PSYCHIKEEPER_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"psychikeeper"), "weapon":ET.SubElement(section_weapon_job_master,"psychikeeper")}
        sections_job["JOB_ELEMENTOR_MASTER"] = {"armor": ET.SubElement(section_armor_job_master,"elementor"), "weapon":ET.SubElement(section_weapon_job_master,"elementor")}

        sections_job["JOB_KNIGHT_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"knight"), "weapon":ET.SubElement(section_weapon_job_hero,"knight")}
        sections_job["JOB_BLADE_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"blade"), "weapon":ET.SubElement(section_weapon_job_hero,"blade")}
        sections_job["JOB_JESTER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"jester"), "weapon":ET.SubElement(section_weapon_job_hero,"jester")}
        sections_job["JOB_RANGER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"ranger"), "weapon":ET.SubElement(section_weapon_job_hero,"ranger")}
        sections_job["JOB_RINGMASTER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"ringmaster"), "weapon":ET.SubElement(section_weapon_job_hero,"ringmaster")}
        sections_job["JOB_BILLPOSTER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"billposter"), "weapon":ET.SubElement(section_weapon_job_hero,"billposter")}
        sections_job["JOB_PSYCHIKEEPER_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"psychikeeper"), "weapon":ET.SubElement(section_weapon_job_hero,"psychikeeper")}
        sections_job["JOB_ELEMENTOR_HERO"] = {"armor": ET.SubElement(section_armor_job_hero,"elementor"), "weapon":ET.SubElement(section_weapon_job_hero,"elementor")}



        for it in items:
            item = items[it]
            section = None

            if section is None and item.dwItemJob in sections_job:
                if item.dwItemKind1 == "IK1_ARMOR":
                    section = ET.SubElement(sections_job[item.dwItemJob]["armor"], "item")
                elif item.dwItemKind1 == "IK1_WEAPON":
                    section = ET.SubElement(sections_job[item.dwItemJob]["weapon"], "item")

            if section is None and item.dwItemKind1 != "=" and item.dwItemKind1 in sections_ik1:
                section = ET.SubElement(sections_ik1[item.dwItemKind1], "item")

            section.set("dwID", item.dwID)
            for key in item.__dict__:
                value = getattr(item, key)
                value = value.replace('"', "")
                if self.skip_value(key, value) is True:
                    continue
                section.set(key, value)


        tree = ET.ElementTree(root)
        tree.write('xml/propItem.xml', pretty_print=True, xml_declaration=True)

        gLogger.reset_section()
