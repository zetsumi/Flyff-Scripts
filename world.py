import subprocess
from collections import OrderedDict
from logger import gLogger

file_listing_world = "Ressource/World.inc"

class World:

    def __init__(self):
        self.id = str()
        self.title= str()
        self.directory = str()


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
                        gLogger.error("World undeclared:", world.id)
                        continue
                    world.directory = str(arr[1])
                    self.worlds[world.id] = world
                elif len(arr) == 2 and "SetTitle" in arr[1]:
                    index = arr[0]
                elif len(arr) == 1 and "IDS_WORLD_INC" in arr[0]:
                    if index in self.worlds:
                        self.worlds[index].title = arr[0]
                    else:
                        gLogger.error("SetTitle on world undeclared:", index)


    def load(self, defineWorld):
        gLogger.set_section("world")

        self.__load_world_inc__(defineWorld)

        gLogger.reset_section()