import sys
import subprocess
import os
import shutil
from collections import OrderedDict
from packet import Packet
from logger import gLogger
from propmover import PropMover
from propitem import PropItem
from propctrl import PropCtrl
from propkarma import PropKarma
from propskill import PropSkill
from proptroupeskill import PropTroupeSkill
from define import Define
from text import Text
from mdldyna import MdlDyna
from mdlobj import MdlObj
from world import Worlds
from propquest import PropQuest

#Common scripts
version_binary = "0.0.0.0"

#Path
path_resource = "./Ressource/"
path_icon_item = path_resource + "Item/"
path_icon = path_resource + "Icon/"
path_model = path_resource +  "Model/"
path_output = "./output/"
path_filter = "./filter/"
path_xml = "./xml/"
path_world = path_resource + "World/"

# file properties
file_propitem = path_resource + "propItem.txt"
file_propmover = path_resource + "propMover.txt"
file_propitem_txt = path_resource + "propItem.txt.txt"
file_propctrl = path_resource + "propCtrl.txt"
file_propkarma = path_resource + "propKarma.txt"
file_propskill = path_resource + "propSkill.txt"
file_proptroupeskill = path_resource + "propTroupeSkill.txt"
file_propquest = path_resource + "propQuest.inc"

# file text
file_text_propmover = path_resource + "propMover.txt.txt"
file_text_propitem = path_resource + "propItem.txt.txt"
file_text_propctrl = path_resource + "propCtrl.txt.txt"
file_text_propkarma = path_resource + "propKarma.txt.txt"
file_text_propskill = path_resource + "propSkill.txt.txt"
file_text_proptroupeskill = path_resource + "propTroupeSkill.txt.txt"


# file inc
file_mdldyna = path_resource + "mdlDyna.inc"
file_mdldobj = path_resource + "mdlObj.inc"

# file define
file_define = path_resource + "define.h"
file_define_item = path_resource + "defineItem.h"
file_define_attribute = path_resource + "defineAttribute.h"
file_define_obj = path_resource + "defineObj.h"
file_define_neuz = path_resource + "defineNeuz.h"
file_define_itemkind = path_resource + "defineItemkind.h"
file_define_skill = path_resource + "defineSkill.h"
file_define_job = path_resource + "defineJob.h"
file_define_sound = path_resource + "defineSound.h"
file_define_world = path_resource + "defineWorld.h"

#packet
file_msghdr = path_resource + "MsgHdr.h"

if __name__ == "__main__":
    gLogger.info("Running Flyff Properties ", version_binary)

    if not os.path.exists(path_output):
        os.makedirs(path_output)
    if not os.path.exists(path_filter):
        os.makedirs(path_filter)
    if not os.path.exists(path_xml):
        os.makedirs(path_xml)

    mdldyna = MdlDyna()
    mdldyna.load(file_mdldyna)

    cmdlobj = MdlObj()
    mdlobj = cmdlobj.load(file_mdldobj)

    propitem = PropItem()
    propitem.load(file_propitem, file_propitem_txt, file_define_item)
    propitem.filter(path_icon_item)
    propitem.replace()
    propitem.write_new_config()

    # worlds = Worlds()
    # worlds.load(path_world, defineWorld, defineDefine)

    # propquests = PropQuest()
    # if propquests.load(file_propquest) is None:
    #     propquests = PropQuest()


    # propitem.write_new_config(items)
