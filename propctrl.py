from collections import OrderedDict

class PropCtrl:


    def __init__(self):
        self.dwID = 0
        self.szName = 1
        self.dwCtrlKind1 = 2
        self.dwCtrlKind2 = 3
        self.dwCtrlKind3 = 4
        self.dwSfxCtrl = 5
        self.dwSndDamage = 6
        self.szComment = 7


    def toString(self):
        toString = str(str(self.dwID) + " " + str(self.szName) + " " + str(self.dwCtrlKind1) + " " + \
		str(self.dwCtrlKind2) + " " + str(self.dwCtrlKind3) + " " + str(self.dwSfxCtrl) + " " + \
		str(self.dwSndDamage) + " " + str(self.szComment))
        return toString


    def getIdMax(self):
        return 7


    def getSize(self):
        return self.getIdMax() + 1


    def load(self, f):
        print("Loading: ", f)
        ctrls = {}
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or \
                    len(line) <= 0 or \
                    line == "":
                    continue
                arr = line.split("\t")
                cpy = list()
                for it in arr:
                    if it != "" and len(it) > 0:
                        cpy.append(it)
                arr = cpy
                if len(arr) < self.getSize():
                    continue
                ctrls[arr[self.dwID]] = PropCtrl()
                for key in self.__dict__:
                    setattr(ctrls[arr[self.dwID]], key, arr[getattr(self, key)])
        return ctrls


    def filter(self, ctrls, defineObj, textCtrl):
        print("Filtering propCtrl")

        ctrl_undeclared = []
        ctrl_name_undeclared = []
        ctrl_comment_undeclared = []

        for it in ctrls:
            ctrl = ctrls[it]
            if ctrl.dwID not in defineObj:
                if ctrl.dwID not in ctrl_undeclared:
                    ctrl_undeclared.append(ctrl.dwID)
            if ctrl.szName not in textCtrl:
                if ctrl.szName not in ctrl_name_undeclared:
                    ctrl_name_undeclared.append(ctrl.szName)
            if ctrl.szComment not in textCtrl:
                if ctrl.szComment not in ctrl_comment_undeclared:
                    ctrl_comment_undeclared.append(ctrl.szComment)


        if len(ctrl_undeclared) > 0:
            print("Ctrl undeclared: {undeclared}/{total}".format(
                undeclared=len(ctrl_undeclared), total=len(ctrls)))
            with open("./filter/ctrl_undeclared.txt", "w") as fd:
                for ctrl in ctrl_undeclared:
                    fd.write(str(ctrl) + "\n")
        if len(ctrl_name_undeclared) > 0:
            print("Ctrl Name undeclared: {undeclared}/{total}".format(
                undeclared=len(ctrl_name_undeclared), total=len(ctrls)))
            with open("./filter/ctrl_name_undeclared.txt", "w") as fd:
                for ctrl in ctrl_name_undeclared:
                    fd.write(str(ctrl) + "\n")
        if len(ctrl_comment_undeclared) > 0:
            print("Ctrl Comment undeclared: {undeclared}/{total}".format(
                undeclared=len(ctrl_comment_undeclared), total=len(ctrls)))
            with open("./filter/ctrl_comment_undeclared.txt", "w") as fd:
                for ctrl in ctrl_comment_undeclared:
                    fd.write(str(ctrl) + "\n") 


            