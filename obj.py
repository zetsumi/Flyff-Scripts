
from collections import OrderedDict
from logger import gLogger
from common import Vector, Rect, splitter, bytes_to_unsigned_int

MAX_CTRLDROPITEM = 4
MAX_CTRLDROPMOB = 3
MAX_TRAP = 3
MAX_KEY = 64
MPU = 4
MAX_JOB = 32

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
        self.bSetJob = list() # bool * MAX_JOB
        self.dwSetEndu = int()
        self.dwMinItemNum = int()
        self.dwMaxiItemNum = int()
        self.dwInsideItemKind = list() # unsigned int * MAX_CTRLDROPITEM
        self.dwInsideItemPer = list() # unsigned int * MAX_CTRLDROPITEM
        self.dwMonResKind = list() # unsigned int * MAX_CTRLDROPMOB
        self.dwMonResNum = list() # unsigned int * MAX_CTRLDROPMOB
        self.dwMonActAttack = list() # unsigned int * MAX_CTRLDROPMOB
        self.dwTrapOperType = int()
        self.dwTrapRandomPer = int()
        self.dwTrapDelay = int()
        self.dwTrapKind	= list() # unsigned int * MAX_TRAP
        self.dwTrapLevel = int() # unsigned int * MAX_TRAP
        self.strLinkCtrlKey = str() # char * MAX_KEY
        self.strCtrlKey = str() # char * MAX_KEY
        self.dwSetQuestNum1 = int()
        self.dwSetFlagNum1 = int()
        self.dwSetQuestNum2 = int()
        self.dwSetFlagNum2 = int()
        self.dwSetItemCount = int()
        self.dwTeleWorldId = int()
        self.vTele = Vector(0,0,0)


    def __read_ctrlelement__(self, fd):
        self.dwSet = bytes_to_unsigned_int(fd.read(4))
        self.dwSetItem = bytes_to_unsigned_int(fd.read(4))
        self.dwSetLevel = bytes_to_unsigned_int(fd.read(4))
        self.dwSetQuestNum = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum = bytes_to_unsigned_int(fd.read(4))
        self.dwSetGender = bytes_to_unsigned_int(fd.read(4))
        self.bSetJob = fd.read(4 * MAX_JOB)
        self.dwSetEndu = bytes_to_unsigned_int(fd.read(4))
        self.dwMinItemNum = bytes_to_unsigned_int(fd.read(4))
        self.dwMaxiItemNum = bytes_to_unsigned_int(fd.read(4))
        self.dwInsideItemKind = fd.read(4 * MAX_CTRLDROPITEM)
        self.dwInsideItemPer = fd.read(4 * MAX_CTRLDROPITEM)
        self.dwMonResKind = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwMonResNum = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwMonActAttack = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwTrapOperType = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapRandomPer = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapDelay = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapKind = fd.read(4 * MAX_TRAP)
        self.dwTrapLevel = fd.read(4 * MAX_TRAP)
        self.strLinkCtrlKey = fd.read(MAX_KEY)
        self.strCtrlKey = fd.read(MAX_KEY)
        self.dwSetQuestNum1 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum1 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetQuestNum2 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum2 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetItemCount = bytes_to_unsigned_int(fd.read(4))
        self.dwTeleWorldId = bytes_to_unsigned_int(fd.read(4))
        self.vTele = Vector(
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4))
        )


    def __read_ctrlelement_v2__(self, fd):
        self.dwSet = bytes_to_unsigned_int(fd.read(4))
        self.dwSetItem = bytes_to_unsigned_int(fd.read(4))
        self.dwSetLevel = bytes_to_unsigned_int(fd.read(4))
        self.dwSetQuestNum = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum = bytes_to_unsigned_int(fd.read(4))
        self.dwSetGender = bytes_to_unsigned_int(fd.read(4))
        self.bSetJob = fd.read(2 * MAX_JOB)
        self.dwSetEndu = bytes_to_unsigned_int(fd.read(4))
        self.dwMinItemNum = bytes_to_unsigned_int(fd.read(4))
        self.dwMaxiItemNum = bytes_to_unsigned_int(fd.read(4))
        self.dwInsideItemKind = fd.read(4 * MAX_CTRLDROPITEM)
        self.dwInsideItemPer = fd.read(4 * MAX_CTRLDROPITEM)
        self.dwMonResKind = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwMonResNum = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwMonActAttack = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwTrapOperType = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapRandomPer = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapDelay = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapKind = fd.read(4 * MAX_TRAP)
        self.dwTrapLevel = fd.read(4 * MAX_TRAP)
        self.strLinkCtrlKey = fd.read(MAX_KEY)
        self.strCtrlKey = fd.read(MAX_KEY)
        self.dwSetQuestNum1 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum1 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetQuestNum2 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum2 = bytes_to_unsigned_int(fd.read(4))
        self.dwSetItemCount = bytes_to_unsigned_int(fd.read(4))
        self.dwTeleWorldId = bytes_to_unsigned_int(fd.read(4))
        self.vTele = Vector(
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4)),
            bytes_to_unsigned_int(fd.read(4))
        )


    def __read_ctrlelement_v2__(self, fd):
        self.dwSet = bytes_to_unsigned_int(fd.read(4))
        self.dwSetItem = bytes_to_unsigned_int(fd.read(4))
        self.dwSetLevel = bytes_to_unsigned_int(fd.read(4))
        self.dwSetQuestNum = bytes_to_unsigned_int(fd.read(4))
        self.dwSetFlagNum = bytes_to_unsigned_int(fd.read(4))
        self.dwSetGender = bytes_to_unsigned_int(fd.read(4))
        self.bSetJob = fd.read(2 * 32) # 2 * Max JOB
        self.dwSetEndu = bytes_to_unsigned_int(fd.read(4))
        self.dwMinItemNum = bytes_to_unsigned_int(fd.read(4))
        self.dwMaxiItemNum = bytes_to_unsigned_int(fd.read(4))
        self.dwInsideItemKind = fd.read(4 * MAX_CTRLDROPITEM)
        self.dwInsideItemPer = fd.read(4 * MAX_CTRLDROPITEM)
        self.dwMonResKind = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwMonResNum = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwMonActAttack = fd.read(4 * MAX_CTRLDROPMOB)
        self.dwTrapOperType = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapRandomPer = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapDelay = bytes_to_unsigned_int(fd.read(4))
        self.dwTrapKind = fd.read(4 * MAX_TRAP)
        self.dwTrapLevel = fd.read(4 * MAX_TRAP)
        self.strLinkCtrlKey = fd.read(MAX_KEY)
        self.strCtrlKey = fd.read(MAX_KEY - 4)


    def read(self, fd):
        self.dwVersion =  bytes_to_unsigned_int(fd.read(4))
        if self.dwVersion == 2147483648:
            self.__read_ctrlelement__(fd)
        elif self.dwVersion == 2415919104:
            self.__read_ctrlelement_v2__(fd)
        else:
            self.dwSet = self.dwVersion
            self.__read_ctrlelement_v3__(fd)
