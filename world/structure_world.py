from utils.common import Vector, Rect
from collections import OrderedDict


class Layer:
    def __init__(self):
        self.textureID = str() # WORD (2)
        self.patchEnabled = str() # PATCH_ENABLED
        self.lightMap = str() # LIGHT_AREA


class Landscape:
    def __init__(self):
        self.objs = list()
        self.layers = list()
        self.sfxs = list()
        self.ctrls = list()
        self.height_terrain = []
        self.height_water = []
        self.texture_water = []


class Region:
    def __init__(self):
        self.sztitle = str()
        self.szdesc = str()
        self.dwType = int(0)
        self.dwIndex = int(0)
        self.vPos = Vector(0,0,0)
        self.dwAttribute = int(0)
        self.dwIdMusic = int(0)
        self.bDirectMusic = int(0)
        self.szScript = str()
        self.szSound = str()
        self.dwIdTeleWorld = int()
        self.vPosTeleWorld = Vector(0, 0, 0)
        self.rect = Rect(0, 0, 0, 0)
        self.szKey = str()
        self.dwTargetKey = int()
        self.uItemId = int()
        self.uiItemCount = int()
        self.uiMinLevel = int()
        self.uiMaxLevel = int()
        self.iQuest = int()
        self.iQuestFlag = int()
        self.iJob = int()
        self.iGender = int()
        self.bCheckParty = int()
        self.bCheckGuild = int()
        self.bChaoKey = int()
        self.szTitle = str()


class CtrlElement:
    def __init__(self):
        self.dwSet = int()
        self.dwSetItem = int()
        self.dwSetItemCount = int()
        self.dwSetLevel = int()
        self.dwSetQuestNum = int()
        self.dwSetFlagNum = int()
        self.dwSetQuestNum1 = int()
        self.dwSetFlagNum1 = int()
        self.dwSetQuestNum2 = int()
        self.dwSetFlagNum2 = int()
        self.dwSetGender = int()
        self.bSetJob = list()
        self.dwSetEndu = int()
        self.dwMinItemNum = int()
        self.dwMaxItemNum = int()
        self.dwInsideItemKind = list()
        self.dwInsideItemPer = list()
        self.dwMonResKind = list()
        self.dwMonResNum = list()
        self.dwMonActAttack = list()
        self.dwTrapOperType = int()
        self.dwTrapRandomPer = int()
        self.dwTrapDelay = int()
        self.dwTrapKind = list()
        self.dwTrapLevel = list()
        self.dwTeleWorldId = int()
        self.dwTele = Vector(0, 0, 0)


class ReSpawn:
    def __init__(self):
        self.dwType = int()
        self.dwIndex = int()
        self.vPos = Vector(0, 0, 0)
        self.nMaxcb = int()
        self.ncb = int(0)
        self.uTime = int()
        self.nMaxAttackNum = int()
        self.nActiveAttackNum = int(0)
        self.fY = int(0)
        self.rect = Rect(0, 0, 0, 0)
        self.nDayMin = int()
        self.nDayMax = int()
        self.nHourMin = int()
        self.nHourMax = int()
        self.nItemMin = int()
        self.nItemMax = int()
        self.dwAiState = int()
        self.fAngle = float()
        self.dwPatrolIndex = int()
        self.bPatrolCycle = int()
        self.nControl = int()
        self.ctrlElement = CtrlElement()


class World:
    def __init__(self):
        self.regions = list()
        self.respawns = list()
        self.lands = OrderedDict()
        self.land_attributes = str()

        # Parametres du World
        self.id = str()
        self.title= str()
        self.directory = str()
        self.indoor = int()
        self.ambient = str() #hexa
        self.bgColor = str() #hexa
        self.fly = int()
        self.diffuse = str()
        self.MPU = 4
        self.size = Vector(0, 0, 0)
        self.camera = list()
        self.revival = list()
        self.text = OrderedDict()
        self.lightDir = list()
        self.fogSetting = list()
        self.bgm = list()
        self.pkmode = list()

    def get_parameters(self):
        params = {
            "id": self.id,
            "title": self.title,
            "directory": self.directory,
            "indoor": self.indoor,
            "ambient": self.ambient,
            "bgColor": self.bgColor,
            "fly": self.fly,
            "diffuse": self.diffuse,
            "MPU": self.MPU,
            "size": {
                "x": self.size.x,
                "y": self.size.y
            },
            "camera": [],
            "revival": [],
            "text": {},
            "lightDir": [],
            "fogSetting": [],
            "bgm": [],
            "pkmode": [],
        }
        return params
