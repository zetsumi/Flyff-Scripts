from lxml import etree as ET
from collections import OrderedDict
from logger import gLogger


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
            line = fd.readline().replace("\n", "").replace("\t", "")
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
            line = fd.readline().replace("\n", "").replace("\t", "")
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
        last_inc = None

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
                        q.State[number][line] = list()
                    last_inc = q.State[number][line]
                else:
                    last_inc.append(line)

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
                    if len(line) !=1  or line != "}":
                        gLogger.error("line != }", line)
                        return None
                    new_quest = True

        # self.__print__()

        gLogger.reset_section()


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
