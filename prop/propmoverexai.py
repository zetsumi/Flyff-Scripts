import json
import re
from lxml import etree as ET

from project import g_project
from utils.logger import gLogger
from utils.text import Text
from utils.define import Define

class PropMoverAI:

    def __init__(self):
        self.id_mover = 0
        self.scan = {
            "job": 0,
            "range": 0,
            "quest": 0,
            "item": 0,
            "chao": 0
        }
        self.battle = {
            "attack": {
                "active": False,
                "cond_hp": 0,
                "cond_lvl": 0
            },
            "rangeattack": {
                "active": False,
                "range": 0
            },
            "keeprangeattack": {
                "active": False,
                "range": 0
            },
            "summon": {
                "active": False,
                "probability": 0,
                "number": 0,
                "id_mover": 0
            },
            "evade": {
                "active": False,
                "percent_hp": 0
            },
            "helper": {
                "active": False,
                "who": 0,
                "unit": 0,
                "range_multiplier": 0
            },
            "recovery": {
                "active": False,
                "cond": False,
                "cond_me": False,
                "cond_how": 0,
                "cond_hp": 0,
                "cond_who": 0,
                "cond_MP": 0
            },
            "berserk": {
                "active": False,
                "percent_hp": 0,
                "damage_multiplier": 0
            },
            "randomtarget": {
                "active": False
            }
        }
        self.move = {
            "loot": {
                "active": False,
                "probability": 0
            }
        }

    def battle(self, arr, cmd, i, length, container):
        if cmd == "attack":
            container[cmd]["active"] = True
            if i + 1 < length:
                value = arr[i + 1]
                if value.isalpha():
                    container[cmd]["cond_hp"] = int(value)
                    return i + 2
        return i + 1

    def load(self, id_mover, mover):
        container = None
        token = ""
        self.id_mover = id_mover
        for it in mover:
            if re.search('[a-zA-Z]', it) is None:
                continue
            if "#Scan" in it:
                container = self.scan
                token = "scan"
                continue
            elif "#battle" in it:
                container = self.battle
                token = "battle"
                continue
            elif "#move" in it:
                container = self.move
                token = "move"
                continue
            if "{" in it or "}" in it:
                continue
            if container is not None:
                if token == "scan":
                    if "scan" in it:
                        it = it.replace("scan ", "")
                        it = it.replace("scan", "")
                        if len(it) > 0:
                            arr = it.split(" ")
                            size = len(arr)
                            i = 0
                            while i < size:
                                key = arr[i]
                                value = arr[i + 1]
                                try:
                                    container[key] = int(value)
                                except print(0):
                                    container[key] = str(value)
                                i = i + 2
                elif token == "battle":
                    arr = it.split(" ")
                    size = len(arr)
                    if size > 0:
                        i = 0
                        while i < size:
                            # i = self.battle(arr, arr[i].lower(), i, size, container)
                            i = i + 1
                elif token == "move":
                    arr = it.split(" ")
                    size = len(arr)
                    if size > 0:
                        i = 0
                        while i < size:
                            if len(arr) == 0:
                                i = i + 1
                                continue
                            if arr[i] == "loot":
                                container["loot"]["active"] = True
                            elif arr[i] == "d":
                                container["loot"]["active"] = True
                            elif arr[i].isnumeric():
                                container["loot"]["probability"] = int(arr[i])
                            i = i + 1


class PropMoverExAI:

    def __init__(self):
        self.ais = dict()

    def load(self, file_prop):
        gLogger.set_section("propmoverexai")
        gLogger.info("loading", file_prop)

        movers = dict()
        with open(file_prop, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                line = line.replace("\t", "").replace("\n", "").replace(";", "")
                if len(line) == 0:
                    continue
                if "MI_" in line and line[0] == 'M' and line[1] == 'I' and line [2] == '_':
                    id = line
                    movers[id] = list()
                    continue
                if id != "":
                    movers[id].append(line)

        for it in movers:
            mover = movers[it]
            propai = PropMoverAI()
            propai.load(it, mover)
            self.ais[it] = propai

        gLogger.reset_section()


    def json_format(self):
        gLogger.set_section("propmoverexai")
        gLogger.info("writing JSON propmoverexai")


        data = dict()
        data["ai"] = {}
        for id_mover in self.ais:
            data["ai"][str(id_mover)] = dict()
            ai = data["ai"][str(id_mover)]
            ai["scan"] =  self.ais[id_mover].scan
            ai["battle"] = self.ais[id_mover].battle
            ai["move"] =  self.ais[id_mover].move

        with open(g_project.path_json + 'propMoverExAI.json', 'w') as fd:
            json.dump(data, fd, indent=4)

        gLogger.reset_section()


    def write_new_config(self, mode):
        if mode == 'json':
            self.json_format()