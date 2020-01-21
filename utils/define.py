import json
from collections import OrderedDict
from utils.logger import gLogger
from project import g_project


def skip_preproc(string):
    if 'ifdef' in string or \
            'endif' in string or \
            'ifndef' in string:
        return True
    return False


class Define:
    def __init__(self):
        self.datas = OrderedDict()
        self.filename_in = ""
        self.filename_out_json = ""
        self.filename_out_xml = ""

    def load(self, f):
        gLogger.set_section("define")
        gLogger.info("Loading: ", f)

        self.filename_in = f
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or len(line) <= 0 \
                        or line == "" \
                        or skip_preproc(line) is True:
                    continue
                line = line.replace("#define", "")
                line = line.replace("# define", "")
                arr = line.split("\t")
                key = ""
                value = ""
                for it in arr:
                    if it != "" and len(it) > 0:
                        try:
                            value = int(it)
                        except ValueError:
                            if key == "":
                                key = it
                            else:
                                value = it
                    if key != "" and value != "":
                        break
                if key != "" and value != "" and key not in self.datas:
                    self.datas[key] = value
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

    def write_json(self, name):
        gLogger.set_section("define")
        self.filename_out_json = g_project.path_json_header + 'header_' + name + '.json'
        gLogger.info("writing header:", self.filename_out_json)
        with open(self.filename_out_json, 'w') as fd:
            json.dump(self.datas, fd, indent=4)
        gLogger.reset_section()
