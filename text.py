class Text:


    def __init__(self):
        self.key = ""
        self.data = ""


    def toString(self):
        toString = str(self.key) + "\t" + str(self.data)
        return toString()


    def load(self, f):
        print("Loading: ", f)
        texts = dict()
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "\t")
                if "//" in line or len(line) <= 0 \
                    or line == "":
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
                if text.key != "" and text.data != "" and text.key not in texts:
                    texts[text.key] = text.data
        return texts