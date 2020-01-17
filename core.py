# system
import sys
import subprocess
import os
import shutil
from collections import OrderedDict

# projet
from utils import (gLogger, Define, Text)
from project import g_project
from network import Packet
from prop import (PropMover, PropItem, PropCtrl, PropKarma,
    PropSkill, PropTroupeSkill, PropQuest,
    PropMoverEx, PropMoverExAI, RandomEventMonster
)
from model import (MdlDyna, MdlObj)
from world import Worlds

# Project
g_project.create_directories()
define = Define()

texts = OrderedDict({
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
defines = OrderedDict({
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

mdl_dyna = MdlDyna()
mdl_obj = MdlObj()
prop_item = PropItem()


def module_header():
    defines["define"].load(g_project.file_define)
    defines["attribute"].load(g_project.file_define_attribute)
    defines["item"].load(g_project.file_define_item)
    defines["item_kind"].load(g_project.file_define_itemkind)
    defines["job"].load(g_project.file_define_job)
    defines["neuz"].load(g_project.file_define_neuz)
    defines["obj"].load(g_project.file_define_obj)
    defines["skill"].load(g_project.file_define_skill)
    defines["sound"].load(g_project.file_define_sound)
    defines["world"].load(g_project.file_define_world)
    defines["continent"].load(g_project.file_define_world)
    defines["event"].load(g_project.file_define_world)
    defines["lord_skill"].load(g_project.file_define_world)
    defines["quest"].load(g_project.file_define_world)
    defines["honor"].load(g_project.file_define_world)
    defines["lang"].load(g_project.file_define_world)
    defines["msghdr"].load(g_project.file_define_world)
    defines["resdata"].load(g_project.file_define_world)
    defines["wnd_style"].load(g_project.file_define_world)

    for k in defines:
        defines[k].write_json(k)

def module_text():
    texts["ctrl"].load(g_project.file_text_propctrl)
    texts["item"].load(g_project.file_text_propitem)
    texts["karma"].load(g_project.file_text_propkarma)
    texts["mover"].load(g_project.file_text_propmover)
    texts["skill"].load(g_project.file_text_propskill)
    texts["troupeskill"].load(g_project.file_text_proptroupeskill)
    texts["dubear"].load(g_project.file_text_dubear)
    texts["dudadk"].load(g_project.file_text_dudadk)
    texts["dudreadfulcave"].load(g_project.file_text_dudreadfulcave)
    texts["duflmas"].load(g_project.file_text_duflmas)
    texts["dukrr"].load(g_project.file_text_dukrr)
    texts["dumuscle"].load(g_project.file_text_dumuscle)
    texts["duominous"].load(g_project.file_text_duominous)
    texts["duominous_1"].load(g_project.file_text_duominous_1)
    texts["durustia"].load(g_project.file_text_durustia)
    texts["durustia_1"].load(g_project.file_text_durustia_1)
    texts["dusatemple"].load(g_project.file_text_dusatemple)
    texts["dusatempleboss"].load(g_project.file_text_dusatempleboss)
    texts["wdarena"].load(g_project.file_text_wdarena)
    texts["wdguildhouselarge"].load(g_project.file_text_wdguildhouselarge)
    texts["wdguildhousemiddle"].load(g_project.file_text_wdguildhousemiddle)
    texts["wdguildhousesmall"].load(g_project.file_text_wdguildhousesmall)
    texts["wdguildwar"].load(g_project.file_text_wdguildwar)
    texts["wdguildwar1to1"].load(g_project.file_text_wdguildwar1to1)
    texts["wdheaven01"].load(g_project.file_text_wdheaven01)
    texts["wdheaven02"].load(g_project.file_text_wdheaven02)
    texts["wdheaven03"].load(g_project.file_text_wdheaven03)
    texts["wdheaven04"].load(g_project.file_text_wdheaven04)
    texts["wdheaven05"].load(g_project.file_text_wdheaven05)
    texts["wdheaven06"].load(g_project.file_text_wdheaven06)
    texts["wdheaven06_1"].load(g_project.file_text_wdheaven06_1)
    texts["wdkebaras"].load(g_project.file_text_wdkebaras)
    texts["wdmadrigal"].load(g_project.file_text_wdmadrigal)
    texts["wdminiroom"].load(g_project.file_text_wdminiroom)
    texts["wdquiz"].load(g_project.file_text_wdquiz)
    texts["wdvolcane"].load(g_project.file_text_wdvolcane)
    texts["wdvolcanered"].load(g_project.file_text_wdvolcanered)
    texts["wdvolcaneyellow"].load(g_project.file_text_wdvolcaneyellow)
    texts["faq"].load(g_project.file_text_faq)
    texts["gameguard"].load(g_project.file_text_gameguard)
    texts["guide"].load(g_project.file_text_guide)
    texts["help"].load(g_project.file_text_help)
    texts["instanthelp"].load(g_project.file_text_instanthelp)
    texts["minigame_alphabet"].load(g_project.file_text_minigame_alphabet)
    texts["patchclient"].load(g_project.file_text_patchclient)
    texts["tip"].load(g_project.file_text_tip)
    texts["treehelp"].load(g_project.file_text_treehelp)
    texts["tutorial"].load(g_project.file_text_tutorial)
    texts["character_etc"].load(g_project.file_text_character_etc)
    texts["character_school"].load(g_project.file_text_character_school)
    texts["character"].load(g_project.file_text_character)
    texts["etc"].load(g_project.file_text_etc)
    texts["honorlist"].load(g_project.file_text_honorlist)
    texts["lordskill"].load(g_project.file_text_lordskill)
    texts["patroldestination"].load(g_project.file_text_patroldestination)
    texts["propitemetc"].load(g_project.file_text_propitemetc)
    texts["propmotion"].load(g_project.file_text_propmotion)
    texts["propquest_dungeonandpk"].load(g_project.file_text_propquest_dungeonandpk)
    texts["propquest_requestbox"].load(g_project.file_text_propquest_requestbox)
    texts["propquest_requestbox2"].load(g_project.file_text_propquest_requestbox2)
    texts["propquest_scenario"].load(g_project.file_text_propquest_scenario)
    texts["propquest"].load(g_project.file_text_propquest)
    texts["questdestination"].load(g_project.file_text_questdestination)
    texts["resdata"].load(g_project.file_text_resdata)
    texts["textclient"].load(g_project.file_text_textclient)
    texts["textemotion"].load(g_project.file_text_textemotion)
    texts["dubear"].load(g_project.file_text_dubear)
    texts["dudadk"].load(g_project.file_text_dudadk)
    texts["dudreadfulcave"].load(g_project.file_text_dudreadfulcave)
    texts["duflmas"].load(g_project.file_text_duflmas)
    texts["dukrr"].load(g_project.file_text_dukrr)
    texts["dumuscle"].load(g_project.file_text_dumuscle)
    texts["duominous"].load(g_project.file_text_duominous)
    texts["duominous_1"].load(g_project.file_text_duominous_1)
    texts["durustia"].load(g_project.file_text_durustia)
    texts["durustia_1"].load(g_project.file_text_durustia_1)
    texts["dusatempleboss"].load(g_project.file_text_dusatempleboss)
    texts["wdarena"].load(g_project.file_text_wdarena)
    texts["wdguildhouselarge"].load(g_project.file_text_wdguildhouselarge)
    texts["wdguildhousemiddle"].load(g_project.file_text_wdguildhousemiddle)
    texts["wdguildhousesmall"].load(g_project.file_text_wdguildhousesmall)
    texts["wdguildwar"].load(g_project.file_text_wdguildwar)
    texts["wdheaven01"].load(g_project.file_text_wdheaven01)
    texts["wdheaven02"].load(g_project.file_text_wdheaven02)
    texts["wdheaven03"].load(g_project.file_text_wdheaven03)
    texts["wdheaven04"].load(g_project.file_text_wdheaven04)
    texts["wdheaven05"].load(g_project.file_text_wdheaven05)
    texts["wdheaven06"].load(g_project.file_text_wdheaven06)
    texts["wdheaven06_1"].load(g_project.file_text_wdheaven06_1)
    texts["wdkebaras"].load(g_project.file_text_wdkebaras)
    texts["wdmadrigal"].load(g_project.file_text_wdmadrigal)
    texts["wdminiroom"].load(g_project.file_text_wdminiroom)
    texts["wdquiz"].load(g_project.file_text_wdquiz)
    texts["wdvolcane"].load(g_project.file_text_wdvolcane)
    texts["wdvolcanered"].load(g_project.file_text_wdvolcanered)
    texts["wdvolcaneyellow"].load(g_project.file_text_wdvolcaneyellow)
    texts["world"].load(g_project.file_text_world)

    for k in texts:
        texts[k].write_json(k)



def module_mdldyna():
    mdl_dyna.load(g_project.file_mdldyna)


def module_mdlobj():
    mdl_obj.load(g_project.file_mdldobj, g_project.file_define)
    if g_project.module["mover"]["filter"] is True:
        mdl_obj.filter(g_project.pathmodel)
    mdl_obj.write_new_config()


def module_karma():
    prop_karma = PropKarma()
    prop_karma.load(g_project.file_propkarma)
    if g_project.module["karma"]["filter"] is True:
        prop_karma.filter()
    prop_karma.write_new_config('json')
    prop_karma.write_new_config('xml')


def module_ctrl():
    prop_ctrl = PropCtrl()
    prop_ctrl.load(g_project.file_propctrl)
    if g_project.module["ctrl"]["filter"] is True:
        prop_ctrl.filter()
    prop_ctrl.write_new_config('json')
    prop_ctrl.write_new_config('xml')


def module_item():
    prop_item.load(g_project.file_propitem)
    if g_project.module["mover"]["filter"] is True:
        prop_item.filter(g_project.pathicon_item)
        prop_item.replace()
    prop_item.write_new_config('xml')
    prop_item.write_new_config('json')


def module_skill():
    prop_skill = PropSkill()
    prop_skill.load(g_project.file_propskill)
    prop_skill.write_new_config('xml')
    prop_skill.write_new_config('json')


def module_mover():
    prop_mover = PropMover()
    if prop_mover.load(g_project.file_propmover) is False:
        gLogger.error("Error detected during the load propmover")
    if g_project.module["item"]["active"] is True:
        prop_mover.items = prop_item.items
    if g_project.module["mover"]["filter"] is True:
        prop_mover.filter()
    prop_mover.write_new_config()


def module_world():
    worlds = Worlds()
    worlds.set_listing_world(g_project.file_world)
    worlds.load(g_project.path_ressource_world, OrderedDict(define.load(g_project.file_define_world)), OrderedDict(define.load(g_project.file_define)))
    worlds.mdlobj = mdl_obj


def module_quest():
    prop_quests = PropQuest()
    prop_quests.load(g_project.file_propquest)
    prop_quests.write_new_config('xml')
    prop_quests.write_new_config('json')


def module_drop():
    prop_mover_ex = PropMoverEx()
    prop_mover_ex.load(g_project.file_propmoverex)
    prop_mover_ex.write_new_config("xml")
    prop_mover_ex.write_new_config("json")


def module_ai():
    prop_ai = PropMoverExAI()
    prop_ai.load(g_project.file_propmoverex)
    prop_ai.write_new_config("xml")
    prop_ai.write_new_config("json")


def module_event_monster():
    random_event_monster = RandomEventMonster()
    random_event_monster.load(g_project.file_random_event_monster)
    random_event_monster.write_new_config('json')


if __name__ == "__main__":
    gLogger.set_section("core")
    gLogger.info("Running Flyff Properties ", g_project.version_binary)

    if g_project.module["header"]["active"] is True:
        module_header()
    if g_project.module["text"]["active"] is True:
        module_text()
    if g_project.module["mdldyna"]["active"] is True:
        module_mdldyna()
    if g_project.module["mdlobj"]["active"] is True:
        module_mdlobj()
    if g_project.module["karma"]["active"] is True:
        module_karma()
    if g_project.module["ctrl"]["active"] is True:
        module_ctrl()
    if g_project.module["item"]["active"] is True:
        module_item()
    if g_project.module["skill"]["active"] is True:
        module_skill()
    if g_project.module["mover"]["active"] is True:
        module_mover()
    if g_project.module["world"]["active"] is True:
        module_world()
    if g_project.module["quest"]["active"] is True:
        module_quest()
    if g_project.module["drop"]["active"] is True:
        module_drop()
    if g_project.module["ai"]["active"] is True:
        module_ai()
    if g_project.module["event_monster"]["active"] is True:
        module_event_monster()

    gLogger.info("process finished")
    gLogger.reset_section()
