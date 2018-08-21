from collections import OrderedDict
from logger import gLogger

class Define:
    def __init__(self):
        self.key = ""
        self.data = ""

    def toString(self):
        toString = str(self.key) + "\t" + str(self.data)
        return toString()

    def skip_preproc(self, string):
        if "#ifdef" in string or \
            "# ifdef" in string or \
            "#endif" in string or \
            "# endif" in string or \
            "#ifndef" in string or \
            " #ifndef" in string:
            return True
        return False

    def load(self, f):
        gLogger.info("Loading: ", f)
        defines = dict()
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or len(line) <= 0 \
                    or line == "" \
                    or self.skip_preproc(line) is True:
                    continue
                line = line.replace("#define", "")
                line = line.replace("# define", "")
                arr = line.split("\t")
                define = Define()
                for it in arr:
                    if it != "" and len(it) > 0:
                        try:
                            define.data = int(it)
                        except:
                            define.key = it
                    if define.key != "" and define.data != "":
                        break
                if define.key != "" and define.data != "" and define.key not in defines:
                    defines[define.key] = define.data
        return defines
