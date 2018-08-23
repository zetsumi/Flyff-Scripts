from collections import OrderedDict
from logger import gLogger


class MdlObj:

    def __init__(self):
        self.szName = 0
        self.iObject = 1
        self.dwModelType = 2
        self.szPart = 3
        self.bFly = 4
        self.bDistant = 5
        self.bPick = 6
        self.fScale = 7
        self.bTrans = 8
        self.bShadow = 9
        self.bTextureEx = 10


    def getIdMax(self):
        return 10


    def getSize(self):
        return self.getIdMax() + 1


    def load(self, f):
        gLogger.set_section("mdlobj")
        gLogger.info("loading:", f)
        datas = OrderedDict()
        with open(f, "r") as fd:
            for line in fd:
                if "//" in line:
                    continue
                line = line.replace(" ", "\t")
                arr = line.split("\t")
                copy = list()
                for it in arr:
                    if it != "" and len(it) > 0:
                        copy.append(it)
                arr = copy
                if len(arr) < self.getSize():
                    continue
                datas[arr[self.szName]] = MdlObj()
                for key in self.__dict__:
                    setattr(datas[arr[self.szName]], key, arr[getattr(self, key)])
        gLogger.reset_section()
    