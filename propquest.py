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
        q.Title = fd.readline().replace("\n", "").replace("\t", "")
        fd.readline()
        return True

    def __load_setting__(self, q, fd):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "{":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None

        while True:
            line = fd.readline().replace("\n", "")
            if len(line) <= 0:
                continue
            if "}" in line:
                break

        return True


    def __load_dialog__(self, q, fd):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "(":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None
        action = fd.readline().replace("\n", "")
        text = fd.readline().replace("\n", "")
        print(fd.readline().replace("\n", ""))
        return True

    
    def __load_state__(self, q, fd, line):
        sep = fd.readline().replace("\t", "").replace("\n", "")
        if len(sep) != 1 or sep != "{":
            message = "error: [{char}]".format(char=sep)
            gLogger.info(message)
            return None

        while True:
            line = fd.readline().replace("\n", "")
            if len(line) <= 0:
                continue
            if "}" in line:
                break
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

                print("line: [", line, "]")
                if new_quest is True:
                    print("new")
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
                    print("end")
                    line = line.replace("\t", "")
                    if len(line) !=1  or line != "}":
                        gLogger.error("line != }", line)
                        return None
                    new_quest = True

        gLogger.reset_section()