import subprocess
import os
import json
import struct
from collections import OrderedDict

from utils.logger import gLogger
from project import g_project
from utils.text import Text
from utils.define import Define
from utils.common import Vector, Rect, splitter, bytes_to_unsigned_int, bytes_to_float
from world.structure_world import Layer, Landscape, Region, ReSpawn, CtrlElement, World
from model.obj import Obj, ObjCtrl
from model.mdldyna import MdlDyna
from model.mdlobj import MdlObj

MAX_CTRLDROPITEM = 4
MAX_CTRLDROPMOB = 3
MAX_TRAP = 3
MPU = 4

WTYPE_NONE = int(0)
WTYPE_CLOUD = int(1)
WTYPE_WATER = int(2)

HGT_NOWALK = float(1000)
HGT_NOFLY  = float(2000)
HGT_NOMOVE = float(3000)
HGT_DIE    = float(4000)

MAP_SIZE = int(128)
NUM_PATCHES_PER_SIDE = int(16)

PATCH_SIZE = int((MAP_SIZE / NUM_PATCHES_PER_SIDE)) # 128 / 16 = 8
LIGHTMAP_SIZE = int(((PATCH_SIZE - 1) * NUM_PATCHES_PER_SIDE)) # (8 - 1) * 16 = 112
LIGHTMAP_UNITY = float((float(MAP_SIZE * MPU) / float(LIGHTMAP_SIZE))) # (128 * 4) / (112) = 4.57...

MAP_AREA = int((MAP_SIZE + 1) * (MAP_SIZE + 1))
WATER_AREA = int(NUM_PATCHES_PER_SIDE * NUM_PATCHES_PER_SIDE)
LIGHT_AREA = int(4 * MAP_SIZE * MAP_SIZE)
PATCH_ENABLED = int(4 * NUM_PATCHES_PER_SIDE * NUM_PATCHES_PER_SIDE)

HEIGHT_MAP = int(4 * MAP_AREA)
HEIGHT_WATER= int(2 * WATER_AREA)


