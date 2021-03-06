import os


class Project:

    def __init__(self):
        #Common scripts
        self.version_binary = "0.0.0.0"

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
        self.path_ressource_filter = self.path_ressource_prop + "filter/"
        self.path_ressource_invalid = self.path_ressource_prop + "invalid/"
        self.path_ressource_letter = self.path_ressource_prop + "letter/"

        # Path output project
        self.path_output = "./output/"
        self.path_filter = self.path_output + "filter/"
        self.path_xml = self.path_output + "xml/"
        self.path_json = self.path_output + "json/"
        self.path_json_text = self.path_output + "json/text/"
        self.path_json_header = self.path_output + "json/header/"
        self.path_json_prop = self.path_output + "json/prop/"
        self.path_documentation = self.path_output + "documentation/"
        self.path_json_world = self.path_json + "world/"
        self.path_xml_world = self.path_xml + "world/"

        # file properties
        self.file_propitem = self.path_ressource_prop + "propItem.txt"
        self.file_propmover = self.path_ressource_prop + "propMover.txt"
        self.file_propctrl = self.path_ressource_prop + "propCtrl.txt"
        self.file_propkarma = self.path_ressource_prop + "propKarma.txt"
        self.file_propskill = self.path_ressource_prop + "propSkill.txt"
        self.file_proptroupeskill = self.path_ressource_prop + "propTroupeSkill.txt"
        self.file_propquest = self.path_ressource_prop + "propQuest.inc"
        self.file_prop_diepenalty = self.path_ressource_prop + "DiePenalty.inc"

        # file filter
        self.file_filter = self.path_ressource_filter + "filter.inc"
        self.file_filter_CHI = self.path_ressource_filter + "filter_CHI.inc"
        self.file_filter_ENG = self.path_ressource_filter + "filter_ENG.inc"
        self.file_filter_FRE = self.path_ressource_filter + "filter_FRE.inc"
        self.file_filter_GER = self.path_ressource_filter + "filter_GER.inc"
        self.file_filter_JAP = self.path_ressource_filter + "filter_JAP.inc"
        self.file_filter_KOR = self.path_ressource_filter + "filter_KOR.inc"
        self.file_filter_SPA = self.path_ressource_filter + "filter_SPA.inc"
        self.file_filter_THA = self.path_ressource_filter + "filter_THA.inc"
        self.file_filter_TWN = self.path_ressource_filter + "filter_TWN.inc"

        # file invalid
        self.file_invalid = self.path_ressource_invalid + "InvalidName.inc"
        self.file_invalid_CHI = self.path_ressource_invalid + "InvalidName_CHI.inc"
        self.file_invalid_ENG = self.path_ressource_invalid + "InvalidName_ENG.inc"
        self.file_invalid_FRE = self.path_ressource_invalid + "InvalidName_FRE.inc"
        self.file_invalid_GER = self.path_ressource_invalid + "InvalidName_GER.inc"
        self.file_invalid_JAP = self.path_ressource_invalid + "InvalidName_JAP.inc"
        self.file_invalid_KOR = self.path_ressource_invalid + "InvalidName_KOR.inc"
        self.file_invalid_SPA = self.path_ressource_invalid + "InvalidName_SPA.inc"
        self.file_invalid_THA = self.path_ressource_invalid + "InvalidName_THA.inc"
        self.file_invalid_TWN = self.path_ressource_invalid + "InvalidName_TWN.inc"

        # file letter
        self.file_letter_ENG = self.path_ressource_letter + "Letter_ENG.inc"
        self.file_letter_FRE = self.path_ressource_letter + "Letter_FRE.inc"
        self.file_letter_GER = self.path_ressource_letter + "Letter_GER.inc"
        self.file_letter_SPA = self.path_ressource_letter + "Letter_SPA.inc"
        self.file_letter_2_FRE = self.path_ressource_letter + "Letter2_FRE.inc"
        self.file_letter_2_GER = self.path_ressource_letter + "Letter2_GER.inc"

        # file text
        self.file_txt_propitem = self.path_ressource_text + "propItem.txt.txt"
        self.file_text_propmover = self.path_ressource_text + "propMover.txt.txt"
        self.file_text_propitem = self.path_ressource_text + "propItem.txt.txt"
        self.file_text_propctrl = self.path_ressource_text + "propCtrl.txt.txt"
        self.file_text_propkarma = self.path_ressource_text + "propKarma.txt.txt"
        self.file_text_propskill = self.path_ressource_text + "propSkill.txt.txt"
        self.file_text_proptroupeskill = self.path_ressource_text + "propTroupeSkill.txt.txt"
        self.file_text_dubear = self.path_ressource_text + "DuBear.txt.txt"
        self.file_text_dudadk = self.path_ressource_text + "DuDaDk.txt.txt"
        self.file_text_dudreadfulcave = self.path_ressource_text + "DudreadfulCave.txt.txt"
        self.file_text_duflmas = self.path_ressource_text + "DuFlMas.txt.txt"
        self.file_text_dukrr = self.path_ressource_text + "DuKrr.txt.txt"
        self.file_text_dumuscle = self.path_ressource_text + "DuMuscle.txt.txt"
        self.file_text_duominous = self.path_ressource_text + "DuOminous.txt.txt"
        self.file_text_duominous_1 = self.path_ressource_text + "DuOminous_1.txt.txt"
        self.file_text_durustia = self.path_ressource_text + "DuRustia.txt.txt"
        self.file_text_durustia_1 = self.path_ressource_text + "DuRustia_1.txt.txt"
        self.file_text_dusatemple = self.path_ressource_text + "DuSaTemple.txt.txt"
        self.file_text_dusatempleboss = self.path_ressource_text + "DuSaTempleBoss.txt.txt"
        self.file_text_wdarena = self.path_ressource_text + "WdArena.txt.txt"
        self.file_text_wdguildhouselarge = self.path_ressource_text + "Wdguildhouselarge.txt.txt"
        self.file_text_wdguildhousemiddle = self.path_ressource_text + "Wdguildhousemiddle.txt.txt"
        self.file_text_wdguildhousesmall = self.path_ressource_text + "WdGuildhousesmall.txt.txt"
        self.file_text_wdguildwar = self.path_ressource_text + "WdGuildWar.txt.txt"
        self.file_text_wdguildwar1to1 = self.path_ressource_text + "WdGuildWar1To1.txt.txt"
        self.file_text_wdheaven01 = self.path_ressource_text + "WdHeaven01.txt.txt"
        self.file_text_wdheaven02 = self.path_ressource_text + "WdHeaven02.txt.txt"
        self.file_text_wdheaven03 = self.path_ressource_text + "WdHeaven03.txt.txt"
        self.file_text_wdheaven04 = self.path_ressource_text + "WdHeaven04.txt.txt"
        self.file_text_wdheaven05 = self.path_ressource_text + "WdHeaven05.txt.txt"
        self.file_text_wdheaven06 = self.path_ressource_text + "WdHeaven06.txt.txt"
        self.file_text_wdheaven06_1 = self.path_ressource_text + "WdHeaven06_1.txt.txt"
        self.file_text_wdkebaras = self.path_ressource_text + "WdKebaras.txt.txt"
        self.file_text_wdmadrigal = self.path_ressource_text + "wdMadrigal.txt.txt"
        self.file_text_wdminiroom = self.path_ressource_text + "WdMiniroom.txt.txt"
        self.file_text_wdquiz = self.path_ressource_text + "WdQuiz.txt.txt"
        self.file_text_wdvolcane = self.path_ressource_text + "WdVolcane.txt.txt"
        self.file_text_wdvolcanered = self.path_ressource_text + "WdVolcaneRed.txt.txt"
        self.file_text_wdvolcaneyellow = self.path_ressource_text + "WdVolcaneYellow.txt.txt"
        self.file_text_faq = self.path_ressource_text + "faq.txt.txt"
        self.file_text_gameguard = self.path_ressource_text + "GameGuard.txt.txt"
        self.file_text_guide = self.path_ressource_text + "Guide.txt.txt"
        self.file_text_help = self.path_ressource_text + "help.txt.txt"
        self.file_text_instanthelp = self.path_ressource_text + "InstantHelp.txt.txt"
        self.file_text_minigame_alphabet = self.path_ressource_text + "MiniGame_Alphabet.txt.txt"
        self.file_text_patchclient = self.path_ressource_text + "PatchClient.txt.txt"
        self.file_text_tip = self.path_ressource_text + "tip.txt.txt"
        self.file_text_treehelp = self.path_ressource_text + "treeHelp.txt.txt"
        self.file_text_tutorial = self.path_ressource_text + "tutorial.txt.txt"
        self.file_text_character_etc = self.path_ressource_text + "character-etc.txt.txt"
        self.file_text_character_school = self.path_ressource_text + "character-school.txt.txt"
        self.file_text_character = self.path_ressource_text + "character.txt.txt"
        self.file_text_etc = self.path_ressource_text + "etc.txt.txt"
        self.file_text_honorlist = self.path_ressource_text + "honorList.txt.txt"
        self.file_text_lordskill = self.path_ressource_text + "lordskill.txt.txt"
        self.file_text_patroldestination = self.path_ressource_text + "PatrolDestination.txt.txt"
        self.file_text_propitemetc = self.path_ressource_text + "propItemEtc.txt.txt"
        self.file_text_propmotion = self.path_ressource_text + "propMotion.txt.txt"
        self.file_text_propquest_dungeonandpk = self.path_ressource_text + "propQuest-DungeonandPK.txt.txt"
        self.file_text_propquest_requestbox = self.path_ressource_text + "propQuest-RequestBox.txt.txt"
        self.file_text_propquest_requestbox2 = self.path_ressource_text + "propQuest-RequestBox2.txt.txt"
        self.file_text_propquest_scenario = self.path_ressource_text + "propQuest-Scenario.txt.txt"
        self.file_text_propquest = self.path_ressource_text + "propQuest.txt.txt"
        self.file_text_questdestination = self.path_ressource_text + "QuestDestination.txt.txt"
        self.file_text_resdata = self.path_ressource_text + "resData.txt.txt"
        self.file_text_textclient = self.path_ressource_text + "textClient.txt.txt"
        self.file_text_textemotion = self.path_ressource_text + "textEmotion.txt.txt"
        self.file_text_world = self.path_ressource_text + "world.txt.txt"

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
        self.file_define_continent_def = self.path_ressource_define + "ContinentDef.h"
        self.file_define_event = self.path_ressource_define + "defineEvent.h"
        self.file_define_lord_skill = self.path_ressource_define + "definelordskill.h"
        self.file_define_quest = self.path_ressource_define + "definequest.h"
        self.file_define_honor = self.path_ressource_define + "defineHonor.h"
        self.file_define_lang = self.path_ressource_define + "lang.h"
        self.file_define_msg_hdr = self.path_ressource_define + "MsgHdr.h"
        self.file_define_resdata = self.path_ressource_define + "ResData.h"
        self.file_define_wnd_style = self.path_ressource_define + "WndStyle.h"

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
        if not os.path.exists(self.path_json_text):
            os.makedirs(self.path_json_text)
        if not os.path.exists(self.path_json_header):
            os.makedirs(self.path_json_header)
        if not os.path.exists(self.path_json_prop):
            os.makedirs(self.path_json_prop)
        if not os.path.exists(self.path_documentation):
            os.makedirs(self.path_documentation)
        if not os.path.exists(self.path_json_world):
            os.makedirs(self.path_json_world)
        if not os.path.exists(self.path_xml_world):
            os.makedirs(self.path_xml_world)



g_project = Project()
