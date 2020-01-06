from lxml import etree as ET
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project

QAction = {
    "0": "QSAY_BEGIN1",
    "1": "QSAY_BEGIN2",
    "2": "QSAY_BEGIN3",
    "3": "QSAY_BEGIN4",
    "4": "QSAY_BEGIN5",
    "5": "QSAY_BEGIN_YES",
    "6": "QSAY_BEGIN_NO",
    "7": "QSAY_END_COMPLETE1",
    "8": "QSAY_END_COMPLETE2",
    "9": "QSAY_END_COMPLETE3",
    "10": "QSAY_END_FAILURE1",
    "11": "QSAY_END_FAILURE2",
    "12": "QSAY_END_FAILURE3",
}

ParamCondition = {
    "SetCharacter": ["szCharacterName", "dwLang"],
    "SetNPCName": ["szNPCName"],
    "SetBeginCondSex": ["nBeginCondSex"],
    "SetBeginCondSkillLvl": ["nBeginCondSkillIdx", "nBeginCondSkillLvl"],
    "SetBeginCondPKValue": ["nBeginCondPKValue"],
    "SetBeginCondNotItem": ["nSex", "nType", "nJobOrItem", "nItemIdx", "nItemNum"],
    "SetBeginCondLevel": ["nBeginCondLevelMin", "nBeginCondLevelMax"],
    "SetBeginCondParty": ["nBeginCondParty", "nBeginCondPartyNumComp", "nBeginCondPartyNum", "nBeginCondPartyLeader"],
    "SetBeginCondGuild": ["nBeginCondGuild", "nBeginCondGuildNumComp", "nBeginCondGuildNum", "nBeginCondGuildLeader"],
    "SetBeginCondItem": ["nSex", "nType", "nJobOrItem", "nItemIdx", "nItemNum"],
    "SetBeginCondDisguise": ["nBeginCondDisguiseMoverIndex"],
    "SetBeginSetDisguise": ["nBeginSetDisguiseMoverIndex"],
    "SetBeginSetAddGold": ["nBeginSetAddGold"],
    "SetBeginSetAddItem": ["nIdx", "nBeginSetAddItemIdx", "nBeginSetAddItemNum"],
    "SetBeginCondPetExp": ["nBeginCondPetExp"],
    "SetBeginCondPetLevel": ["nBeginCondPetLevel"],
    "SetBeginCondTutorialState": ["nBeginCondTutorialState"],
    "SetBeginCondTSP": ["nBeginCondTSP"],
    "SetEndCondParty": ["nEndCondParty", "nEndCondPartyNumComp", "nEndCondPartyNum", "nEndCondPartyLeader"],
    "SetEndCondGuild": ["nEndCondGuild", "nEndCondGuildNumComp", "nEndCondGuildNum", "nEndCondGuildLeader"],
    "SetEndCondState": ["nEndCondState"],
    "SetEndCondSkillLvl": ["nEndCondSkillIdx", "nEndCondSkillLvl"],
    "SetEndCondLevel": ["nEndCondLevelMin", "nEndCondLevelMax"],
    "SetEndCondExpPercent": ["nEndCondExpPercentMin", "nEndCondExpPercentMax"],
    "SetEndCondGold": ["nEndCondGold"],
    "SetEndCondOneItem": ["nSex", "nType", "nJobOrItem", "nItemIdx", "nItemNum"],
    "SetEndCondLimitTime": ["nEndCondLimitTime"],
    "SetEndCondItem": ["nSex", "nType", "nJobOrItem", "nItemIdx", "nItemNum", "fGoalPositionX", "fGoalPositionZ", "dwGoalTextID"],
    "SetEndCondKillNPC": ["nIdx", "nEndCondKillNPCIdx", "nEndCondKillNPCNum", "fGoalPositionX", "fGoalPositionZ", "dwGoalTextID"],
    "SetEndCondPatrolZone": ["dwEndCondPatrolWorld", "left", "top", "right", "bottom", "dwPatrolDestinationID", "fGoalPositionX", "fGoalPositionZ", "dwGoalTextID"],
    "SetEndCondCharacter": ["szEndCondCharacter", "fGoalPositionX", "fGoalPositionZ", "dwGoalTextID"],
    "SetEndCondDialog": ["szEndCondDlgCharKey", "szEndCondDlgAddKey", "fGoalPositionX", "fGoalPositionZ", "dwGoalTextID"],
    "SetEndCondPetLevel": ["nEndCondPetLevel"],
    "SetEndCondPetExp": ["nEndCondPetExp"],
    "SetEndCondDisguise": ["nEndCondDisguiseMoverIndex"],
    "SetParam": ["nIdx", "nParam"],
    "SetEndCondTSP": ["nEndCondTSP"],
    "SetDlgRewardItem": ["nIdx", "nDlgRewardItemIdx", "nDlgRewardItemNum"],
    "SetEndRewardItem": ["nSex", "nType", "nJobOrItem", "nItemIdx", "nItemNum", "byFlag"],
    "SetEndRewardItemWithAbilityOption": ["nSex", "nType", "nJobOrItem", "nItemIdx", "nItemNum", "m_nAbilityOption", "byFlag"],
    "SetEndRewardGold": ["nEndRewardGoldMin", "nEndRewardGoldMax"],
    "SetEndRewardPetLevelup": ["bEndRewardPetLevelup"],
    "SetEndRewardExp": ["nEndRewardExpMin", "nEndRewardExpMax"],
    "SetEndRewardSkillPoint": ["nEndRewardSkillPoint"],
    "SetEndRewardPKValue": ["nEndRewardPKValueMin", "nEndRewardPKValueMax"],
    "SetEndRewardTeleport": ["nEndRewardTeleport", "x", "y", "z"],
    "SetEndRewardHide": ["bEndRewardHide"],
    "SetEndRemoveItem": ["nIdx", "nEndRemoveItemIdx", "nEndRemoveItemNum"],
    "SetEndRemoveGold": ["nEndRemoveGold"],
    "SetRepeat": ["bRepeat"],
    "QuestItem": ["dwMoverIdx", "dwIndex", "dwProbability", "dwNumber"],
    "SetEndRewardTSP": ["nEndRewardTSP"],
    "SetEndRemoveTSP": ["nEndRemoveTSP"],
    "SetHeadQuest": ["nHeadQuest"],
    "SetQuestType": ["nQuestType"],
    "SetRemove": ["bNoRemove"]
}


