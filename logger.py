class Logger:

    def __init__(self):
        self.section = "app"


    def __print__(self, flag, args):
        text = "{f}[{s}]: ".format(
            s=self.section,
            f=flag)
        for a in args:
            text += str(a)
            text += " "
        print(text)

    
    def set_section(self, new_section):
        self.section = new_section


    def reset_section(self):
        self.section = "process"


    def info(self, *args):
        self.__print__("[info]", args)


    def warn(self, *args):
        self.__print__("[warning]", args)


    def error(self, *args):
        self.__print__("[error]", args)


    def write(self, file, container, text):
        if len(container) > 0:
            print("{f}[{s}]: {infos}".format(
                f="[write]",
                s=self.section,
                infos=text
            ))
            with open(file, "w") as fd:
                for it in container:
                    fd.write(str(it) + "\n")


gLogger = Logger()
