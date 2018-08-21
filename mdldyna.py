from collections import OrderedDict
from logger import gLogger

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
        gLogger.info("Loading: ", f)
        mdlDyna = MdlDyna()
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
                        self.items[arr[1]] = str(arr[0]).replace('"', "")


    def filter(self, items):
        gLogger.info("Filtering by mdldyna")
        gLogger.set_section("mdldyna")

        item_unused = []
        for it in items:
            if it not in self.items:
                item_unused.append(it)
        
        if len(item_unused) > 0:
            gLogger.info("item_unused {}/{}".format(len(item_unused), len(self.items)))

        gLogger.reset_section()
