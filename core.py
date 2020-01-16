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
    "troupeskill": Text()
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

    defines["define"].write_json('define')
    defines["attribute"].write_json('attribute')
    defines["item"].write_json('item')
    defines["item_kind"].write_json('itemkind')
    defines["job"].write_json('job')
    defines["neuz"].write_json('neuz')
    defines["obj"].write_json('obj')
    defines["skill"].write_json('skill')
    defines["sound"].write_json('sound')
    defines["world"].write_json('world')


def module_text():
    texts["ctrl"].load(g_project.file_text_propctrl)
    texts["item"].load(g_project.file_text_propitem)
    texts["karma"].load(g_project.file_text_propkarma)
    texts["mover"].load(g_project.file_text_propmover)
    texts["skill"].load(g_project.file_text_propskill)
    texts["troupeskill"].load(g_project.file_text_proptroupeskill)

    texts["ctrl"].write_json('ctrl')
    texts["item"].write_json('item')
    texts["karma"].write_json('karma')
    texts["mover"].write_json('mover')
    texts["skill"].write_json('skill')
    texts["troupeskill"].write_json('troupeskill')


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
    prop_item.load(g_project.file_propitem, g_project.file_text_propitem, g_project.file_define_item)
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
    if prop_mover.load(g_project.file_propmover, g_project.file_text_propmover, g_project.file_define_obj) is False:
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
