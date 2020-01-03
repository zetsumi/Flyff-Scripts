
from utils.logger import gLogger


class Text:

    def __init__(self):
        self.datas = dict()
        self.key = ""
        self.data = ""


    def toString(self):
        value = str(self.key) + "\t" + str(self.data)
        return value


    def load(self, f):
        gLogger.set_section("text")
        gLogger.info("Loading: ", f)
        self.datas = dict()
        with open(f, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or len(line) <= 0 or line == "":
                    continue
                arr = line.split("\t")
                text = Text()
                text.key = arr[0]
                for it in arr:
                    if len(it) <= 0 or it == "" or it == text.key or it == " ":
                        continue
                    if text.data == "" or len(text.data) <= 0:
                        text.data = it
                    else:
                        text.data += str(" " + it)
                if text.key != "" and text.key not in self.datas:
                    self.datas[text.key] = text.data
        gLogger.reset_section()
        return self.datas
