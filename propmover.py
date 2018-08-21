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
        print("Loading: ", f)
        movers = dict()
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
        return movers


    def replace(self, textMover):
        if self.szName != "=":
            if len(self.szName) >= 0 and self.szName != "" and self.szName in textMover:
                self.szName = '\"' + textMover[self.szName] + '\"'
        if self.szComment != "=":
            if self.szComment != "" and len(self.szComment) > 0 and self.szComment in textMover:
                self.szComment = '\"' + textMover[self.szComment] + '\"'


    def write(self, movers):
        print("Writing propMover.txt")
        with open("output/propMover.txt", "w") as fd:
            for index in movers:
                mover = movers[index]
                line = mover.toString().replace(" ", "\t")
                fd.write(line + "\n")
        return True


    def filter(self, movers, defineObj, items):
        print("Filtering propmover")
        mover_undeclared = []
        mover_unused = []
        weapon_undeclared = []
        for it in movers:
            mover = movers[it]
            if mover.dwID not in defineObj:
                mover_undeclared.append(mover.dwID)
            if mover.dwAtk1 not in items:
                weapon_undeclared.append(mover.dwAtk1)
            if mover.dwAtk2 not in items:
                weapon_undeclared.append(mover.dwAtk2)
            if mover.dwAtk3 not in items:
                weapon_undeclared.append(mover.dwAtk3)

        for it in defineObj:
            if "MI_" in it and it not in movers:
                mover_unused.append(it)

        if len(mover_undeclared) > 0:
            print("Movers undeclared: {number}/{total}".format(
                number=len(mover_undeclared), total=len(movers)))
            with open("filter/mover_undeclared.txt", "w") as fd:
                for mover in mover_undeclared:
                    fd.write(str(mover) + "\n")

        if len(mover_unused) > 0:
            print("Movers mover_unused: {number}/{total}".format(
                number=len(mover_unused), total=len(movers)))
            with open("filter/mover_unused.txt", "w") as fd:
                for mover in mover_unused:
                    fd.write(str(mover) + "\n")

        return mover_undeclared, mover_unused


    def remove(self, movers, delete):
        if len(delete) <= 0:
            return False
        print("Removing on propmover")
        for it in delete:
            if it in movers:
                del movers[it]

