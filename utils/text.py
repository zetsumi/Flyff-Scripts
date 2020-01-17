
import json
from utils.logger import gLogger
from project import g_project


class Text:

    def __init__(self):
        self.datas = dict()
        self.key = ""
        self.data = ""

    def to_string(self):
        value = str(self.key) + "\t" + str(self.data)
        return value

    def load(self, f):
        gLogger.set_section("text")
        gLogger.info("Loading: ", f)

        self.datas = dict()
        with open(f, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                print(line)
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or len(line) <= 0 or line == "":
                    continue
                arr = line.split("\t")
                key = arr[0]
                value = ""
                for it in arr:
                    if len(it) <= 0 or it == "" or it == key or it == " ":
                        continue
                    if value == "" or len(value) <= 0:
                        value = it
                    else:
                        value += str(" " + it)
                if key != "" and key not in self.datas:
                    self.datas[key] = value
        gLogger.reset_section()

    def write_json(self, name):
        gLogger.set_section("text")
        gLogger.info("writing text", name, "JSON")

        with open(g_project.path_json_text + 'text_' + name + '.json', 'w') as fd:
            json.dump(self.datas, fd, indent=4)

        gLogger.reset_section()
