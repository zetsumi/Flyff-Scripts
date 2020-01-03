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
from prop.randomeventmonster import RandomEventMonster

from model.mdldyna import MdlDyna
from model.mdlobj import MdlObj
from world.world import Worlds

if __name__ == "__main__":
    gLogger.info("Running Flyff Properties ", g_project.version_binary)

    g_project.create_directories()

    #utils
    define = Define()

    # Scope mdldyna
    mdldyna = MdlDyna()
    mdldyna.load(g_project.file_mdldyna)

    # Scope mdlobj
    mdlobj = MdlObj()
    mdlobj.load(g_project.file_mdldobj, g_project.file_define)
    # mdlobj.filter(g_project.pathmodel)
    mdlobj.write_new_config()

    # Scope to filter propitem
    propitem = PropItem()
    propitem.load(g_project.file_propitem, g_project.file_text_propitem, g_project.file_define_item)
    # propitem.filter(g_project.pathicon_item)
    propitem.replace()
    propitem.write_new_config()

    # scope to filter propmover
    propmover = PropMover()
    if propmover.load(g_project.file_propmover, g_project.file_text_propmover, g_project.file_define_obj) is False:
        gLogger.error("Error detected during the load propmover")
    propmover.items = propitem.items
    # propmover.filter()
    propmover.write_new_config()

    #Scope World
    worlds = Worlds()
    worlds.load(g_project.path_world, OrderedDict(define.load(g_project.file_define_world)), OrderedDict(define.load(g_project.file_define)))
    worlds.mdlobj = mdlobj

    # Scope Quests
    propquests = PropQuest()
    if propquests.load(g_project.file_propquest) is None:
        propquests = PropQuest()

    #Scope Drop
    propmoverex = PropMoverEx()
    propmoverex.load(g_project.file_propmoverex)
    propmoverex.write_new_config("xml")
    propmoverex.write_new_config("json")

    #Scope event monster
    randomeventmonster = RandomEventMonster()
    randomeventmonster.load(g_project.file_random_event_monster)
    randomeventmonster.write_new_config('json')

