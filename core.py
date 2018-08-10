import sys
import subprocess
import os

from propmover import PropMover
from propitem import PropItem
from define import Define

#Common scripts
version_binary = "0.0.0.0"

#Path
path_resource = "/home/sahaltim19/Documents/gh/Flyff-DEV/Resource/"
path_icon = path_resource + "Item/"

# file properties
file_propitem = path_resource + "propItem.txt"
file_propmover = path_resource + "propMover.txt"
file_propitem_txt = path_resource + "propItem.txt.txt"

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

    propitem = PropItem()
    propmover = PropMover()

    items = dict(propitem.load(file_propitem))
    movers = dict(propmover.load(file_propmover))

    define = Define()
    defineItem = dict(define.load(file_define_item))
    defineObj = dict(define.load(file_define_obj))
    defineNeuz = dict(define.load(file_define_neuz))
    defineAttribute = dict(define.load(file_define_attribute))

    propitem.filter(items, defineItem)