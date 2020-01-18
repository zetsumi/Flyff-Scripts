# system
import sys
import subprocess
import os
import shutil
from collections import OrderedDict

# projet
from utils import (gLogger, Define, Text)
from module import Module
from project import g_project
from network import Packet
from prop import (PropMover, PropItem, PropCtrl, PropKarma,
    PropSkill, PropTroupeSkill, PropQuest,
    PropMoverEx, PropMoverExAI, RandomEventMonster
)
from model import (MdlDyna, MdlObj)
from world import Worlds


define = Define()
module = Module()
mdl_dyna = MdlDyna()
mdl_obj = MdlObj()
prop_item = PropItem()


def module_header():
    module.defines["define"].load(g_project.file_define)
    module.defines["attribute"].load(g_project.file_define_attribute)
    module.defines["item"].load(g_project.file_define_item)
    module.defines["item_kind"].load(g_project.file_define_itemkind)
    module.defines["job"].load(g_project.file_define_job)
    module.defines["neuz"].load(g_project.file_define_neuz)
    module.defines["obj"].load(g_project.file_define_obj)
    module.defines["skill"].load(g_project.file_define_skill)
    module.defines["sound"].load(g_project.file_define_sound)
    module.defines["world"].load(g_project.file_define_world)
    module.defines["continent"].load(g_project.file_define_world)
    module.defines["event"].load(g_project.file_define_world)
    module.defines["lord_skill"].load(g_project.file_define_world)
    module.defines["quest"].load(g_project.file_define_world)
    module.defines["honor"].load(g_project.file_define_world)
    module.defines["lang"].load(g_project.file_define_world)
    module.defines["msghdr"].load(g_project.file_define_world)
    module.defines["resdata"].load(g_project.file_define_world)
    module.defines["wnd_style"].load(g_project.file_define_world)

    for k in module.defines:
        module.defines[k].write_json(k)

