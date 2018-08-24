import subprocess
import os
from collections import OrderedDict
from logger import gLogger
from text import Text
from common import Vector, Rect, splitter, bytes_to_unsigned_int

file_listing_world = "Ressource/World.inc"
MAX_CTRLDROPITEM = 4
MAX_CTRLDROPMOB = 3
MAX_TRAP = 3
MPU = 4

MAP_SIZE = int(128)
NUM_PATCHES_PER_SIDE = int(16)

PATCH_SIZE = int((MAP_SIZE / NUM_PATCHES_PER_SIDE))
LIGHTMAP_SIZE = int(((PATCH_SIZE - 1) * NUM_PATCHES_PER_SIDE))
LIGHTMAP_UNITY = float((float(MAP_SIZE * MPU) / float(LIGHTMAP_SIZE)))

MAP_AREA = int((MAP_SIZE + 1) * (MAP_SIZE + 1))
WATER_AREA = int(NUM_PATCHES_PER_SIDE * NUM_PATCHES_PER_SIDE)
LIGHT_AREA = int(MAP_SIZE * MAP_SIZE * 4)


class WorldRegion:


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
        self.vPosTeleWorld = Vector(0,0,0)
        self.rect = Rect(0,0,0,0)
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
        self.dwTele = Vector(0,0,0)

class WorldRespawn:


    def __init__(self):
        self.dwType = int()
        self.dwIndex = int()
        self.vPos = Vector(0,0,0)
        self.nMaxcb = int()
        self.ncb = int(0)
        self.uTime = int()
        self.nMaxAttackNum = int()
        self.nActiveAttackNum = int(0)
        self.fY = int(0)
        self.rect = Rect(0,0,0,0)
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
        self.id = str()
        self.title= str()
        self.directory = str()
        self.text = Text()
        self.size = Vector(0,0,0)
        self.indoor = int()
        self.ambient = str() #hexa
        self.bgColor = str() #hexa
        self.fly = int()
        self.camera = list()
        self.revival = list()
        self.diffuse = str()
        self.lightDir = list()
        self.fogSetting = list()
        self.bgm = list()
        self.pkmode = list()
        self.MPU = MPU



