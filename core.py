# system
import sys
import subprocess
import os
import shutil
from collections import OrderedDict

# projet
from utils import (gLogger, Define, Text)
from module import Module
from project import g_project
from network import Packet
from prop import (PropMover, PropItem, PropCtrl, PropKarma,
    PropSkill, PropTroupeSkill, PropQuest,
    PropMoverEx, PropMoverExAI, RandomEventMonster
)
from model import (MdlDyna, MdlObj)
from world import Worlds


define = Define()
module = Module()
mdl_dyna = MdlDyna()
mdl_obj = MdlObj()
prop_item = PropItem()


def module_mdldyna():
    mdl_dyna.load(g_project.file_mdldyna)


def module_mdlobj():
    mdl_obj.load(g_project.file_mdldobj, g_project.file_define)
    if module.modules["mover"]["filter"] is True:
        mdl_obj.filter(g_project.pathmodel)
    mdl_obj.write_new_config()


def module_karma():
    prop_karma = PropKarma()
    prop_karma.load(g_project.file_propkarma)
    if module.modules["karma"]["filter"] is True:
        prop_karma.filter()
    prop_karma.write_new_config('json')
    prop_karma.write_new_config('xml')


def module_ctrl():
    prop_ctrl = PropCtrl()
    prop_ctrl.load(g_project.file_propctrl)
    if module.modules["ctrl"]["filter"] is True:
        prop_ctrl.filter()
    prop_ctrl.write_new_config('json')
    prop_ctrl.write_new_config('xml')


def module_item():
    prop_item.load(g_project.file_propitem)
    if module.modules["mover"]["filter"] is True:
        prop_item.filter(g_project.pathicon_item)
        prop_item.replace()
    prop_item.write_new_config('xml')
    prop_item.write_new_config('json')


def module_skill():
    prop_skill = PropSkill()
    prop_skill.load(g_project.file_propskill)
    prop_skill.write_new_config('xml')
    prop_skill.write_new_config('json')

    prop_troupe_skill = PropTroupeSkill()
    prop_troupe_skill.load(g_project.file_proptroupeskill)
    prop_troupe_skill.write_new_config('xml')
    prop_troupe_skill.write_new_config('json')


def module_mover():
    prop_mover = PropMover()
    if prop_mover.load(g_project.file_propmover) is False:
        gLogger.error("Error detected during the load propmover")
    if module.modules["item"]["active"] is True:
        prop_mover.items = prop_item.items
    if module.modules["mover"]["filter"] is True:
        prop_mover.filter()
    prop_mover.write_new_config('json')
    prop_mover.write_new_config('xml')


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
    gLogger.reset_section()


    g_project.create_directories()

    if module.modules["header"]["active"] is True:
        module.module_header()
    if module.modules["text"]["active"] is True:
        module.module_text()
    if module.modules["mdldyna"]["active"] is True:
        module_mdldyna()
    if module.modules["mdlobj"]["active"] is True:
        module_mdlobj()
    if module.modules["karma"]["active"] is True:
        module_karma()
    if module.modules["ctrl"]["active"] is True:
        module_ctrl()
    if module.modules["item"]["active"] is True:
        module_item()
    if module.modules["skill"]["active"] is True:
        module_skill()
    if module.modules["mover"]["active"] is True:
        module_mover()
    if module.modules["world"]["active"] is True:
        module_world()
    if module.modules["quest"]["active"] is True:
        module_quest()
    if module.modules["drop"]["active"] is True:
        module_drop()
    if module.modules["ai"]["active"] is True:
        module_ai()
    if module.modules["event_monster"]["active"] is True:
        module_event_monster()

    module.write_project_file('json')
    module.write_project_file('xml')

    gLogger.set_section("core")
    gLogger.info("process finished")
    gLogger.reset_section()
