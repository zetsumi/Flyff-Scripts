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

#Common scripts
version_binary = "0.0.0.0"

#Path
path_resource = "./Ressource/"
path_icon_item = path_resource + "Item/"
path_icon = path_resource + "Icon/"
path_model = path_resource +  "Model/"
path_output = "./output/"
path_filter = "./filter/"
path_world = path_resource + "World/"

# file properties
file_propitem = path_resource + "propItem.txt"
file_propmover = path_resource + "propMover.txt"
file_propitem_txt = path_resource + "propItem.txt.txt"
file_propctrl = path_resource + "propCtrl.txt"
file_propkarma = path_resource + "propKarma.txt"
file_propskill = path_resource + "propSkill.txt"
file_proptroupeskill = path_resource + "propTroupeSkill.txt"

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

    mdldyna = MdlDyna()
    mdldyna.load(file_mdldyna)

    cmdlobj = MdlObj()
    mdlobj = cmdlobj.load(file_mdldobj)

    propitem = PropItem()
    propmover = PropMover()
    propctrl = PropCtrl()
    propkarma = PropKarma()
    propskill = PropSkill()
    proptroupeskill = PropTroupeSkill()

    items = OrderedDict(propitem.load(file_propitem))
    movers = OrderedDict(propmover.load(file_propmover))
    ctrls = OrderedDict(propctrl.load(file_propctrl))
    karmas = OrderedDict(propkarma.load(file_propkarma))
    skills = OrderedDict(propskill.load(file_propskill))
    troupeSkills = OrderedDict(proptroupeskill.load(file_proptroupeskill))

    define = Define()
    defineDefine = OrderedDict(define.load(file_define))
    defineItem = OrderedDict(define.load(file_define_item))
    defineObj = OrderedDict(define.load(file_define_obj))
    defineNeuz = OrderedDict(define.load(file_define_neuz))
    defineAttribute = OrderedDict(define.load(file_define_attribute))
    defineItemkind = OrderedDict(define.load(file_define_itemkind))
    defineSkill = OrderedDict(define.load(file_define_skill))
    defineJob = OrderedDict(define.load(file_define_job))
    defineSound = OrderedDict(define.load(file_define_sound))
    defineWorld = OrderedDict(define.load(file_define_world))

    text = Text()
    textMover = OrderedDict(text.load(file_text_propmover))
    textItem = OrderedDict(text.load(file_text_propitem))
    textCtrl = OrderedDict(text.load(file_text_propctrl))
    textKarma = OrderedDict(text.load(file_text_propkarma))
    textSkill = OrderedDict(text.load(file_text_propskill))
    textTroupeSKill = OrderedDict(text.load(file_text_proptroupeskill))

    packet = Packet()
    # packet.load(file_msghdr)

    worlds = Worlds()
    # worlds.load(path_world, defineWorld, defineDefine)

    # packet.filter()
    # propitem.filter(path_icon_items, items, defineItem, textItem, movers)
    # propmover.filter(movers, defineObj, textMover, items)
    # propctrl.filter(ctrls, defineObj, defineItemkind, textCtrl)
    # propskill.filter(skills, defineSkill, defineDefine, defineObj, defineJob, defineAttribute, defineNeuz, defineSound, path_icon, textSkill)
    # proptroupeskill.filter(troupeSkills, path_icon, textTroupeSKill, defineSkill, defineJob, defineDefine, defineObj, defineAttribute)        
    # propkarma.filter(karmas, textKarma)
    # mdldyna.filter(items)
    # cmdlobj.filter(mdlobj, path_model, defineDefine)
    # worlds.filter(mdlobj)

    # define.write(file_define.replace(path_resource, path_output), defineDefine)
    # define.write(file_define_item.replace(path_resource, path_output), defineItem)
    # define.write(file_define_obj.replace(path_resource, path_output), defineObj)
    # define.write(file_define_neuz.replace(path_resource, path_output), defineNeuz)
    # define.write(file_define_attribute.replace(path_resource, path_output), defineAttribute)
    # define.write(file_define_itemkind.replace(path_resource, path_output), defineItemkind)
    # define.write(file_define_skill.replace(path_resource, path_output), defineSkill)
    # define.write(file_define_job.replace(path_resource, path_output), defineJob)
    # define.write(file_define_sound.replace(path_resource, path_output), defineSound)

    # packet.doc()
    # propitem.write(items)
    # propmover.write(movers)
    # cmdlobj.write(mdlobj)

    # propmover.write_new_config(movers)
    # propitem.write_new_config(items)
    # propskill.write_new_config(skills)
    propctrl.write_new_config(ctrls)
