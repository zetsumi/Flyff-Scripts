
from collections import OrderedDict
from logger import gLogger
from common import Vector, Rect, splitter, bytes_to_unsigned_int

MPU = 4


class Obj:

    def __init__(self):
        fAngle = int(0)
        vRotation = Vector(0,0,0)
        vPos = Vector(0,0,0)
        vScale = Vector(0,0,0)
        dwObjType = int(-1)
        dwModelID = int(-1)
        dwMotion = int(-1)

    def read(self, fd):
        self.fAngle = bytes_to_unsigned_int(fd.read(4))
        self.vRotation = Vector(
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4))
        )
        self.vPos = Vector(
            bytes_to_unsigned_int(fd.read(4)) * MPU,
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4)) * MPU
        )
        self.vScale = Vector(
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4))
        )
        self.dwObjType = bytes_to_unsigned_int(fd.read(4))
        self.dwModelID = bytes_to_unsigned_int(fd.read(4))
        self.dwMotion = bytes_to_unsigned_int(fd.read(4))
        self.dwAIInterface = bytes_to_unsigned_int(fd.read(4))
        self.dwaAI2 = bytes_to_unsigned_int(fd.read(4))



class ObjCtrl:

    def __init__(self):
        self.dwVersion = int()
        self.dwSet = int()
        self.dwSetItem = int()
        self.dwSetLevel = int()
        self.dwSetQuestNum = int()
        self.dwSetFlagNum = int()
        self.dwSetGender = int()
        self.bSetJob = list()
        self.dwSetEndu = int()
        self.dwMinItemNum = int()
        self.dwMaxiItemNum = int()
        self.dwInsideItemKind = list()
        self.dwInsideItemPer = list()
        self.dwMonResKind = list()
        self.dwMonResNum = list()
        self.dwMonActAttack = list()
        self.dwTrapOperType = int()
        self.dwTrapRandomPer = int()
        self.dwTrapDelay = int()
        self.dwTrapKind	= list()
        self.dwTrapLevel = int()
        self.strLinkCtrlKey = str()
        self.strCtrlKey = str()
        self.dwSetQuestNum1 = int()
        self.dwSetFlagNum1 = int()
        self.dwSetQuestNum2 = int()
        self.dwSetFlagNum2 = int()
        self.dwSetItemCount = int()
        self.dwTeleWorldId = int()
        self.Tele = Vector(0,0,0)


    def __read_ctrlelement(self, fd):
        self.dwSet = bytes_to_unsigned_int(fd.read(4))


    def read(self, fd):
        self.dwVersion =  bytes_to_unsigned_int(fd.read(4))
        if self.dwVersion == 2147483648:
            pass
        elif self.dwVersion == 2415919104:
            pass
        else:
            pass