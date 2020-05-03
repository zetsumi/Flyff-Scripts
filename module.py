import json
import os
from collections import OrderedDict

from model import (MdlDyna, MdlObj)
from project import g_project
from prop import (PropMover, PropItem, PropCtrl, PropKarma,
                  PropSkill, PropTroupeSkill, PropQuest,
                  PropMoverEx, PropMoverExAI, RandomEventMonster,
                  DiePenalty, Filter, Invalid, Letter
                  )
from utils import (gLogger, Define, Text)
from world import WorldManager


class Module:
    # Represente l'ensemble des module du project
    # Un module contient un nom et deux clefs `active` et `filter`
    def __init__(self):
        # Liste des modules
        self.modules = {
            "header": {
                "active": True,
                "filter": False,
                "exec": self.module_header
            },
            "text": {
                "active": False,
                "filter": False,
                "exec": self.module_text
            },
            "mdldyna": {
                "active": False,
                "filter": False,
                "exec": self.module_mdldyna
            },
            "mdlobj": {
                "active": False,
                "filter": False,
                "exec": self.module_mdlobj
            },
            "item": {
                "active": False,
                "filter": False,
                "exec": self.module_item
            },
            "mover": {
                "active": False,
                "filter": False,
                "exec": self.module_mover
            },
            "world": {
                "active": True,
                "filter": False,
                "exec": self.module_world
            },
            "quest": {
                "active": False,
                "filter": False,
                "exec": self.module_quest
            },
            "drop": {
                "active": False,
                "filter": False,
                "exec": self.module_quest
            },
            "ai": {
                "active": False,
                "filter": False,
                "exec": self.module_ai
            },
            "event_monster": {
                "active": False,
                "filter": False,
                "exec": self.module_event_monster
            },
            "skill": {
                "active": False,
                "filter": False,
                "exec": self.module_skill
            },
            "ctrl": {
                "active": False,
                "filter": False,
                "exec": self.module_ctrl
            },
            "karma": {
                "active": False,
                "filter": False,
                "exec": self.module_karma
            },
            "diepenalty": {
                "active": False,
                "filter": False,
                "exec": self.module_die_penalty
            },
            "filter": {
                "active": False,
                "filter": False,
                "exec": None
            },
            "invalid": {
                "active": False,
                "filter": False,
                "exec": self.module_invalid
            },
            "letter": {
                "active": False,
                "filter": False,
                "exec": self.module_letter
            }
        }
        # Liste des textes chargé
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
        # Liste des defines
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

        # Instance des object et mondes
        self.mdl_dyna = MdlDyna()
        self.mdl_obj = MdlObj()
        self.worlds_manager= WorldManager()

        # Instance des classes Propriétés
        self.prop_item = PropItem()
        self.prop_mover = PropMover()
        self.prop_mover_ex = PropMoverEx()
        self.prop_ai = PropMoverExAI()
        self.prop_ctrl = PropCtrl()
        self.prop_skill = PropSkill()
        self.prop_troupe_skill = PropTroupeSkill()
        self.prop_karma = PropKarma()
        self.prop_quest = PropQuest()

        # Instance des classes utiles
        self.filter = Filter()
        self.letter = Letter()
        self.invalid = Invalid()

        # Instance des classes events
        self.die_penalty = DiePenalty()
        self.random_event_monster = RandomEventMonster()

    def __write_project_json__(self):
        # Ecriture de la liste des module traite dans l'exécution du program
        # Sortie : project.json

        gLogger.set_section("module")
        out_file = g_project.path_json + 'project.json'
        gLogger.info("writing ", out_file)

        with open(out_file, 'w') as fd:
            data = OrderedDict({
                "path_ressource": str(),
                "texts": list(),
                "defines": list(),
                "props": OrderedDict()
            })
            for it in self.texts:
                text = self.texts[it]
                if len(text.filename_out_json) > 0:
                    data["texts"].append(os.path.basename(text.filename_out_json))
            for it in self.defines:
                define = self.defines[it]
                if len(define.filename_out_json) > 0:
                    data["defines"].append(os.path.basename(define.filename_out_json))
            data["props"] = OrderedDict({
                "propitem": {
                    "xml": os.path.basename(self.prop_item.out_filename_xml),
                    "json": os.path.basename(self.prop_item.out_filename_json),
                },
                "propmover": {
                    "xml": os.path.basename(self.prop_mover.out_filename_xml),
                    "json": os.path.basename(self.prop_mover.out_filename_json)
                },
                "propmover_extend": {
                    "xml": os.path.basename(self.prop_mover_ex.out_filename_xml),
                    "json": os.path.basename(self.prop_mover_ex.out_filename_json)
                },
                "propmover_ai": {
                    "xml": os.path.basename(self.prop_ai.out_filename_xml),
                    "json": os.path.basename(self.prop_ai.out_filename_json)
                },
                "propctrl": {
                    "xml": os.path.basename(self.prop_ctrl.out_filename_xml),
                    "json": os.path.basename(self.prop_ctrl.out_filename_json)
                },
                "propskill": {
                    "xml": os.path.basename(self.prop_skill.out_filename_xml),
                    "json": os.path.basename(self.prop_skill.out_filename_json)
                },
                "proptroupeskill": {
                    "xml": os.path.basename(self.prop_troupe_skill.out_filename_xml),
                    "json": os.path.basename(self.prop_troupe_skill.out_filename_json)
                },
                "propkarma": {
                    "xml": os.path.basename(self.prop_karma.out_filename_xml),
                    "json": os.path.basename(self.prop_karma.out_filename_json)
                },
                "propquest": {
                    "xml": os.path.basename(self.prop_quest.out_filename_xml),
                    "json": os.path.basename(self.prop_quest.out_filename_json)
                },
                "random_event_monster": {
                    "xml": os.path.basename(self.random_event_monster.out_filename_xml),
                    "json": os.path.basename(self.random_event_monster.out_filename_json)
                },
                "diepenalty": {
                    "xml": os.path.basename(self.die_penalty.out_filename_xml),
                    "json": os.path.basename(self.die_penalty.out_filename_json)
                },
                "filter": {
                    "xml": os.path.basename(self.filter.out_filename_xml),
                    "json": os.path.basename(self.filter.out_filename_json)
                },
                "letter": {
                    "xml": os.path.basename(self.letter.out_filename_xml),
                    "json": os.path.basename(self.letter.out_filename_json)
                }
            })
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
        self.prop_karma.load(g_project.file_propkarma)
        if self.modules["karma"]["filter"] is True:
            self.prop_karma.filter()
        self.prop_karma.write_new_config('json')
        self.prop_karma.write_new_config('xml')

    def module_ctrl(self):
        self.prop_ctrl.load(g_project.file_propctrl)
        if self.modules["ctrl"]["filter"] is True:
            self.prop_ctrl.filter()
        self.prop_ctrl.write_new_config('json')
        self.prop_ctrl.write_new_config('xml')

    def module_item(self):
        self.prop_item.load(g_project.file_propitem)
        if self.modules["mover"]["filter"] is True:
            self.prop_item.filter(g_project.pathicon_item)
            self.prop_item.replace()
        self.prop_item.write_new_config('xml')
        self.prop_item.write_new_config('json')

    def module_skill(self):
        self.prop_skill.load(g_project.file_propskill)
        self.prop_skill.write_new_config('xml')
        self.prop_skill.write_new_config('json')

        self.prop_troupe_skill.load(g_project.file_proptroupeskill)
        self.prop_troupe_skill.write_new_config('xml')
        self.prop_troupe_skill.write_new_config('json')

    def module_mover(self):
        if self.prop_mover.load(g_project.file_propmover) is False:
            gLogger.error("Error detected during the load propmover")
        if self.modules["item"]["active"] is True:
            self.prop_mover.items = self.prop_item.items
        if self.modules["mover"]["filter"] is True:
            self.prop_mover.filter()
        self.prop_mover.write_new_config('json')
        self.prop_mover.write_new_config('xml')

    def module_world(self):
        self.worlds_manager.set_listing_world(g_project.file_world)
        self.worlds_manager.load(g_project.path_ressource_world,
                    self.defines["world"].datas,
                    self.defines["define"].datas)
        self.worlds_manager.mdlobj = self.mdl_obj

    def module_quest(self):
        self.prop_quest.load(g_project.file_propquest)
        self.prop_quest.write_new_config('xml')
        self.prop_quest.write_new_config('json')

    def module_drop(self):
        self.prop_mover_ex.load(g_project.file_propmoverex)
        self.prop_mover_ex.write_new_config("xml")
        self.prop_mover_ex.write_new_config("json")

    def module_ai(self):
        self.prop_ai.load(g_project.file_propmoverex)
        self.prop_ai.write_new_config("xml")
        self.prop_ai.write_new_config("json")

    def module_event_monster(self):
        self.random_event_monster.load(g_project.file_random_event_monster)
        self.random_event_monster.write_new_config('json')

    def module_die_penalty(self):
        self.die_penalty.load(g_project.file_prop_diepenalty)
        self.die_penalty.write_new_config('json')
        self.die_penalty.write_new_config('xml')

    def module_filter(self):
        self.filter.load(g_project.file_filter)
        self.filter.load(g_project.file_filter_CHI)
        self.filter.load(g_project.file_filter_ENG)
        self.filter.load(g_project.file_filter_FRE)
        self.filter.load(g_project.file_filter_GER)
        self.filter.load(g_project.file_filter_JAP)
        self.filter.load(g_project.file_filter_KOR)
        self.filter.load(g_project.file_filter_SPA)
        self.filter.load(g_project.file_filter_THA)
        self.filter.load(g_project.file_filter_TWN)

        self.filter.write_new_config('json')
        self.filter.write_new_config('xml')

    def module_invalid(self):
        self.invalid.load(g_project.file_invalid)
        self.invalid.load(g_project.file_invalid_CHI)
        self.invalid.load(g_project.file_invalid_ENG)
        self.invalid.load(g_project.file_invalid_FRE)
        self.invalid.load(g_project.file_invalid_GER)
        self.invalid.load(g_project.file_invalid_JAP)
        self.invalid.load(g_project.file_invalid_KOR)
        self.invalid.load(g_project.file_invalid_SPA)
        self.invalid.load(g_project.file_invalid_THA)
        self.invalid.load(g_project.file_invalid_TWN)

        self.invalid.write_new_config('json')
        self.invalid.write_new_config('xml')

    def module_letter(self):
        self.letter.load(g_project.file_letter_ENG)
        self.letter.load(g_project.file_letter_FRE)
        self.letter.load(g_project.file_letter_GER)
        self.letter.load(g_project.file_letter_SPA)
        self.letter.load(g_project.file_letter_2_FRE)
        self.letter.load(g_project.file_letter_2_GER)

        self.letter.write_new_config('json')
        self.letter.write_new_config('xml')
