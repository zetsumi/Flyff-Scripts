from collections import OrderedDict
from logger import gLogger

class Define:
    def __init__(self):
        self.datas = dict()
        self.key = ""
        self.value = ""

    def toString(self):
        rslt = str("#define" + " " + str(self.key) + " " + str(self.value))
        return rslt

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
        gLogger.set_section("define")
        gLogger.info("Loading: ", f)
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
                            define.value = int(it)
                        except:
                            if define.key == "":
                                define.key = it
                            else:
                                define.value = it
                    if define.key != "" and define.value != "":
                        break
                if define.key != "" and define.value != "" and define.key not in self.datas:
                    self.datas[define.key] = define
        gLogger.reset_section()
        return self.datas


    def write(self, f, defines, sep="\t"):
        gLogger.set_section("define")
        gLogger.info("writing:", f)
        with open(f, "w") as fd:
            for it in defines:
                define = defines[it]
                line = define.toString()
                line = line.replace(" ", sep)
                fd.write(line + "\n")
        gLogger.reset_section()
        return True
