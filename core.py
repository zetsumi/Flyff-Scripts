import sys
import subprocess
import os

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
    print("Running Flyff Properties ", version_binary)

    mdldyna = MdlDyna()
    mdldyna.load(file_mdldyna)

    propitem = PropItem()
    propmover = PropMover()
    propctrl = PropCtrl()
    propkarma = PropKarma()
    propskill = PropSkill()
    proptroupeskill = PropTroupeSkill()

    items = dict(propitem.load(file_propitem))
    movers = dict(propmover.load(file_propmover))
    ctrls = dict(propctrl.load(file_propctrl))
    karmas = dict(propkarma.load(file_propkarma))
    skills = dict(propskill.load(file_propskill))
    troupeSkills = dict(proptroupeskill.load(file_proptroupeskill))

    define = Define()
    defineItem = dict(define.load(file_define_item))
    defineObj = dict(define.load(file_define_obj))
    defineNeuz = dict(define.load(file_define_neuz))
    defineAttribute = dict(define.load(file_define_attribute))

    text = Text()
    textMover = dict(text.load(file_text_propmover))
    textItem = dict(text.load(file_text_propitem))
    textCtrl = dict(text.load(file_text_propctrl))
    textKarma = dict(text.load(file_text_propkarma))
    textSkill = dict(text.load(file_text_propskill))
    textTroupeSKill = dict(text.load(file_text_proptroupeskill))

    # item_undeclared, item_unsued, item_icon_unfound = propitem.filter(path_icon, items, defineItem, movers)
    # mover_undeclared, mover_unsued = propmover.filter(movers, defineObj, items)
    # mdldyna.filter(items)

    # for it in movers:
    #     mover = movers[it]
    #     mover.replace(textMover)
    # for it in items:
    #     item = items[it]
    #     item.replace(textItem)

    # propitem.write(items)
    # propmover.write(movers)
