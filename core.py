import sys
import subprocess
import os
import shutil
from collections import OrderedDict

from utils.logger import gLogger
from utils.define import Define
from utils.text import Text

from project import g_project

from network.packet import Packet

from prop.propmover import PropMover
from prop.propitem import PropItem
from prop.propctrl import PropCtrl
from prop.propkarma import PropKarma
from prop.propskill import PropSkill
from prop.proptroupeskill import PropTroupeSkill
from prop.propquest import PropQuest
from prop.propmoverex import PropMoverEx
from prop.propmoverexai import PropMoverExAI
from prop.randomeventmonster import RandomEventMonster

from model.mdldyna import MdlDyna
from model.mdlobj import MdlObj
from world.world import Worlds

if __name__ == "__main__":
    gLogger.info("Running Flyff Properties ", g_project.version_binary)

    g_project.create_directories()

    #utils
    define = Define()

    #Scope MdlDyna
    if g_project.module["mdldyna"]["active"] is True:
        mdldyna = MdlDyna()
        mdldyna.load(g_project.file_mdldyna)

    #Scope MdlObj
    if g_project.module["mdlobj"]["active"] is True:
        mdlobj = MdlObj()
        mdlobj.load(g_project.file_mdldobj, g_project.file_define)
        if g_project.module["mover"]["filter"] is True:
            mdlobj.filter(g_project.pathmodel)
        mdlobj.write_new_config()

    #Scope PropItem
    if g_project.module["item"]["active"] is True:
        propitem = PropItem()
        propitem.load(g_project.file_propitem, g_project.file_text_propitem, g_project.file_define_item)
        if g_project.module["mover"]["filter"] is True:
            propitem.filter(g_project.pathicon_item)
        propitem.replace()
        propitem.write_new_config()

    #Scope PropMover
    if g_project.module["mover"]["active"] is True:
        propmover = PropMover()
        if propmover.load(g_project.file_propmover, g_project.file_text_propmover, g_project.file_define_obj) is False:
            gLogger.error("Error detected during the load propmover")
        if g_project.module["item"]["active"] is True:
            propmover.items = propitem.items
        if g_project.module["mover"]["filter"] is True:
            propmover.filter()
        propmover.write_new_config()

    #Scope World
    if g_project.module["world"]["active"] is True:
        worlds = Worlds()
        worlds.load(g_project.path_world, OrderedDict(define.load(g_project.file_define_world)), OrderedDict(define.load(g_project.file_define)))
        worlds.mdlobj = mdlobj

    # Scope Quests
    if g_project.module["quest"]["active"] is True:
        propquests = PropQuest()
        if propquests.load(g_project.file_propquest) is None:
            propquests = PropQuest()

    #Scope Drop
    if g_project.module["drop"]["active"] is True:
        propmoverex = PropMoverEx()
        propmoverex.load(g_project.file_propmoverex)
        propmoverex.write_new_config("xml")
        propmoverex.write_new_config("json")

    #Scope AI
    if g_project.module["ai"]["active"] is True:
        propmoverexai = PropMoverExAI()
        propmoverexai.load(g_project.file_propmoverex)
        propmoverexai.write_new_config("xml")
        propmoverexai.write_new_config("json")

    #Scope event monster
    if g_project.module["event_monster"]["active"] is True:
        randomeventmonster = RandomEventMonster()
        randomeventmonster.load(g_project.file_random_event_monster)
        randomeventmonster.write_new_config('json')