def module_text():
    module.texts["ctrl"].load(g_project.file_text_propctrl)
    module.texts["item"].load(g_project.file_text_propitem)
    module.texts["karma"].load(g_project.file_text_propkarma)
    module.texts["mover"].load(g_project.file_text_propmover)
    module.texts["skill"].load(g_project.file_text_propskill)
    module.texts["troupeskill"].load(g_project.file_text_proptroupeskill)
    module.texts["dubear"].load(g_project.file_text_dubear)
    module.texts["dudadk"].load(g_project.file_text_dudadk)
    module.texts["dudreadfulcave"].load(g_project.file_text_dudreadfulcave)
    module.texts["duflmas"].load(g_project.file_text_duflmas)
    module.texts["dukrr"].load(g_project.file_text_dukrr)
    module.texts["dumuscle"].load(g_project.file_text_dumuscle)
    module.texts["duominous"].load(g_project.file_text_duominous)
    module.texts["duominous_1"].load(g_project.file_text_duominous_1)
    module.texts["durustia"].load(g_project.file_text_durustia)
    module.texts["durustia_1"].load(g_project.file_text_durustia_1)
    module.texts["dusatemple"].load(g_project.file_text_dusatemple)
    module.texts["dusatempleboss"].load(g_project.file_text_dusatempleboss)
    module.texts["wdarena"].load(g_project.file_text_wdarena)
    module.texts["wdguildhouselarge"].load(g_project.file_text_wdguildhouselarge)
    module.texts["wdguildhousemiddle"].load(g_project.file_text_wdguildhousemiddle)
    module.texts["wdguildhousesmall"].load(g_project.file_text_wdguildhousesmall)
    module.texts["wdguildwar"].load(g_project.file_text_wdguildwar)
    module.texts["wdguildwar1to1"].load(g_project.file_text_wdguildwar1to1)
    module.texts["wdheaven01"].load(g_project.file_text_wdheaven01)
    module.texts["wdheaven02"].load(g_project.file_text_wdheaven02)
    module.texts["wdheaven03"].load(g_project.file_text_wdheaven03)
    module.texts["wdheaven04"].load(g_project.file_text_wdheaven04)
    module.texts["wdheaven05"].load(g_project.file_text_wdheaven05)
    module.texts["wdheaven06"].load(g_project.file_text_wdheaven06)
    module.texts["wdheaven06_1"].load(g_project.file_text_wdheaven06_1)
    module.texts["wdkebaras"].load(g_project.file_text_wdkebaras)
    module.texts["wdmadrigal"].load(g_project.file_text_wdmadrigal)
    module.texts["wdminiroom"].load(g_project.file_text_wdminiroom)
    module.texts["wdquiz"].load(g_project.file_text_wdquiz)
    module.texts["wdvolcane"].load(g_project.file_text_wdvolcane)
    module.texts["wdvolcanered"].load(g_project.file_text_wdvolcanered)
    module.texts["wdvolcaneyellow"].load(g_project.file_text_wdvolcaneyellow)
    module.texts["faq"].load(g_project.file_text_faq)
    module.texts["gameguard"].load(g_project.file_text_gameguard)
    module.texts["guide"].load(g_project.file_text_guide)
    module.texts["help"].load(g_project.file_text_help)
    module.texts["instanthelp"].load(g_project.file_text_instanthelp)
    module.texts["minigame_alphabet"].load(g_project.file_text_minigame_alphabet)
    module.texts["patchclient"].load(g_project.file_text_patchclient)
    module.texts["tip"].load(g_project.file_text_tip)
    module.texts["treehelp"].load(g_project.file_text_treehelp)
    module.texts["tutorial"].load(g_project.file_text_tutorial)
    module.texts["character_etc"].load(g_project.file_text_character_etc)
    module.texts["character_school"].load(g_project.file_text_character_school)
    module.texts["character"].load(g_project.file_text_character)
    module.texts["etc"].load(g_project.file_text_etc)
    module.texts["honorlist"].load(g_project.file_text_honorlist)
    module.texts["lordskill"].load(g_project.file_text_lordskill)
    module.texts["patroldestination"].load(g_project.file_text_patroldestination)
    module.texts["propitemetc"].load(g_project.file_text_propitemetc)
    module.texts["propmotion"].load(g_project.file_text_propmotion)
    module.texts["propquest_dungeonandpk"].load(g_project.file_text_propquest_dungeonandpk)
    module.texts["propquest_requestbox"].load(g_project.file_text_propquest_requestbox)
    module.texts["propquest_requestbox2"].load(g_project.file_text_propquest_requestbox2)
    module.texts["propquest_scenario"].load(g_project.file_text_propquest_scenario)
    module.texts["propquest"].load(g_project.file_text_propquest)
    module.texts["questdestination"].load(g_project.file_text_questdestination)
    module.texts["resdata"].load(g_project.file_text_resdata)
    module.texts["textclient"].load(g_project.file_text_textclient)
    module.texts["textemotion"].load(g_project.file_text_textemotion)
    module.texts["dubear"].load(g_project.file_text_dubear)
    module.texts["dudadk"].load(g_project.file_text_dudadk)
    module.texts["dudreadfulcave"].load(g_project.file_text_dudreadfulcave)
    module.texts["duflmas"].load(g_project.file_text_duflmas)
    module.texts["dukrr"].load(g_project.file_text_dukrr)
    module.texts["dumuscle"].load(g_project.file_text_dumuscle)
    module.texts["duominous"].load(g_project.file_text_duominous)
    module.texts["duominous_1"].load(g_project.file_text_duominous_1)
    module.texts["durustia"].load(g_project.file_text_durustia)
    module.texts["durustia_1"].load(g_project.file_text_durustia_1)
    module.texts["dusatempleboss"].load(g_project.file_text_dusatempleboss)
    module.texts["wdarena"].load(g_project.file_text_wdarena)
    module.texts["wdguildhouselarge"].load(g_project.file_text_wdguildhouselarge)
    module.texts["wdguildhousemiddle"].load(g_project.file_text_wdguildhousemiddle)
    module.texts["wdguildhousesmall"].load(g_project.file_text_wdguildhousesmall)
    module.texts["wdguildwar"].load(g_project.file_text_wdguildwar)
    module.texts["wdheaven01"].load(g_project.file_text_wdheaven01)
    module.texts["wdheaven02"].load(g_project.file_text_wdheaven02)
    module.texts["wdheaven03"].load(g_project.file_text_wdheaven03)
    module.texts["wdheaven04"].load(g_project.file_text_wdheaven04)
    module.texts["wdheaven05"].load(g_project.file_text_wdheaven05)
    module.texts["wdheaven06"].load(g_project.file_text_wdheaven06)
    module.texts["wdheaven06_1"].load(g_project.file_text_wdheaven06_1)
    module.texts["wdkebaras"].load(g_project.file_text_wdkebaras)
    module.texts["wdmadrigal"].load(g_project.file_text_wdmadrigal)
    module.texts["wdminiroom"].load(g_project.file_text_wdminiroom)
    module.texts["wdquiz"].load(g_project.file_text_wdquiz)
    module.texts["wdvolcane"].load(g_project.file_text_wdvolcane)
    module.texts["wdvolcanered"].load(g_project.file_text_wdvolcanered)
    module.texts["wdvolcaneyellow"].load(g_project.file_text_wdvolcaneyellow)
    module.texts["world"].load(g_project.file_text_world)

    for k in module.texts:
        module.texts[k].write_json(k)



