from lxml import etree as ET
from collections import OrderedDict
from logger import gLogger


class PropMover:

    
    def __init__(self):
        self.dwID = 0
        self.szName = 1
        self.dwAI = 2
        self.dwStr = 3
        self.dwSta = 4
        self.dwDex = 5
        self.dwInt = 6
        self.dwHR = 7
        self.dwER = 8
        self.dwRace = 9
        self.dwBelligerence = 10
        self.dwGender = 11
        self.dwLevel = 12
        self.dwFilghtLevel = 13
        self.dwSize = 14
        self.dwClass = 15
        self.bIfPart = 16
        self.dwKarma = 17
        self.dwUseable = 18
        self.dwActionRadius = 19
        self.dwAtkMin = 20
        self.dwAtkMax = 21
        self.dwAtk1 = 22
        self.dwAtk2 = 23
        self.dwAtk3 = 24
        self.dwHorizontalRate = 25
        self.dwVerticalRate = 26
        self.dwDiagonalRate = 27
        self.dwThrustRate = 28
        self.dwChestRate = 29
        self.dwHeadRate = 30
        self.dwArmRate = 31
        self.dwLegRate = 32
        self.dwAttackSpeed = 33
        self.dwReAttackDelay = 34
        self.dwAddHp = 35
        self.dwAddMp = 36
        self.dwNaturealArmor = 37
        self.nAbrasion = 38
        self.nHardness = 39
        self.dwAdjAtkDelay = 40
        self.eElementType = 41
        self.wElementAtk = 42
        self.dwHideLevel = 43
        self.fSpeed = 44
        self.dwShelter = 45
        self.bFlying = 46
        self.dwJumpIng = 47
        self.dwAirJump = 48
        self.bTaming = 49
        self.dwResisMagic = 50
        self.fResistElecricity = 51
        self.fResistFire = 52
        self.fResistWind = 53
        self.fResistWater = 54
        self.fResistEarth = 55
        self.dwCash = 56
        self.dwSourceMaterial = 57
        self.dwMaterialAmount = 58
        self.dwCohesion = 59
        self.dwHoldingTime = 60
        self.dwCorrectionValue = 61
        self.dwExpValue = 62
        self.nFxpValue = 63
        self.nBodyState = 64
        self.dwAddAbility = 65
        self.bKillable = 66
        self.dwVirtItem1 = 67
        self.dwVirtType1 = 68
        self.dwVirtItem2 = 69
        self.dwVirtType2 = 70
        self.dwVirtItem3 = 71
        self.dwVirtType3 = 72
        self.dwSndAtk1 = 73
        self.dwSndAtk2 = 74
        self.dwSndDie1 = 75
        self.dwSndDie2 = 76
        self.dwSndDmg1 = 77
        self.dwSndDmg2 = 78
        self.dwSndDmg3 = 79
        self.dwSndIdle1 = 80
        self.dwSndIdle2 = 81
        self.szComment = 82


    def toString(self):
        toString = str(str(self.dwID) + " " + str(self.szName) + " " + \
            str(self.dwAI) + " " + str(self.dwStr) + " " + str(self.dwSta) + " " + str(self.dwDex) + " " + \
            str(self.dwInt) + " " + str(self.dwHR) + " " + str(self.dwER) + " " + str(self.dwRace) + " " + str(self.dwBelligerence) + " " + \
            str(self.dwGender) + " " + str(self.dwLevel) + " " + str(self.dwFilghtLevel) + " " + str(self.dwSize) + " " + \
            str(self.dwClass) + " " + str(self.bIfPart) + " " +  str(self.dwKarma) + " " + str(self.dwUseable) + " " + \
            str(self.dwActionRadius) + " " + str(self.dwAtkMin) + " " + str(self.dwAtkMax) + " " + str(self.dwAtk1) + " " + \
            str(self.dwAtk2) + " " + str(self.dwAtk3) + " " +  str(self.dwHorizontalRate) + " " + \
            str(self.dwVerticalRate) + " " + str(self.dwDiagonalRate) + " " + str(self.dwThrustRate) + " " + \
            str(self.dwChestRate) + " " + str(self.dwHeadRate) + " " + str(self.dwArmRate) + " " + str(self.dwLegRate) + " " + str(self.dwAttackSpeed) + " " + \
            str(self.dwReAttackDelay) + " " + str(self.dwAddHp) + " " + str(self.dwAddMp) + " " + str(self.dwNaturealArmor) + " " + \
            str(self.nAbrasion) + " " + str(self.nHardness) + " " + str(self.dwAdjAtkDelay) + " " + str(self.eElementType) + " " + \
            str(self.wElementAtk) + " " + str(self.dwHideLevel) + " " + str(self.fSpeed) + " " + str(self.dwShelter) + " " + str(self.bFlying) + " " + \
            str(self.dwJumpIng) + " " + str(self.dwAirJump) + " " + str(self.bTaming) + " " + str(self.dwResisMagic) + " " + str(self.fResistElecricity) + " " + \
            str(self.fResistFire) + " " + str(self.fResistWind) + " " + str(self.fResistWater) + " " + str(self.fResistEarth) + " " + str(self.dwCash) + " " + \
            str(self.dwSourceMaterial) + " " + str(self.dwMaterialAmount) + " " + str(self.dwCohesion) + " " + str(self.dwHoldingTime) + " " + \
            str(self.dwCorrectionValue) + " " + str(self.dwExpValue) + " " + str(self.nFxpValue) + " " + str(self.nBodyState) + " " + \
            str(self.dwAddAbility) + " " + str(self.bKillable) + " " + str(self.dwVirtItem1) + " " + str(self.dwVirtType1) + " " + str(self.dwVirtItem2) + " " + \
            str(self.dwVirtType2) + " " + str(self.dwVirtItem3) + " " + str(self.dwVirtType3) + " " + str(self.dwSndAtk1) + " " + str(self.dwSndAtk2) + " " + \
            str(self.dwSndDie1) + " " + str(self.dwSndDie2) + " " + str(self.dwSndDmg1) + " " + str(self.dwSndDmg2) + " " + str(self.dwSndDmg3) + " " + \
            str(self.dwSndIdle1) + " " + str(self.dwSndIdle2) + " " + str(self.szComment))
        return toString


    def getIdMax(self):
        return 82


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
        gLogger.set_section("propmover")
        gLogger.info("Loading: ", f)
        movers = OrderedDict()
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
                if "MI_" not in arr[0]:
                    continue
                movers[arr[self.dwID]] = PropMover()
                for key in self.__dict__:
                    setattr(movers[arr[self.dwID]], key, arr[getattr(self, key)])
        gLogger.reset_section()
        return movers


    def filter(self, movers, defineObj, textMover, items):
        gLogger.info("Filtering propmover")
        gLogger.set_section("propmover")

        mover_undeclared = []
        mover_unused = []
        weapon_undeclared = []
        mover_name_undeclared = []
        mover_comment_undeclared = []

        gLogger.info("ID")
        for it in movers:
            mover = movers[it]
            if mover.dwID not in defineObj:
                mover_undeclared.append(mover.dwID)

        gLogger.info("Name and Comment")
        for it in movers:
            mover = movers[it]
            if mover.szName not in textMover:
                if mover.szName not in mover_name_undeclared:
                    mover_name_undeclared.append(mover.szName)
            if mover.szComment not in textMover:
                if mover.szComment not in mover_comment_undeclared:
                    mover_comment_undeclared.append(mover.szComment)

        gLogger.info("Weapon Atk1 Atk2 Atk3")
        for it in movers:
            if mover.dwAtk1 not in items:
                weapon_undeclared.append(mover.dwAtk1)
            if mover.dwAtk2 not in items:
                weapon_undeclared.append(mover.dwAtk2)
            if mover.dwAtk3 not in items:
                weapon_undeclared.append(mover.dwAtk3)

        gLogger.info("define obj")
        for it in defineObj:
            if "MI_" in it and it not in movers:
                mover_unused.append(it)

        gLogger.write("filter/mover_undeclared.txt", mover_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Movers undeclared:",
                undeclared=len(mover_undeclared),
                total=len(movers)))
        gLogger.write("filter/mover_unused.txt", mover_unused, "{infos}: {undeclared}/{total}".format(
                infos="Movers mover_unused:",
                undeclared=len(mover_unused),
                total=len(movers)))
        gLogger.write("filter/mover_name_undeclared.txt", mover_name_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Movers mover_name_undeclared:",
                undeclared=len(mover_name_undeclared),
                total=len(movers)))
        gLogger.write("filter/mover_comment_undeclared.txt", mover_comment_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Movers mover_comment_undeclared:",
                undeclared=len(mover_comment_undeclared),
                total=len(movers)))
        gLogger.reset_section()

        return mover_undeclared, mover_unused, weapon_undeclared, mover_name_undeclared, mover_comment_undeclared


    def write(self, movers, mode):
        gLogger.set_section("propmover")
        gLogger.info("Writing propMover.txt")
        with open("output/propMover.txt", "w") as fd:
            for index in movers:
                mover = movers[index]
                line = mover.toString().replace(" ", "\t")
                fd.write(line + "\n")
        gLogger.reset_section()
        return True


    def remove(self, movers, delete):
        if len(delete) <= 0:
            return False
        gLogger.info("Removing on propmover")
        for it in delete:
            if it in movers:
                del movers[it]


    def replace(self, textMover):
        if self.szName != "=":
            if len(self.szName) >= 0 and self.szName != "" and self.szName in textMover:
                self.szName = '\"' + textMover[self.szName] + '\"'
        if self.szComment != "=":
            if self.szComment != "" and len(self.szComment) > 0 and self.szComment in textMover:
                self.szComment = '\"' + textMover[self.szComment] + '\"'


    def skip_value(self, key, value):
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
        except:
            if value == "=" or value == "":
                return True
        return False

    def write_new_config(self, movers):
        gLogger.set_section("promover")

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

        for it in movers:
            mover = movers[it]
            section = None

            if mover.dwAI == "AII_NONE":
                section = movers_npcs
            elif mover.dwAI == "AII_MOVER":
                section = movers_players
            elif mover.dwAI == "AII_PET" or mover.dwAI == "AII_EGG":
                section = movers_pets
            elif mover.dwAI == "AII_MONSTER"or mover.dwAI == "AII_CLOCKWORKS" or \
                mover.dwAI == "AII_BIGMUSCLE" or mover.dwAI == "AII_KRRR" or \
                mover.dwAI == "AII_BEAR" or mover.dwAI == "AII_METEONYKER":
                 section = movers_monsters


            if section is not None:
                if section is movers_monsters:
                    if mover.dwClass != "=" and mover.dwClass in movers_monsters_rank:
                        section = ET.SubElement(movers_monsters_rank[mover.dwClass], "mover")
                elif section is movers_players:
                    section = ET.SubElement(movers_players, "mover")
                elif section is movers_npcs:
                    section = ET.SubElement(movers_npcs, "mover")
                elif section is movers_pets:
                    section = ET.SubElement(movers_pets, "mover")

            if section is None:
                gLogger.Error("Mover unknow")
                section = ET.SubElement(movers_unknow, "mover")

            section.set("dwID", mover.dwID)
            for key in mover.__dict__:
                value = getattr(mover, key)
                value = value.replace('"', "")
                if self.skip_value(key, value) is True:
                    continue
                section.set(key, value)


        tree = ET.ElementTree(root)
        tree.write('xml/propMover.xml', pretty_print=True, xml_declaration=True)

        gLogger.reset_section()