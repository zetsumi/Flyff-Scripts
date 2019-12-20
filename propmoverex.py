from lxml import etree as ET
from collections import OrderedDict
from logger import gLogger
from text import Text
from define import Define

class PropItem:

    def __init__(self):
        self.id = 0
        self.probability = 0
        self.level = 0
        self.number = 0
        self.min = 0
        self.max = 0

class PropExtend:

    def __init__(self):
        self.id_mover = 0
        self.max_item = 0
        self.drop_gold_min = 0
        self.drop_gold_max = 0
        self.items = dict()

class   PropMoverEx:

    def __init__(self):
        self.movers = dict()


    def get_id_max(self):
        return 1


    def get_size(self):
        return self.get_id_max() + 1


    def get_scope_mi(self, fd, scope):
        skip = fd.readline().replace("\t", "").replace("\n", "").replace(" ", "") # {
        end = 0
        while True:
            line = fd.readline()
            line = line.replace("\t", "").replace("\n", "").replace(" ", "")
            if "MI_" in line:
                end = True
                return line
            scope.append(line)

    def load(self, file_prop):
        movers = dict()
        with open(file_prop) as fd:
            id = ""
            for line in fd:
                line = line.replace("\t", "").replace("\n", "").replace(" ", "")
                if len(line) == 0:
                    continue
                if "MI_" in line and line[0] == 'M' and line[1] == 'I' and line [2] == '_':
                    id = line
                    movers[id] = list()
                    continue
                if id != "":
                    movers[id].append(line)


    def filter(self):
        print("filter")


    def write_new_config(self, mode):
        if mode != "json" and mode != "xml":
            return False
        return True