def module_mdldyna():
    mdl_dyna.load(g_project.file_mdldyna)


def module_mdlobj():
    mdl_obj.load(g_project.file_mdldobj, g_project.file_define)
    if module.modules["mover"]["filter"] is True:
        mdl_obj.filter(g_project.pathmodel)
    mdl_obj.write_new_config()


def module_karma():
    prop_karma = PropKarma()
    prop_karma.load(g_project.file_propkarma)
    if module.modules["karma"]["filter"] is True:
        prop_karma.filter()
    prop_karma.write_new_config('json')
    prop_karma.write_new_config('xml')


def module_ctrl():
    prop_ctrl = PropCtrl()
    prop_ctrl.load(g_project.file_propctrl)
    if module.modules["ctrl"]["filter"] is True:
        prop_ctrl.filter()
    prop_ctrl.write_new_config('json')
    prop_ctrl.write_new_config('xml')


def module_item():
    prop_item.load(g_project.file_propitem)
    if module.modules["mover"]["filter"] is True:
        prop_item.filter(g_project.pathicon_item)
        prop_item.replace()
    prop_item.write_new_config('xml')
    prop_item.write_new_config('json')


def module_skill():
    prop_skill = PropSkill()
    prop_skill.load(g_project.file_propskill)
    prop_skill.write_new_config('xml')
    prop_skill.write_new_config('json')

    prop_troupe_skill = PropTroupeSkill()
    prop_troupe_skill.load(g_project.file_proptroupeskill)
    prop_troupe_skill.write_new_config('xml')
    prop_troupe_skill.write_new_config('json')


def module_mover():
    prop_mover = PropMover()
    if prop_mover.load(g_project.file_propmover) is False:
        gLogger.error("Error detected during the load propmover")
    if module.modules["item"]["active"] is True:
        prop_mover.items = prop_item.items
    if module.modules["mover"]["filter"] is True:
        prop_mover.filter()
    prop_mover.write_new_config('json')
    prop_mover.write_new_config('xml')


def module_world():
    worlds = Worlds()
    worlds.set_listing_world(g_project.file_world)
    worlds.load(g_project.path_ressource_world, OrderedDict(define.load(g_project.file_define_world)), OrderedDict(define.load(g_project.file_define)))
    worlds.mdlobj = mdl_obj


def module_quest():
    prop_quests = PropQuest()
    prop_quests.load(g_project.file_propquest)
    prop_quests.write_new_config('xml')
    prop_quests.write_new_config('json')


def module_drop():
    prop_mover_ex = PropMoverEx()
    prop_mover_ex.load(g_project.file_propmoverex)
    prop_mover_ex.write_new_config("xml")
    prop_mover_ex.write_new_config("json")


def module_ai():
    prop_ai = PropMoverExAI()
    prop_ai.load(g_project.file_propmoverex)
    prop_ai.write_new_config("xml")
    prop_ai.write_new_config("json")


def module_event_monster():
    random_event_monster = RandomEventMonster()
    random_event_monster.load(g_project.file_random_event_monster)
    random_event_monster.write_new_config('json')


if __name__ == "__main__":
    gLogger.set_section("core")
    gLogger.info("Running Flyff Properties ", g_project.version_binary)


    g_project.create_directories()

    if module.modules["header"]["active"] is True:
        module_header()
    if module.modules["text"]["active"] is True:
        module_text()
    # if module.modules["mdldyna"]["active"] is True:
    #     module_mdldyna()
    # if module.modules["mdlobj"]["active"] is True:
    #     module_mdlobj()
    # if module.modules["karma"]["active"] is True:
    #     module_karma()
    # if module.modules["ctrl"]["active"] is True:
    #     module_ctrl()
    # if module.modules["item"]["active"] is True:
    #     module_item()
    # if module.modules["skill"]["active"] is True:
    #     module_skill()
    # if module.modules["mover"]["active"] is True:
    #     module_mover()
    # if module.modules["world"]["active"] is True:
    #     module_world()
    # if module.modules["quest"]["active"] is True:
    #     module_quest()
    # if module.modules["drop"]["active"] is True:
    #     module_drop()
    # if module.modules["ai"]["active"] is True:
    #     module_ai()
    # if module.modules["event_monster"]["active"] is True:
    #     module_event_monster()

    module.write_project_file('json')
    module.write_project_file('xml')


    gLogger.info("process finished")
    gLogger.reset_section()
