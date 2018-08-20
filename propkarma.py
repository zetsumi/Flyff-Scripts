class PropKarma:
    def __init__(self):
        self.nGrade = 0
        self.szName = 1
        self.dwKarmaPoint = 2
        self.dwGrade = 3
        self.dwColor = 4
        self.dwKarmaRecoverPoint = 5
        self.dwDiscountRate = 6
        self.dwSellPenaltyRate = 7
        self.dwGuardReaction = 8
        self.SubtractExpRate = 9
        self.nDropGoldPercent = 10
        self.nDropItem = 11
        self.nDropPercent = 12
        self.dwKarmaRecoverNum = 13
        self.dwStatLimitTime = 14
        self.dwStatLimitNum = 15
        self.dwStatLimitRate = 16
        self.szComment = 17

    def toString(self):
        toString = str(str(self.nGrade) + " " + str(self.szName) + " " + str(self.dwKarmaPoint) + " " + \
		str(self.dwGrade) + " " + str(self.dwColor) + " " + str(self.dwKarmaRecoverPoint) + " " + \
		str(self.dwDiscountRate) + " " + str(self.dwSellPenaltyRate) + " " + str(self.dwGuardReaction) + " " + \
		str(self.SubtractExpRate) + " " + str(self.nDropGoldPercent) + " " + str(self.nDropItem) + " " + \
		str(self.nDropPercent) + " " + str(self.dwKarmaRecoverNum) + " " + str(self.dwStatLimitTime) + " " + \
		str(self.dwStatLimitNum) + " " + str(self.dwStatLimitRate) + " " + str(self.szComment))
        return toString

    def getIdMax(self):
        return 17

    def getSize(self):
        return self.getIdMax() + 1