class Quest:

    def __init__(self):
        self.Id = 0
        self.Title = ""
        self.Setting = dict()
        self.Dialog = dict()
        self.State = dict()


class PropQuest:

    def __init__(self):
        self.Quests = dict()

    def __load_set_title__(self, q, fd):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "(":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None

        q.Title = None
        while True:
            line = fd.readline().replace("\n", "").replace("\t", "")
            if len(line) <= 0 or line == "":
                continue
            if ")" not in line:
                q.Title = line
            if ")" in line:
                break

        if q.Title is None:
            return False
        return True

    def __load_setting__(self, q, fd):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "{":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None

        while True:
            line = fd.readline().replace("\n", "").replace("\t", "").replace(" ", "").replace("\"", "")
            if len(line) <= 0:
                continue
            elif "}" in line:
                break
            else:
                line = line.replace("(", ",").replace(")", "").replace(";", "")
                arr = line.split(",")
                if len(arr) <= 1:
                    gLogger.error("syntaxe line error:", q.Id, line)
                    return None
                fct = arr[0]
                q.Setting[fct] = list()
                i = 1
                while i < len(arr):
                    q.Setting[fct].append(arr[i])
                    i = i + 1


        return True

    def __load_dialog__(self, q, fd):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "(":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None
        action = None
        text = None
        while True:
            line = fd.readline().replace("\n", "").replace("\t", "").replace(",", "").replace(" ", "")
            if len(line) <= 0 or line == "":
                continue
            if ")" in line:
                break
            if action is None:
                action = line
            elif text is None:
                text = line

        if action is None or text is None:
            return False

        action = action.replace(",", "")
        if action in QAction:
            action = QAction[action]
        text = text.replace(",", "")
        q.Dialog[action] = text
        return True

    def __load_state__(self, q, fd, line):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "{":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None
        number = line.replace("state", "").replace(" ", "").replace("\t", "")
        q.State[number] = dict()

        last_inc = ""
        while True:
            line = fd.readline().replace("\n", "").replace("\t", "")
            if len(line) <= 0:
                continue
            elif "}" in line:
                break
            else:
                if "(" in line or ")" in line:
                    continue
                if "IDS" not in line:
                    if line not in q.State[number]:
                        q.State[number][line] = ""
                    last_inc = line
                elif "IDS" in line:
                    q.State[number][last_inc] = line

        return True

    def load(self, f):
        gLogger.set_section("propquest")
        new_quest = True
        with open(f, "r") as fd:
            q = None
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "\\" in line or line == "" or line == "\t":
                    continue
                s = False
                for it in line:
                    if it != "\t":
                        s = True
                        break
                if s is False:
                    continue

                if new_quest is True:
                    q = Quest()
                    new_quest = False
                    line = line.replace("\t", "")
                    q.Id = line
                    fd.readline()
                    continue

                if "SetTitle" in line:
                    if self.__load_set_title__(q, fd) is None:
                        return None
                elif "setting" in line or "Setting" in line:
                    if self.__load_setting__(q, fd) is None:
                        return None
                elif "SetDialog" in line:
                    if self.__load_dialog__(q, fd) is None:
                        return None
                elif "state" in line:
                    if self.__load_state__(q, fd, line) is None:
                        return None
                else:
                    self.Quests[q.Id] = q
                    line = line.replace("\t", "")
                    if len(line) != 1 or line != "}":
                        gLogger.error("line != }", line)
                        return None
                    new_quest = True

        # self.__print__()

        gLogger.reset_section()
        return True


    def __print__(self):
        for it in self.Quests:
            quest = self.Quests[it]
            print(quest.Id)
            print("\t", quest.Title)
            for action in quest.Dialog:
                print("\t\t", action, quest.Dialog[action])
            for itSetting in quest.Setting:
                print("\t", itSetting)
                fct = quest.Setting[itSetting]
                params_str = str()
                for params in fct:
                    params_str += params
                    params_str += ""
                print("\t\t", params_str)
            for itState in quest.State:
                state = quest.State[itState]
                print("\t", itState)
                for fct in state:
                    print("\t\t", fct)
                    ss = ""
                    for params in state[fct]:
                        ss += params
                        ss += " "
                    print("\t\t\t", ss)

    def write_new_config(self):
        gLogger.set_section("propQuest")

        root = ET.Element("quests")

        for it in self.Quests:
            quest = self.Quests[it]
            section_quest = ET.SubElement(root, "quest")
            section_questions = ET.SubElement(section_quest, "questions")
            section_conditions = ET.SubElement(section_quest, "conditions")
            section_states = ET.SubElement(section_quest, "states")

            section_quest.set("dwID", quest.Id.replace("\"", ""))
            section_quest.set("szTitle", quest.Title)

            for action in quest.Dialog:
                sub_section = ET.SubElement(section_questions, "dialog")
                sub_section.set("action", action)
                sub_section.set("text", quest.Dialog[action])

            for fct in quest.Setting:
                setting = quest.Setting[fct]
                section_condition = ET.SubElement(section_conditions, "condition")
                section_condition.set("function", fct)
                if fct == "SetBeginCondPreviousQuest":
                    section_condition.set("nBeginCondPreviousQuestType", setting[0])
                for i in range(0, len(setting)):
                    if fct in ParamCondition:
                        section_condition.set(ParamCondition[fct][i], setting[i])
                    elif fct == "SetBeginCondJob":
                        section_condition.set(setting[i], "1")
                    elif fct == "SetBeginCondPreviousQuest":
                        if i == 0:
                            section_condition.set("nBeginCondPreviousQuestType", setting[0])
                        else:
                            section_condition.set(setting[i], "1")
                    else:
                        gLogger.error("Condition unknow", fct)
                        return None


            for value in quest.State:
                state = quest.State[value]
                section = ET.SubElement(section_states, "state")
                section.set("type", value)
                for fct in state:
                    param = state[fct]
                    section.set(fct, param)

        tree = ET.ElementTree(root)
        tree.write(g_project.path_xml + 'propQuest.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()
        return True