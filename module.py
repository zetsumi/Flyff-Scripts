import os
import json
from collections import OrderedDict

from utils import (gLogger, Define, Text)
from project import g_project

class Module:

    def __init__(self):
        self.modules = {
            "header": {
                "active": True,
                "filter": False
            },
            "text": {
                "active": True,
                "filter": False
            },
            "mdldyna": {
                "active": True,
                "filter": False
            },
            "mdlobj": {
                "active": True,
                "filter": False
            },
            "item": {
                "active": True,
                "filter": False
            },
            "mover": {
                "active": True,
                "filter": False
            },
            "world": {
                "active": True,
                "filter": False
            },
            "quest": {
                "active": True,
                "filter": False
            },
            "drop": {
                "active": True,
                "filter": False
            },
            "ai": {
                "active": True,
                "filter": False
            },
            "event_monster": {
                "active": True,
                "filter": False
            },
            "skill": {
                "active": True,
                "filter": False
            },
            "ctrl": {
                "active": True,
                "filter": False
            },
            "karma": {
                "active": True,
                "filter": False
            }
        }
        self.texts = OrderedDict({
            "ctrl": Text(),
            "item": Text(),
            "karma": Text(),
            "mover": Text(),
            "skill": Text(),
            "troupeskill": Text(),
            "dubear": Text(),
            "dudadk": Text(),
            "dudreadfulcave": Text(),
            "duflmas": Text(),
            "dukrr": Text(),
            "dumuscle": Text(),
            "duominous": Text(),
            "duominous_1": Text(),
            "durustia": Text(),
            "durustia_1": Text(),
            "dusatemple": Text(),
            "dusatempleboss": Text(),
            "wdarena": Text(),
            "wdguildhouselarge": Text(),
            "wdguildhousemiddle": Text(),
            "wdguildhousesmall": Text(),
            "wdguildwar": Text(),
            "wdguildwar1to1": Text(),
            "wdheaven01": Text(),
            "wdheaven02": Text(),
            "wdheaven03": Text(),
            "wdheaven04": Text(),
            "wdheaven05": Text(),
            "wdheaven06": Text(),
            "wdheaven06_1": Text(),
            "wdkebaras": Text(),
            "wdmadrigal": Text(),
            "wdminiroom": Text(),
            "wdquiz": Text(),
            "wdvolcane": Text(),
            "wdvolcanered": Text(),
            "wdvolcaneyellow": Text(),
            "faq": Text(),
            "gameguard": Text(),
            "guide": Text(),
            "help": Text(),
            "instanthelp": Text(),
            "minigame_alphabet": Text(),
            "patchclient": Text(),
            "tip": Text(),
            "treehelp": Text(),
            "tutorial": Text(),
            "character_etc": Text(),
            "character_school": Text(),
            "character": Text(),
            "etc": Text(),
            "honorlist": Text(),
            "lordskill": Text(),
            "patroldestination": Text(),
            "propitemetc": Text(),
            "propmotion": Text(),
            "propquest_dungeonandpk": Text(),
            "propquest_requestbox": Text(),
            "propquest_requestbox2": Text(),
            "propquest_scenario": Text(),
            "propquest": Text(),
            "questdestination": Text(),
            "resdata": Text(),
            "textclient": Text(),
            "textemotion": Text(),
            "dubear": Text(),
            "dudadk": Text(),
            "dudreadfulcave": Text(),
            "duflmas": Text(),
            "dukrr": Text(),
            "dumuscle": Text(),
            "duominous": Text(),
            "duominous_1": Text(),
            "durustia": Text(),
            "durustia_1": Text(),
            "dusatempleboss": Text(),
            "wdarena": Text(),
            "wdguildhouselarge": Text(),
            "wdguildhousemiddle": Text(),
            "wdguildhousesmall": Text(),
            "wdguildwar": Text(),
            "wdheaven01": Text(),
            "wdheaven02": Text(),
            "wdheaven03": Text(),
            "wdheaven04": Text(),
            "wdheaven05": Text(),
            "wdheaven06": Text(),
            "wdheaven06_1": Text(),
            "wdkebaras": Text(),
            "wdmadrigal": Text(),
            "wdminiroom": Text(),
            "wdquiz": Text(),
            "wdvolcane": Text(),
            "wdvolcanered": Text(),
            "wdvolcaneyellow": Text(),
            "world": Text()
        })
        self.defines = OrderedDict({
            "define": Define(),
            "attribute": Define(),
            "item": Define(),
            "item_kind": Define(),
            "job": Define(),
            "neuz": Define(),
            "obj": Define(),
            "skill": Define(),
            "sound": Define(),
            "world": Define(),
            "continent": Define(),
            "event": Define(),
            "lord_skill": Define(),
            "quest": Define(),
            "honor": Define(),
            "lang": Define(),
            "msghdr": Define(),
            "resdata": Define(),
            "wnd_style": Define(),
        })
    def __write_project_json__(self):
        gLogger.set_section("module")
        gLogger.info("writing project JSON")

        with open(g_project.path_json + 'project.json', 'w') as fd:
            datas = OrderedDict({
                "texts": list(),
                "defines": list()
            })
            for it in self.texts:
                text = self.texts[it]
                if len(text.filename_out_json) > 0:
                    datas["texts"].append(os.path.basename(text.filename_out_json))
            for it in self.defines:
                define = self.defines[it]
                if len(define.filename_out_json) > 0:
                    datas["defines"].append(os.path.basename(define.filename_out_json))

            json.dump(datas, fd, indent=4)

        gLogger.reset_section()

    def write_project_file(self, mode):
        if mode == 'json':
            self.__write_project_json__()
        elif mode == 'xml':
            pass