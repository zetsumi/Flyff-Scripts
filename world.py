import subprocess
import os
from collections import OrderedDict
from logger import gLogger
from text import Text
from common import Vector

file_listing_world = "Ressource/World.inc"

class World:

    def __init__(self):
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
        self.MPU = 4



class Worlds:


    def __init__(self):
        self.worlds = OrderedDict()


    def __create_instance_world__(self, arr):
        print(arr)


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
                if "\t" not in line and " " in line:
                    arr = line.split(" ")
                elif " " not in line and "\t" in line:
                    arr = line.split("\t")
                elif " " in line and "\t" in line:
                    line = line.replace("\t", "")
                    arr = line.split(" ")
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


    def __load_wld__(self, f):
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                if "\t" not in line and " " in line:
                    arr = line.split(" ")
                elif " " not in line and "\t" in line:
                    arr = line.split("\t")
                elif " " in line and "\t" in line:
                    line = line.replace("\t", "")
                    arr = line.split(" ")
                if "//" in arr[0]:
                    continue
                if arr[0] == "size":
                    arr[1] = arr[1].replace(",", "")
                    arr[2] = arr[1].replace(",", "")
                    self.size = Vector(int(arr[1], 10), int(arr[2], 10), 0)
                elif arr[0] == "indoor":
                    self.indoor = int(arr[1])
                elif arr[0] == "MPU":
                    self.MPU = int(arr[1])


    def load(self, path_world, defineWorld):
        gLogger.set_section("world")

        self.__load_world_inc__(defineWorld)
        for it in self.worlds:
            world = self.worlds[it]
            world.text.load(path_world + world.directory + "/" + world.directory + ".txt.txt")
            self.__load_wld__(path_world + world.directory + "/" + world.directory + ".wld")

        gLogger.reset_section()