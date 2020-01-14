import os

class Project:
    def __init__(self):
        #Common scripts
        self.version_binary = "0.0.0.0"

        #module activation
        self.module = {
            "header": {
                "active": True,
                "filter": False
            },
            "text": {
                "active": True,
                "filter": False
            },
            "mdldyna": {
                "active": True,
                "filter": False
            },
            "mdlobj": {
                "active": True,
                "filter": False
            },
            "item": {
                "active": True,
                "filter": False
            },
            "mover": {
                "active": True,
                "filter": False
            },
            "world": {
                "active": True,
                "filter": False
            },
            "quest": {
                "active": True,
                "filter": False
            },
            "drop": {
                "active": True,
                "filter": False
            },
            "ai": {
                "active": True,
                "filter": False
            },
            "event_monster": {
                "active": True,
                "filter": False
            },
            "skill": {
                "active": True,
                "filter": False
            },
            "ctrl": {
                "active": True,
                "filter": False
            }
        }

        # Path Ressource
        self.path_ressource = "./Ressource/"
        self.path_icon_item = self.path_ressource + "Item/"
        self.path_icon = self.path_ressource + "Icon/"
        self.path_model = self.path_ressource +  "Model/"
        self.path_ressource_world = self.path_ressource + "World/"
        self.path_ressource_define = self.path_ressource + "defines/"
        self.path_ressource_network = self.path_ressource + "network/"
        self.path_ressource_model = self.path_ressource + "model/"
        self.path_ressource_text = self.path_ressource + "texts/"
        self.path_ressource_prop = self.path_ressource + "props/"

        # Path output project
        self.path_output = "./output/"
        self.path_filter = self.path_output + "filter/"
        self.path_xml = self.path_output + "/xml/"
        self.path_json = self.path_output + "/json/"
        self.path_documentation = self.path_output + "documentation/"

        # file properties
        self.file_propitem = self.path_ressource_prop + "propItem.txt"
        self.file_propmover = self.path_ressource_prop + "propMover.txt"
        self.file_propctrl = self.path_ressource_prop + "propCtrl.txt"
        self.file_propkarma = self.path_ressource_prop + "propKarma.txt"
        self.file_propskill = self.path_ressource_prop + "propSkill.txt"
        self.file_proptroupeskill = self.path_ressource_prop + "propTroupeSkill.txt"
        self.file_propquest = self.path_ressource_prop + "propQuest.inc"

        # file text
        self.file_txt_propitem = self.path_ressource_text + "propItem.txt.txt"
        self.file_text_propmover = self.path_ressource_text + "propMover.txt.txt"
        self.file_text_propitem = self.path_ressource_text + "propItem.txt.txt"
        self.file_text_propctrl = self.path_ressource_text + "propCtrl.txt.txt"
        self.file_text_propkarma = self.path_ressource_text + "propKarma.txt.txt"
        self.file_text_propskill = self.path_ressource_text + "propSkill.txt.txt"
        self.file_text_proptroupeskill = self.path_ressource_text + "propTroupeSkill.txt.txt"


        # file inc
        self.file_mdldyna = self.path_ressource_model + "mdlDyna.inc"
        self.file_mdldobj = self.path_ressource_model + "mdlObj.inc"
        self.file_random_event_monster = self.path_ressource_prop + "randomeventmonster.inc"
        self.file_propmoverex = self.path_ressource_prop + "propMoverEx.inc"
        self.file_world = self.path_ressource_world + "world.inc"

        # file define
        self.file_define = self.path_ressource_define + "define.h"
        self.file_define_item = self.path_ressource_define + "defineItem.h"
        self.file_define_attribute = self.path_ressource_define + "defineAttribute.h"
        self.file_define_obj = self.path_ressource_define + "defineObj.h"
        self.file_define_neuz = self.path_ressource_define + "defineNeuz.h"
        self.file_define_itemkind = self.path_ressource_define + "defineItemkind.h"
        self.file_define_skill = self.path_ressource_define + "defineSkill.h"
        self.file_define_job = self.path_ressource_define + "defineJob.h"
        self.file_define_sound = self.path_ressource_define + "defineSound.h"
        self.file_define_world = self.path_ressource_define + "defineWorld.h"

        # packet
        self.file_msghdr = self.path_ressource_define + "MsgHdr.h"


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
        if not os.path.exists(self.path_documentation):
            os.makedirs(self.path_documentation)

g_project = Project()
