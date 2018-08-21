import sys
import subprocess
import os
import shutil
from collections import OrderedDict
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

#Common scripts
version_binary = "0.0.0.0"

#Path
path_resource = "/home/sahaltim19/Documents/gh/Flyff-DEV/Resource/"
path_icon = path_resource + "Item/"
path_output = "./output"
path_filter = "./filter"

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

# file define
file_define = path_resource + "define.h"
file_define_item = path_resource + "defineItem.h"
file_define_attribute = path_resource + "defineAttribute.h"
file_define_obj = path_resource + "defineObj.h"
file_define_neuz = path_resource + "defineNeuz.h"


if __name__ == "__main__":
    gLogger.info("Running Flyff Properties ", version_binary)

    if not os.path.exists(path_output):
        os.makedirs(path_output)
    else:
        shutil.rmtree(path_output, ignore_errors=True)
        os.makedirs(path_output)
    if not os.path.exists(path_filter):
        os.makedirs(path_filter)
    else:
        shutil.rmtree(path_filter, ignore_errors=True)
        os.makedirs(path_filter)

    mdldyna = MdlDyna()
    mdldyna.load(file_mdldyna)

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
    defineItem = OrderedDict(define.load(file_define_item))
    defineObj = OrderedDict(define.load(file_define_obj))
    defineNeuz = OrderedDict(define.load(file_define_neuz))
    defineAttribute = OrderedDict(define.load(file_define_attribute))

    text = Text()
    textMover = OrderedDict(text.load(file_text_propmover))
    textItem = OrderedDict(text.load(file_text_propitem))
    textCtrl = OrderedDict(text.load(file_text_propctrl))
    textKarma = OrderedDict(text.load(file_text_propkarma))
    textSkill = OrderedDict(text.load(file_text_propskill))
    textTroupeSKill = OrderedDict(text.load(file_text_proptroupeskill))

    propitem.filter(path_icon, items, defineItem, textItem, movers)
    propmover.filter(movers, defineObj, textMover, items)
    propctrl.filter(ctrls, defineObj, textCtrl)
    mdldyna.filter(items)

    propitem.write(items)
    propmover.write(movers)
