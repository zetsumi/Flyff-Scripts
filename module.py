import os
import json

from collections import OrderedDict
from utils import (gLogger, Define, Text)
from project import g_project
from network import Packet
from prop import (PropMover, PropItem, PropCtrl, PropKarma,
                  PropSkill, PropTroupeSkill, PropQuest,
                  PropMoverEx, PropMoverExAI, RandomEventMonster
                  )
from world import Worlds
from model import (MdlDyna, MdlObj)


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
        self.mdl_dyna = MdlDyna()
        self.mdl_obj = MdlObj()
        self.prop_item = PropItem()
        #TODO : a replace par self.defines["XXX"].data
        self.define = Define()

    def __write_project_json__(self):
        gLogger.set_section("module")

        out_file = g_project.path_json + 'project.json'
        gLogger.info("writing ", out_file)

        with open(out_file, 'w') as fd:
            data = OrderedDict({
                "path_ressource": str(),
                "texts": list(),
                "defines": list(),
            })
            for it in self.texts:
                text = self.texts[it]
                if len(text.filename_out_json) > 0:
                    data["texts"].append(os.path.basename(text.filename_out_json))
            for it in self.defines:
                define = self.defines[it]
                if len(define.filename_out_json) > 0:
                    data["defines"].append(os.path.basename(define.filename_out_json))

            json.dump(data, fd, indent=4)

        gLogger.reset_section()

    def write_project_file(self, mode):
        if mode == 'json':
            self.__write_project_json__()
        elif mode == 'xml':
            pass

    def module_header(self):
        self.defines["define"].load(g_project.file_define)
        self.defines["attribute"].load(g_project.file_define_attribute)
        self.defines["item"].load(g_project.file_define_item)
        self.defines["item_kind"].load(g_project.file_define_itemkind)
        self.defines["job"].load(g_project.file_define_job)
        self.defines["neuz"].load(g_project.file_define_neuz)
        self.defines["obj"].load(g_project.file_define_obj)
        self.defines["skill"].load(g_project.file_define_skill)
        self.defines["sound"].load(g_project.file_define_sound)
        self.defines["world"].load(g_project.file_define_world)
        self.defines["continent"].load(g_project.file_define_continent_def)
        self.defines["event"].load(g_project.file_define_event)
        self.defines["lord_skill"].load(g_project.file_define_lord_skill)
        self.defines["quest"].load(g_project.file_define_quest)
        self.defines["honor"].load(g_project.file_define_honor)
        self.defines["lang"].load(g_project.file_define_lang)
        self.defines["msghdr"].load(g_project.file_define_msg_hdr)
        self.defines["resdata"].load(g_project.file_define_resdata)
        self.defines["wnd_style"].load(g_project.file_define_wnd_style)

        for k in self.defines:
            self.defines[k].write_json(k)

    def module_text(self):
        self.texts["ctrl"].load(g_project.file_text_propctrl)
        self.texts["item"].load(g_project.file_text_propitem)
        self.texts["karma"].load(g_project.file_text_propkarma)
        self.texts["mover"].load(g_project.file_text_propmover)
        self.texts["skill"].load(g_project.file_text_propskill)
        self.texts["troupeskill"].load(g_project.file_text_proptroupeskill)
        self.texts["dubear"].load(g_project.file_text_dubear)
        self.texts["dudadk"].load(g_project.file_text_dudadk)
        self.texts["dudreadfulcave"].load(g_project.file_text_dudreadfulcave)
        self.texts["duflmas"].load(g_project.file_text_duflmas)
        self.texts["dukrr"].load(g_project.file_text_dukrr)
        self.texts["dumuscle"].load(g_project.file_text_dumuscle)
        self.texts["duominous"].load(g_project.file_text_duominous)
        self.texts["duominous_1"].load(g_project.file_text_duominous_1)
        self.texts["durustia"].load(g_project.file_text_durustia)
        self.texts["durustia_1"].load(g_project.file_text_durustia_1)
        self.texts["dusatemple"].load(g_project.file_text_dusatemple)
        self.texts["dusatempleboss"].load(g_project.file_text_dusatempleboss)
        self.texts["wdarena"].load(g_project.file_text_wdarena)
        self.texts["wdguildhouselarge"].load(g_project.file_text_wdguildhouselarge)
        self.texts["wdguildhousemiddle"].load(g_project.file_text_wdguildhousemiddle)
        self.texts["wdguildhousesmall"].load(g_project.file_text_wdguildhousesmall)
        self.texts["wdguildwar"].load(g_project.file_text_wdguildwar)
        self.texts["wdguildwar1to1"].load(g_project.file_text_wdguildwar1to1)
        self.texts["wdheaven01"].load(g_project.file_text_wdheaven01)
        self.texts["wdheaven02"].load(g_project.file_text_wdheaven02)
        self.texts["wdheaven03"].load(g_project.file_text_wdheaven03)
        self.texts["wdheaven04"].load(g_project.file_text_wdheaven04)
        self.texts["wdheaven05"].load(g_project.file_text_wdheaven05)
        self.texts["wdheaven06"].load(g_project.file_text_wdheaven06)
        self.texts["wdheaven06_1"].load(g_project.file_text_wdheaven06_1)
        self.texts["wdkebaras"].load(g_project.file_text_wdkebaras)
        self.texts["wdmadrigal"].load(g_project.file_text_wdmadrigal)
        self.texts["wdminiroom"].load(g_project.file_text_wdminiroom)
        self.texts["wdquiz"].load(g_project.file_text_wdquiz)
        self.texts["wdvolcane"].load(g_project.file_text_wdvolcane)
        self.texts["wdvolcanered"].load(g_project.file_text_wdvolcanered)
        self.texts["wdvolcaneyellow"].load(g_project.file_text_wdvolcaneyellow)
        self.texts["faq"].load(g_project.file_text_faq)
        self.texts["gameguard"].load(g_project.file_text_gameguard)
        self.texts["guide"].load(g_project.file_text_guide)
        self.texts["help"].load(g_project.file_text_help)
        self.texts["instanthelp"].load(g_project.file_text_instanthelp)
        self.texts["minigame_alphabet"].load(g_project.file_text_minigame_alphabet)
        self.texts["patchclient"].load(g_project.file_text_patchclient)
        self.texts["tip"].load(g_project.file_text_tip)
        self.texts["treehelp"].load(g_project.file_text_treehelp)
        self.texts["tutorial"].load(g_project.file_text_tutorial)
        self.texts["character_etc"].load(g_project.file_text_character_etc)
        self.texts["character_school"].load(g_project.file_text_character_school)
        self.texts["character"].load(g_project.file_text_character)
        self.texts["etc"].load(g_project.file_text_etc)
        self.texts["honorlist"].load(g_project.file_text_honorlist)
        self.texts["lordskill"].load(g_project.file_text_lordskill)
        self.texts["patroldestination"].load(g_project.file_text_patroldestination)
        self.texts["propitemetc"].load(g_project.file_text_propitemetc)
        self.texts["propmotion"].load(g_project.file_text_propmotion)
        self.texts["propquest_dungeonandpk"].load(g_project.file_text_propquest_dungeonandpk)
        self.texts["propquest_requestbox"].load(g_project.file_text_propquest_requestbox)
        self.texts["propquest_requestbox2"].load(g_project.file_text_propquest_requestbox2)
        self.texts["propquest_scenario"].load(g_project.file_text_propquest_scenario)
        self.texts["propquest"].load(g_project.file_text_propquest)
        self.texts["questdestination"].load(g_project.file_text_questdestination)
        self.texts["resdata"].load(g_project.file_text_resdata)
        self.texts["textclient"].load(g_project.file_text_textclient)
        self.texts["textemotion"].load(g_project.file_text_textemotion)
        self.texts["world"].load(g_project.file_text_world)

        for k in self.texts:
            self.texts[k].write_json(k)

    def module_mdldyna(self):
        self.mdl_dyna.load(g_project.file_mdldyna)

    def module_mdlobj(self):
        self.mdl_obj.load(g_project.file_mdldobj, g_project.file_define)
        if self.modules["mover"]["filter"] is True:
            self.mdl_obj.filter(g_project.pathmodel)
        self.mdl_obj.write_new_config()

    def module_karma(self):
        prop_karma = PropKarma()
        prop_karma.load(g_project.file_propkarma)
        if self.modules["karma"]["filter"] is True:
            prop_karma.filter()
        prop_karma.write_new_config('json')
        prop_karma.write_new_config('xml')

    def module_ctrl(self):
        prop_ctrl = PropCtrl()
        prop_ctrl.load(g_project.file_propctrl)
        if self.modules["ctrl"]["filter"] is True:
            prop_ctrl.filter()
        prop_ctrl.write_new_config('json')
        prop_ctrl.write_new_config('xml')

    def module_item(self):
        self.prop_item.load(g_project.file_propitem)
        if self.modules["mover"]["filter"] is True:
            self.prop_item.filter(g_project.pathicon_item)
            self.prop_item.replace()
        self.prop_item.write_new_config('xml')
        self.prop_item.write_new_config('json')

    def module_skill(self):
        prop_skill = PropSkill()
        prop_skill.load(g_project.file_propskill)
        prop_skill.write_new_config('xml')
        prop_skill.write_new_config('json')

        prop_troupe_skill = PropTroupeSkill()
        prop_troupe_skill.load(g_project.file_proptroupeskill)
        prop_troupe_skill.write_new_config('xml')
        prop_troupe_skill.write_new_config('json')

    def module_mover(self):
        prop_mover = PropMover()
        if prop_mover.load(g_project.file_propmover) is False:
            gLogger.error("Error detected during the load propmover")
        if self.modules["item"]["active"] is True:
            prop_mover.items = self.prop_item.items
        if self.modules["mover"]["filter"] is True:
            prop_mover.filter()
        prop_mover.write_new_config('json')
        prop_mover.write_new_config('xml')

    def module_world(self):
        worlds = Worlds()
        worlds.set_listing_world(g_project.file_world)
        worlds.load(g_project.path_ressource_world,
                    self.defines["world"].datas,
                    self.defines["define"].datas)
        worlds.mdlobj = self.mdl_obj

    def module_quest(self):
        prop_quests = PropQuest()
        prop_quests.load(g_project.file_propquest)
        prop_quests.write_new_config('xml')
        prop_quests.write_new_config('json')

    def module_drop(self):
        prop_mover_ex = PropMoverEx()
        prop_mover_ex.load(g_project.file_propmoverex)
        prop_mover_ex.write_new_config("xml")
        prop_mover_ex.write_new_config("json")

    def module_ai(self):
        prop_ai = PropMoverExAI()
        prop_ai.load(g_project.file_propmoverex)
        prop_ai.write_new_config("xml")
        prop_ai.write_new_config("json")

    def module_event_monster(self):
        random_event_monster = RandomEventMonster()
        random_event_monster.load(g_project.file_random_event_monster)
        random_event_monster.write_new_config('json')
