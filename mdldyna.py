from collections import OrderedDict
from logger import gLogger

ModelParams = {
    0: "szObject",
    1: "iObject",
    2: "dwModelType",
    3: "szPart",
    4: "bFly",
    5: "dwDistant",
    6: "bPick",
    7: "fScale",
    8: "bTrans",
    9: "bShadow",
    10: "nTextureEx",
    11: "bRenderFlag",
}

ModelAnimatedParams = {

}

Item = {
    "iType": 0,
    "iObject": 0,
    "bFly": 0,
    "dwDistance": 0,
    "bPick": 0,
    "fScale": 0,
    "bTrans": 0,
    "bShadow": 0,
    "bReserved": 0,
    "nTextureEx": 0,
    "bRenderFlag": 0,
    "iMotion": 0
}

class MdlDyna:
    def __init__(self):
        self.items = OrderedDict()

    def __remove_element__(self, line):
        newline = line.replace("\n", "")
        newline = newline.replace(" ",  "\t")
        return newline


    def __filter_arr__(self, arr):
        newarr = []
        for it in arr:
            if len(it) > 0 and len != "":
                newarr.append(it)
        if newarr == [] or len(arr) <= 0:
            return None
        return newarr


    def load(self, f):
        gLogger.set_section("mdldyna")
        gLogger.info("Loading: ", f)
        with open(f, "r") as fd:
            for line in fd:
                line = self.__remove_element__(line)
                if "{" in line or "}" in line:
                    continue
                arr = self.__filter_arr__(line.split("\t"))
                if arr is None or len(arr) <= 0 or arr == []:
                    continue
                if len(arr) == 12:
                    if "II_" in arr[1]:
                        id = arr[1]
                        self.items[id] = OrderedDict()
                        for i in ModelParams:
                            self.items[id][ModelParams[i]] = arr[i].replace('"', "")
                        print(self.items[id])
        gLogger.reset_section()


    def filter(self, items):
        gLogger.set_section("mdldyna")

        item_unused = []
        for it in items:
            if it not in self.items:
                item_unused.append(it)
        
        if len(item_unused) > 0:
            gLogger.info("item_unused {}/{}".format(len(item_unused), len(self.items)))

        gLogger.reset_section()


    def write_new_config(self):
        gLogger.set_section("mdldyna")

        # for it in self.items:
        #     item = self.items[it]
        #     print(item, len(item))

        gLogger.reset_section()