class Worlds:


    def __init__(self):
        self.worlds = OrderedDict()

    def __clean_arr__(self, arr):
        copy = list()
        for it in arr:
            if len(it) <= 0 or it == "":
                continue
            copy.append(str(it))
        return copy


    def __load_world_inc__(self, defineWorld):
        index = str()
        with open(file_listing_world, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                arr = splitter(line)
                arr = self.__clean_arr__(arr)
                if len(arr) == 2 and "SetTitle" not in arr[1]:
                    world = World()
                    world.id = str(arr[0])
                    if world.id not in defineWorld:
                        gLogger.error("World undeclared: [{id_world}]".format(id_world=world.id))
                        continue
                    world.directory = str(arr[1]).replace("\"", "")
                    self.worlds[world.id] = world
                elif len(arr) == 2 and "SetTitle" in arr[1]:
                    index = arr[0]
                elif len(arr) == 1 and "IDS_WORLD_INC" in arr[0]:
                    if index in self.worlds:
                        self.worlds[index].title = arr[0]
                    else:
                        gLogger.error("SetTitle on world undeclared:", index)


    def __load_wld__(self, f, world):
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                arr = splitter(line)
                if len(arr) <= 0  or "//" in arr[0]:
                    continue
                if arr[0] == "size":
                    arr[1] = arr[1].replace(",", "")
                    arr[2] = arr[1].replace(",", "")
                    world.size = Vector(int(arr[1], 10), int(arr[2], 10), 0)
                elif arr[0] == "indoor":
                    world.indoor = int(arr[1])
                elif arr[0] == "MPU":
                    world.MPU = int(arr[1])


    def __load_region__(self, f, world):
        gLogger.info("loading:", f)
        with open(f, "r") as fd:
            content = fd.read()
            content = content.split("\n")
            i = 0
            while i < len(content):
                if "//" in content[i]:
                    i = i + 1
                    continue
                if "region3" in content[i]:
                    arr = splitter(content[i])
                    it = iter(arr)
                    next(it)
                    region = WorldRegion()
                    region.dwType = next(it)
                    region.dwType = next(it)
                    region.vPos = Vector(float(next(it)), float(next(it)), float(next(it)))
                    region.dwAttribute = str(next(it))
                    region.dwIdMusic = int(next(it))
                    region.bDirectMusic = int(next(it))
                    region.szScript = str(next(it))
                    region.szSound = str(next(it))
                    region.dwIdTeleWorld = int(next(it))
                    region.vPosTeleWorld = Vector(float(next(it)), float(next(it)), float(next(it)))
                    region.rect = Rect(int(next(it)), int(next(it)), int(next(it)), int(next(it)))
                    region.szKey = str(next(it))
                    region.dwTargetKey = int(next(it))
                    region.uItemId = int(next(it))
                    region.uiItemCount = int(next(it))
                    region.uiMinLevel = int(next(it))
                    region.uiMaxLevel =int(next(it))
                    region.iQuest = int(next(it))
                    region.iQuestFlag = int(next(it))
                    region.iJob = int(next(it))
                    region.iGender = int(next(it))
                    region.bCheckParty = int(next(it))
                    region.bCheckGuild = int(next(it))
                    region.bChaoKey = int(next(it))
                    region.szTitle = str(next(it))
                    i = i + 1
                    if splitter(content[i])[1] != "0":
                        i = i + 4
                    else:
                        i = i + 1
                    if splitter(content[i])[1] != "0":
                        i = i + 4
                    else:
                        i = i + 1
                    world.regions.append(region)
                elif "respawn" in content[i]:
                    arr = splitter(content[i])
                    it = iter(arr)
                    version = int(next(it).replace("respawn", ""))
                    respawn = WorldRespawn()
                    respawn.dwType = int(next(it))
                    respawn.dwIndex = int(next(it))
                    respawn.vPos = Vector(float(next(it)), float(next(it)), float(next(it)))
                    respawn.nMaxcb = int(next(it))
                    respawn.ncb = int(0)
                    respawn.uTime = int(next(it))
                    respawn.nMaxAttackNum = int(next(it))
                    respawn.nActiveAttackNum = int(0)
                    respawn.fY = respawn.vPos.y
                    respawn.rect = Rect(int(next(it)), int(next(it)), int(next(it)), int (next(it)))
                    if version >= 2:
                        respawn.nDayMin = int(next(it))
                        respawn.nDayMax = int(next(it))
                        respawn.nHourMin = int(next(it))
                        respawn.nHourMax = int(next(it))
                        respawn.nItemMin = int(next(it))
                        respawn.nItemMax = int(next(it))
                    if version >= 4:
                        respawn.dwAiState = int(next(it))
                        respawn.fAngle = float(next(it))
                    if version >= 5:
                        respawn.dwPatrolIndex = int(next(it))
                    if version >= 6:
                        respawn.bPatrolCycle = int(next(it))
                    if version >= 3:
                        respawn.nControl = int(next(it))
                        if respawn.nControl >= 1:
                            ctrl = CtrlElement()
                            ctrl.dwSet = int(next(it))
                            ctrl.dwSetItem = int(next(it))
                            if respawn.nControl == 2:
                                ctrl.dwSetItemCount = int(next(it))
                            else:
                                ctrl.dwSetItemCount = 1
                            ctrl.dwSetLevel = int(next(it))
                            ctrl.dwSetQuestNum = int(next(it))
                            ctrl.dwSetFlagNum = int(next(it))
                            if respawn.nControl == 2:
                                ctrl.dwSetQuestNum1 = int(next(it))
                                ctrl.dwSetFlagNum1 = int(next(it))
                                ctrl.dwSetQuestNum2 = int(next(it))
                                ctrl.dwSetFlagNum2 = int(next(it))
                            ctrl.dwSetGender = int(next(it))
                            if version <= 6:
                                maxjob = 16
                            else:
                                maxjob = 32
                            for j in range(0,maxjob):
                                ctrl.bSetJob[j] = int(next(it))
                            ctrl.dwSetEndu = int(next(it))
                            ctrl.dwMinItemNum = int(next(it))
                            ctrl.dwMaxItemNum = int(next(it))
                            for j in range(0, MAX_CTRLDROPITEM):
                                ctrl.dwInsideItemKind[j] = int(next(it))
                            for j in range(0, MAX_CTRLDROPITEM):
                                ctrl.dwInsideItemPer[j] = int(next(it))
                            for j in range(0,MAX_CTRLDROPMOB):
                                ctrl.dwMonResKind[j] = int(next(it))
                            for j in range(0,MAX_CTRLDROPMOB):
                                ctrl.dwMonResNum[j] = int(next(it))
                            for j in range(0,MAX_CTRLDROPMOB):
                                ctrl.dwMonActAttack[j] = int(next(it))
                            ctrl.dwTrapOperType = int(next(it))
                            ctrl.dwTrapRandomPer = int(next(it))
                            ctrl.dwTrapDelay = int(next(it))
                            for j in range(0,MAX_TRAP):
                                ctrl.dwTrapKind[j] = int(next(it))
                            for j in range(0,MAX_TRAP):
                                ctrl.dwTrapLevel[j] = int(next(it))
                            if respawn.nControl == 2:
                                ctrl.dwTeleWorldId = int(next(it))
                                ctrl.dwTele = Vector(int(next(it)), int(next(it)), int(next(it)))
                    world.respawns.append(respawn)
                    i = i + 1
                else:
                    i = i + 1


    def __load_lnd__(self, f, world, define):
        gLogger.info("loading:", f)
        with open(f, "rb") as fd:
            version = bytes_to_unsigned_int(fd.read(4))
            if version >= 1:
                x = bytes_to_unsigned_int(fd.read(4))
                y = bytes_to_unsigned_int(fd.read(4))

            heightMap = fd.read(int(4 * MAP_AREA * MAP_AREA))
            waterHeight = fd.read(int(2 * WATER_AREA * WATER_AREA))

            if version >= 2:
                fd.read(WATER_AREA)

            layerCount = bytes_to_unsigned_int(fd.read(1))
            layerCount = bytes_to_unsigned_int(layerCount)
            for j in range(0, layerCount):
                textureID = fd.read(2)
                patchEnabled = fd.read(int(4 * WATER_AREA * WATER_AREA))
                lightMap = fd.read(int(1 * LIGHT_AREA))

            for j in range(0,2):
                objCount = bytes_to_unsigned_int(fd.read(4))
                for k in range(0, objCount):
                    objType = bytes_to_unsigned_int(fd.read(4))
                    rotation = Vector(
                        bytes_to_unsigned_int(fd.read(4)),
                        bytes_to_unsigned_int(fd.read(4)),
                        bytes_to_unsigned_int(fd.read(4)) #not good value
                    )
                    rotation.z = bytes_to_unsigned_int(fd.read(4))
                    pos = Vector(
                        bytes_to_unsigned_int(fd.read(4)) * 4,
                        bytes_to_unsigned_int(fd.read(4)),
                        bytes_to_unsigned_int(fd.read(4)) * 4
                    )
                    scale = Vector(
                        bytes_to_unsigned_int(fd.read(4)),
                        bytes_to_unsigned_int(fd.read(4)),
                        bytes_to_unsigned_int(fd.read(4))
                    )
                    collisionBox = bytes_to_unsigned_int(fd.read(4))
                    modelID = bytes_to_unsigned_int(fd.read(4))
                    motion = bytes_to_unsigned_int(fd.read(4))
                    aiinterface = bytes_to_unsigned_int(fd.read(4))
                    ai2 = bytes_to_unsigned_int(fd.read(4))



    def load(self, path_world, defineWorld, define):
        gLogger.set_section("world")

        self.__load_world_inc__(defineWorld)
        for it in self.worlds:
            world = self.worlds[it]
            world.text.load(path_world + world.directory + "/" + world.directory + ".txt.txt")
            self.__load_wld__(path_world + world.directory + "/" + world.directory + ".wld", world)
            self.__load_region__(path_world + world.directory + "/" + world.directory + ".rgn", world)
            for x in range(0, world.size.x):
                for y in range(0, world.size.y):
                    if x < 10:
                        X = "0" + str(x)
                    else:
                        X = str(x)
                    if y < 10:
                        Y = "0" + str(y)
                    else:
                        Y = str(y)
                    lnd = path_world + world.directory + "/" + world.directory + X + "-" + Y + ".lnd"
                    self.__load_lnd__(lnd, world, define)

        gLogger.reset_section()