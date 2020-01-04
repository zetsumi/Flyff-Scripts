import subprocess
from collections import OrderedDict
from utils.logger import gLogger
from lxml import etree as ET


class PropTroupeSkill:


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
        self.nHardness = 15
        self.dwHanded = 16
        self.dwHeelH = 17
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
        self.dwparry = 34
        self.dwblockRating = 35
        self.dwAddSkillMin = 36
        self.dwAddSkillMax = 37
        self.dwAtkStyle = 38
        self.dwWeaponType = 39
        self.dwItemAtkOrder1 = 40
        self.dwItemAtkOrder2 = 41
        self.dwItemAtkOrder3 = 42
        self.dwItemAtkOrder4 = 43
        self.tmContinuousPain = 44
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


    def toString(self):
        toString = str(str(self.version) + " " + \
		str(self.dwID) + " " + \
		str(self.szName) + " " + \
		str(self.dwNum) + " " + \
		str(self.dwPackMax) + " " + \
		str(self.dwItemKind1) + " " + \
		str(self.dwItemKind2) + " " + \
		str(self.dwItemKind3) + " " + \
		str(self.dwItemJob) + " " + \
		str(self.bPermanence) + " " + \
		str(self.dwUseable) + " " + \
		str(self.dwItemSex) + " " + \
		str(self.dwCost) + " " + \
		str(self.dwEndurance) + " " + \
		str(self.nAbrasion) + " " + \
		str(self.nHardness) + " " + \
		str(self.dwHanded) + " " + \
		str(self.dwHeelH) + " " + \
		str(self.dwParts) + " " + \
		str(self.dwPartsub) + " " + \
		str(self.bPartFile) + " " + \
		str(self.dwExclusive) + " " + \
		str(self.dwBasePartsIgnore) + " " + \
		str(self.dwItemLV) + " " + \
		str(self.dwItemRare) + " " + \
		str(self.dwShopAble) + " " + \
		str(self.bLog) + " " + \
		str(self.bCharged) + " " + \
		str(self.dwLinkKindBullet) + " " + \
		str(self.dwLinkKind) + " " + \
		str(self.dwAbilityMin) + " " + \
		str(self.dwAbilityMax) + " " + \
		str(self.eItemType) + " " + \
		str(self.wItemEAtk) + " " + \
		str(self.dwparry) + " " + \
		str(self.dwblockRating) + " " + \
		str(self.dwAddSkillMin) + " " + \
		str(self.dwAddSkillMax) + " " + \
		str(self.dwAtkStyle) + " " + \
		str(self.dwWeaponType) + " " + \
		str(self.dwItemAtkOrder1) + " " + \
		str(self.dwItemAtkOrder2) + " " + \
		str(self.dwItemAtkOrder3) + " " + \
		str(self.dwItemAtkOrder4) + " " + \
		str(self.tmContinuousPain) + " " + \
		str(self.dwShellQuantity) + " " + \
		str(self.dwRecoil) + " " + \
		str(self.dwLoadingTime) + " " + \
		str(self.nAdjHitRate) + " " + \
		str(self.dwAttackSpeed) + " " + \
		str(self.dwDmgShift) + " " + \
		str(self.dwAttackRange) + " " + \
		str(self.dwProbability) + " " + \
		str(self.dwDestParam1) + " " + \
		str(self.dwDestParam2) + " " + \
		str(self.dwDestParam3) + " " + \
		str(self.nAdjParamVal1) + " " + \
		str(self.nAdjParamVal2) + " " + \
		str(self.nAdjParamVal3) + " " + \
		str(self.dwChgParamVal1) + " " + \
		str(self.dwChgParamVal2) + " " + \
		str(self.dwChgParamVal3) + " " + \
		str(self.dwdestData1) + " " + \
		str(self.dwdestData2) + " " + \
		str(self.dwdestData3) + " " + \
		str(self.dwactiveskill) + " " + \
		str(self.dwactiveskillLv) + " " + \
		str(self.dwactiveskillper) + " " + \
		str(self.dwReqMp) + " " + \
		str(self.dwRepFp) + " " + \
		str(self.dwReqDisLV) + " " + \
		str(self.dwReSkill1) + " " + \
		str(self.dwReSkillLevel1) + " " + \
		str(self.dwReSkill2) + " " + \
		str(self.dwReSkillLevel2) + " " + \
		str(self.dwSkillReadyType) + " " + \
		str(self.dwSkillReady) + " " + \
		str(self.dwSkillRange) + " " + \
		str(self.dwSfxElemental) + " " + \
		str(self.dwSfxObj) + " " + \
		str(self.dwSfxObj2) + " " + \
		str(self.dwSfxObj3) + " " + \
		str(self.dwSfxObj4) + " " + \
		str(self.dwSfxObj5) + " " + \
		str(self.dwUseMotion) + " " + \
		str(self.dwCircleTime) + " " + \
		str(self.dwSkillTime) + " " + \
		str(self.dwExeTarget) + " " + \
		str(self.dwUseChance) + " " + \
		str(self.dwSpellRegion) + " " + \
		str(self.dwSpellType) + " " + \
		str(self.dwReferStat1) + " " + \
		str(self.dwReferStat2) + " " + \
		str(self.dwReferTarget1) + " " + \
		str(self.dwReferTarget2) + " " + \
		str(self.dwReferValue1) + " " + \
		str(self.dwReferValue2) + " " + \
		str(self.dwSkillType) + " " + \
		str(self.fItemResistElecricity) + " " + \
		str(self.fItemResistFire) + " " + \
		str(self.fItemResistWind) + " " + \
		str(self.fItemResistWater) + " " + \
		str(self.fItemResistEarth) + " " + \
		str(self.nEvildoing) + " " + \
		str(self.dwExpertLV) + " " + \
		str(self.ExpertMax) + " " + \
		str(self.dwSubDefine) + " " + \
		str(self.dwExp) + " " + \
		str(self.dwComboStyle) + " " + \
		str(self.fFlightSpeed) + " " + \
		str(self.fFlightLRAngle) + " " + \
		str(self.fFlightTBAngle) + " " + \
		str(self.dwFlightLimit) + " " + \
		str(self.dwFFuelReMax) + " " + \
		str(self.dwAFuelReMax) + " " + \
		str(self.dwFuelRe) + " " + \
		str(self.dwLimitLevel1) + " " + \
		str(self.dwReflect) + " " + \
		str(self.dwSndAttack1) + " " + \
		str(self.dwSndAttack2) + " " + \
		str(self.szIcon) + " " + \
		str(self.dwQuestID) + " " + \
		str(self.szTextFile) + " " + \
		str(self.szComment))
        return toString


    def getIdMax(self):
        return 123


    def getSize(self):
        return self.getIdMax() + 1


    def load(self, f):
        gLogger.set_section("proptroupeskill")
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
                datas[arr[self.dwID]] = PropTroupeSkill()
                for key in self.__dict__:
                    setattr(datas[arr[self.dwID]], key, arr[getattr(self, key)])
        gLogger.reset_section()
        return datas


    def filter(self, troupeSkills, path_icon, textTroupeSkill, defineSkill, defineJob, define, defineObj, defineAttribute):
        gLogger.set_section("proptroupeskill")

        troupeskill_undeclared = list()
        troupeskill_parameter_undeclared = list()
        troupeskill_icon_unfound = list()


        gLogger.info("filtering parameters")
        for it in troupeSkills:
            troupeSkill = troupeSkills[it]
            if troupeSkill.dwID not in defineSkill and troupeSkill.dwID not in troupeskill_undeclared:
                troupeskill_undeclared.append(troupeSkill.dwID)
            if troupeSkill.szName != "=" and troupeSkill.szName not in textTroupeSkill and troupeSkill.dwID not in troupeskill_parameter_undeclared:
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
        for it in troupeSkills:
            troupeSkill = troupeSkills[it]
            icon = troupeSkill.szIcon
            icon = icon.replace('"', "")
            icon =  icon.replace(" ", "")
            icon = icon.replace("\t", "")
            if len(icon) <= 0 or icon == "" or icon == "=":
                continue
            out = subprocess.check_output(['find', path_icon, '-iname', icon])
            if (out == "" or len(out) <= 0) and icon not in troupeskill_icon_unfound:
                troupeskill_icon_unfound.append(icon)

        gLogger.write(gProject.path_filter + "troupeskill_undeclared.txt", troupeskill_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="troupeSkill undeclared:",
                undeclared=len(troupeskill_undeclared),
                total=len(troupeSkills)))
        gLogger.write(gProject.path_filter + "troupeskill_parameter_undeclared.txt", troupeskill_parameter_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Parameter troupeskill undeclared:",
                undeclared=len(troupeskill_parameter_undeclared),
                total=len(troupeSkills)))
        gLogger.write(gProject.path_filter + "troupeskill_icon_unfound.txt", troupeskill_icon_unfound, "{infos}: {undeclared}/{total}".format(
                infos="Icon troupeskill not found:",
                undeclared=len(troupeskill_icon_unfound),
                total=len(troupeSkills)))

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

    def write_new_config(self, troupeSkills):
        gLogger.set_section("propTroupeSkill")

        root = ET.Element("troupeskills")

        for it in troupeSkills:
            troupeskill = troupeSkills[it]
            section = ET.SubElement(root, "troupeskill")

            section.set("dwID", troupeskill.dwID)
            for key in troupeskill.__dict__:
                value = getattr(troupeskill, key)
                value = value.replace('"', "")
                if self.skip_value(key, value) is True:
                    continue
                section.set(key, value)

        tree = ET.ElementTree(root)
        tree.write(g_project.path_xml + 'propTroupeSkill.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()