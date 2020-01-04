import os

class Project:
    def __init__(self):
        #Common scripts
        self.version_binary = "0.0.0.0"

        #module activation
        self.module = {
            "mdldyna": {
                "active": False,
                "filter": False
            },
            "mdlobj": {
                "active": False,
                "filter": False
            },
            "item": {
                "active": False,
                "filter": False
            },
            "mover": {
                "active": False,
                "filter": False
            },
            "world": {
                "active": False,
                "filter": False
            },
            "quest": {
                "active": False,
                "filter": False
            },
            "drop": {
                "active": False,
                "filter": False
            },
            "ai": {
                "active": True,
                "filter": False
            },
            "event_monster": {
                "active": False,
                "filter": False
            }
        }

        #Path
        self.path_resource = "./Ressource/"
        self.path_icon_item = self.path_resource + "Item/"
        self.path_icon = self.path_resource + "Icon/"
        self.path_model = self.path_resource +  "Model/"
        self.path_output = "./output/"
        self.path_filter = self.path_output + "filter/"
        self.path_xml = self.path_output + "/xml/"
        self.path_json = self.path_output + "/json/"
        self.path_world = self.path_resource + "World/"

        # file properties
        self.file_propitem = self.path_resource + "propItem.txt"
        self.file_propmover = self.path_resource + "propMover.txt"
        self.file_propmoverex = self.path_resource + "propMoverEx.inc"
        self.file_propctrl = self.path_resource + "propCtrl.txt"
        self.file_propkarma = self.path_resource + "propKarma.txt"
        self.file_propskill = self.path_resource + "propSkill.txt"
        self.file_proptroupeskill = self.path_resource + "propTroupeSkill.txt"
        self.file_propquest = self.path_resource + "propQuest.inc"

        # file text
        self.file_txt_propitem = self.path_resource + "propItem.txt.txt"
        self.file_text_propmover = self.path_resource + "propMover.txt.txt"
        self.file_text_propitem = self.path_resource + "propItem.txt.txt"
        self.file_text_propctrl = self.path_resource + "propCtrl.txt.txt"
        self.file_text_propkarma = self.path_resource + "propKarma.txt.txt"
        self.file_text_propskill = self.path_resource + "propSkill.txt.txt"
        self.file_text_proptroupeskill = self.path_resource + "propTroupeSkill.txt.txt"


        # file inc
        self.file_mdldyna = self.path_resource + "mdlDyna.inc"
        self.file_mdldobj = self.path_resource + "mdlObj.inc"
        self.file_random_event_monster = self.path_resource + "randomeventmonster.inc"

        # file define
        self.file_define = self.path_resource + "define.h"
        self.file_define_item = self.path_resource + "defineItem.h"
        self.file_define_attribute = self.path_resource + "defineAttribute.h"
        self.file_define_obj = self.path_resource + "defineObj.h"
        self.file_define_neuz = self.path_resource + "defineNeuz.h"
        self.file_define_itemkind = self.path_resource + "defineItemkind.h"
        self.file_define_skill = self.path_resource + "defineSkill.h"
        self.file_define_job = self.path_resource + "defineJob.h"
        self.file_define_sound = self.path_resource + "defineSound.h"
        self.file_define_world = self.path_resource + "defineWorld.h"

        #packet
        self.file_msghdr = self.path_resource + "MsgHdr.h"


    def create_directories(self):
        # Create directories
        if not os.path.exists(self.path_output):
            os.makedirs(self.path_output)
        if not os.path.exists(self.path_filter):
            os.makedirs(self.path_filter)
        if not os.path.exists(self.path_xml):
            os.makedirs(self.path_xml)
        if not os.path.exists(self.path_json):
            os.makedirs(self.path_json)

g_project = Project()