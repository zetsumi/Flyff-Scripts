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

if __name__ == "__main__":
    gLogger.info("Running Flyff Properties ", g_project.version_binary)

    # Project
    g_project.create_directories()

    # Utils
    define = Define()

    # Scope MdlDyna
    if g_project.module["mdldyna"]["active"] is True:
        mdl_dyna = MdlDyna()
        mdl_dyna.load(g_project.file_mdldyna)

    # Scope MdlObj
    if g_project.module["mdlobj"]["active"] is True:
        mdl_obj = MdlObj()
        mdl_obj.load(g_project.file_mdldobj, g_project.file_define)
        if g_project.module["mover"]["filter"] is True:
            mdl_obj.filter(g_project.pathmodel)
        mdl_obj.write_new_config()

    # Scope PropItem
    if g_project.module["item"]["active"] is True:
        prop_item = PropItem()
        prop_item.load(g_project.file_propitem, g_project.file_text_propitem, g_project.file_define_item)
        if g_project.module["mover"]["filter"] is True:
            prop_item.filter(g_project.pathicon_item)
        prop_item.replace()
        prop_item.write_new_config()

    # Scope Skill
    if g_project.module["skill"]["active"] is True:
        prop_skill = PropSkill()
        skills = prop_skill.load(g_project.file_propskill)
        prop_skill.write_new_config(skills)

    # Scope PropMover
    if g_project.module["mover"]["active"] is True:
        prop_mover = PropMover()
        if prop_mover.load(g_project.file_propmover, g_project.file_text_propmover, g_project.file_define_obj) is False:
            gLogger.error("Error detected during the load propmover")
        if g_project.module["item"]["active"] is True:
            prop_mover.items = prop_item.items
        if g_project.module["mover"]["filter"] is True:
            prop_mover.filter()
        prop_mover.write_new_config()

    # Scope World
    if g_project.module["world"]["active"] is True:
        worlds = Worlds()
        worlds.set_listing_world(g_project.file_world)
        worlds.load(g_project.path_ressource_world, OrderedDict(define.load(g_project.file_define_world)), OrderedDict(define.load(g_project.file_define)))
        worlds.mdlobj = mdl_obj

    # Scope Quests
    if g_project.module["quest"]["active"] is True:
        prop_quests = PropQuest()
        prop_quests.load(g_project.file_propquest)
        prop_quests.write_new_config()

    # Scope Drop
    if g_project.module["drop"]["active"] is True:
        prop_mover_ex = PropMoverEx()
        prop_mover_ex.load(g_project.file_propmoverex)
        prop_mover_ex.write_new_config("xml")
        prop_mover_ex.write_new_config("json")

    # Scope AI
    if g_project.module["ai"]["active"] is True:
        prop_ai = PropMoverExAI()
        prop_ai.load(g_project.file_propmoverex)
        prop_ai.write_new_config("xml")
        prop_ai.write_new_config("json")

    # Scope event monster
    if g_project.module["event_monster"]["active"] is True:
        random_event_monster = RandomEventMonster()
        random_event_monster.load(g_project.file_random_event_monster)
        random_event_monster.write_new_config('json')