class WorldManager:

    def __init__(self):
        self.worlds = OrderedDict()
        self.text = Text()
        self.define = Define()
        self.mdlobj = None
        self.mdldyna = None
        self.file_listing_world = None

    def set_listing_world(self, file_world):
        self.file_listing_world = file_world

    def filter(self, mdlobj):
        gLogger.set_section("world")
        obj_in_world = list()
        sfx_in_world = list()
        for it in self.worlds:
            world = self.worlds[it]
            gLogger.info("filtering {id}".format(id=str(world.id)))
            gLogger.info("directory: {directory} height: {height} width: {width} indoor: {indoor}".format(
                directory=world.directory,
                height=world.size.y,
                width=world.size.x,
                indoor=world.indoor
            ))
            for y in range(0, world.size.y):
                for x in range(0, world.size.x):
                    for obj in world.lands[y][x].objs:
                        if obj.dwModelID not in obj_in_world:
                            obj_in_world.append(obj.dwModelID)
                    for sfx in world.lands[y][x].sfxs:
                        if sfx.dwModelID not in sfx_in_world:
                            sfx_in_world.append(sfx.dwModelID)

            gLogger.write(gProject.path_filter + "world_" + str(world.id) + "_obj_find.txt", obj_in_world, "Unique Obj: {total}".format(total=len(obj_in_world)))
            gLogger.write(gProject.path_filter + "world_sfx_find.txt", sfx_in_world, "Unique Sfx: {total}".format(total=len(sfx_in_world)))

        gLogger.reset_section()

    def __clean_arr__(self, arr):
        copy = list()
        for it in arr:
            if len(it) <= 0 or it == "":
                continue
            copy.append(str(it))
        return copy

    def __load_world_inc__(self, define_world):
        index = str()
        with open(self.file_listing_world, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                arr = splitter(line)
                arr = self.__clean_arr__(arr)
                if len(arr) == 2 and "SetTitle" not in arr[1]:
                    world = World()
                    world.MPU = MPU
                    world.id = str(arr[0])
                    if world.id not in define_world:
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
            world.lands = [[Landscape() for x in range(world.size.x)] for y in range(world.size.y)] 

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
                    region = Region()
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
                    respawn = ReSpawn()
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

    def __load_lnd_water__(self, fd, world, y, x):
        height_water = fd.read(HEIGHT_WATER)
        i = 0
        while i < HEIGHT_WATER:
            wh = int(height_water[i])
            wt = int(height_water[i + 1])
            i = i + 2
            world.lands[y][x].height_water.append(str(wh))
            world.lands[y][x].texture_water.append(str(wt))

    def __load_lnd_terrain__(self, fd, world, y, x):
        bytes_terrain = fd.read(HEIGHT_MAP)
        octets = bytearray(b'')
        i = 0
        while i < HEIGHT_MAP:
            octets.append(bytes_terrain[i])
            i = i + 1
            if i % 4 == 0:
                height = bytes_to_float(octets)
                world.lands[y][x].height_terrain.append(height)
                octets = bytearray(b'')

    def __load_lnd_obj__(self, fd, world, y, x):
        obj_count = bytes_to_unsigned_int(fd.read(4))
        for k in range(0, obj_count):
            dwTypeObj = bytes_to_unsigned_int(fd.read(4))
            obj = Obj()
            if dwTypeObj == 2:
                obj = ObjCtrl()
            obj.read(fd)
            world.lands[y][x].objs.append(obj)

        sfx_count = bytes_to_unsigned_int(fd.read(4))
        for k in range(0, sfx_count):
            dwTypeSfx = bytes_to_unsigned_int(fd.read(4))
            sfx = Obj()
            sfx.read(fd)
            world.lands[y][x].sfxs.append(obj)

    def __load_lnd_layer__(self, fd, world, y, x):
        layerCount = bytes_to_unsigned_int(fd.read(1))
        for j in range(0, layerCount):
            layer = Layer()
            layer.textureID = fd.read(2)
            layer.patchEnabled = fd.read(PATCH_ENABLED)
            layer.lightMap = fd.read(LIGHT_AREA)
            world.lands[y][x].layers.append(layer)

    def __load_lnd__(self, fn, world, define):
        gLogger.info("loading:", fn)
        x = int(0)
        y = int(0)
        with open(fn, "rb") as fd:
            version = bytes_to_unsigned_int(fd.read(4))
            if version <= 0:
                gLogger.error("version:", version, "is unknow")
            if version >= 1:
                y = bytes_to_unsigned_int(fd.read(4))
                x = bytes_to_unsigned_int(fd.read(4))
            self.__load_lnd_terrain__(fd, world, y, x)
            self.__load_lnd_water__(fd, world, y, x)
            if version >= 2:
                world.land_attributes = fd.read(WATER_AREA) # land attributes
            self.__load_lnd_layer__(fd, world, y, x)
            self.__load_lnd_obj__(fd, world, y, x)

    def load(self, path_world, defineWorld, define):
        gLogger.set_section("world")

        self.__load_world_inc__(defineWorld)
        for it in self.worlds:
            world = self.worlds[it]
            text = Text()
            world.text = text.load(path_world + world.directory + "/" + world.directory + ".txt.txt")
            self.__load_wld__(path_world + world.directory + "/" + world.directory + ".wld", world)
            self.__load_region__(path_world + world.directory + "/" + world.directory + ".rgn", world)
            for y in range(0, world.size.y):
                for x in range(0, world.size.x):
                    if x < 10:
                        X = "0" + str(x)
                    else:
                        X = str(x)
                    if y < 10:
                        Y = "0" + str(y)
                    else:
                        Y = str(y)
                    filename_lnd = path_world + world.directory + "/" + world.directory + X + "-" + Y + ".lnd"
                    self.__load_lnd__(filename_lnd, world, define)

        gLogger.reset_section()

    def __write_json_format__(self):
        # loop on each world
        for id in self.worlds:
            world = self.worlds[id]

            # create directory
            path_world_json = g_project.path_json + id
            if not os.path.exists(path_world_json):
                os.makedirs(path_world_json)

            # Create the file global information world
            file_name_world = path_world_json + "/" + id + ".json"
            with open(file_name_world, "w") as fd:
                parameters = world.get_parameters()
                json.dump(parameters, fd, indent=4)

            # create files content objs/sfx/height/water/cloud
            for y in range(0, world.size.y):
                for x in range(0, world.size.x):
                    # write liste objects and sfxs
                    file_name_world_lnd = path_world_json + "/" + id  + "_" + str(x) + "_" + str(y) + "_obj.json"
                    with open(file_name_world_lnd, "w") as fd_lnd:
                        data = {"objects": [], "sfxs": []}
                        for obj in world.lands[y][x].objs:
                            data["objects"].append({
                                obj.dwModelID: {
                                    "x": obj.vPos.x,
                                    "y": obj.vPos.y,
                                    "z": obj.vPos.z
                                }
                            })
                        for sfx in world.lands[y][x].sfxs:
                            data["sfxs"].append({
                                sfx.dwModelID: {
                                    "x": sfx.vPos.x,
                                    "y": sfx.vPos.y,
                                    "z": sfx.vPos.z
                                }
                            })
                        json.dump(data, fd_lnd, indent=4)

                    # write height terrain
                    file_name_world_height = path_world_json + "/" + id + "_" + str(x) + "_" + str(y) + "_height.json"
                    with open(file_name_world_height, "w") as fd_h:
                        terrain = { "terrain": {} }
                        for wy in range(0, MAP_SIZE):
                            terrain[wy] = {}
                            for wx in range(0, MAP_SIZE):
                                height = world.lands[y][x].height_terrain[wy * MAP_SIZE + wx]
                                terrain[wy][wx] = {"height": height}
                        json.dump(terrain, fd_h, indent=4)

                    # write area water / cloud
                    file_name_world_water = path_world_json + "/" + id + "_" + str(x) + "_" + str(y) + "_water.json"
                    with open(file_name_world_water, "w") as fd_water:
                        water = {
                            "water": {},
                        }
                        for wy in range(0, NUM_PATCHES_PER_SIDE):
                            water["water"][wy] = {}
                            for wx in range(0, NUM_PATCHES_PER_SIDE):
                                offset = wy * NUM_PATCHES_PER_SIDE + wx
                                wh = world.lands[y][x].height_water[offset]
                                wt = world.lands[y][x].texture_water[offset]
                                water["water"][wy][wx] = {
                                    "texture": wt,
                                    "height": wh
                                }
                        json.dump(water, fd_water, indent=4)

    def __write_xml_format__(self):
        pass

    def write_new_config(self, mode):
        if mode == 'json':
            self.__write_json_format__()
        elif mode == 'xml':
            self.__write_xml_format__()
