class PropCtrl:
    def __init__(self):
        self.dwID = 0
        self.szName = 1
        self.dwCtrlKind1 = 2
        self.dwCtrlKind2 = 3
        self.dwCtrlKind3 = 4
        self.dwSfxCtrl = 5
        self.dwSndDamage = 6
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
