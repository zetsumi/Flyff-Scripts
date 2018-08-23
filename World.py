import subprocess
from collections import OrderedDict
from logger import gLogger


class World:


    def __init__(self):
        self.id = int(-1)
        self.title = str("")


    def load(self):
        gLogger.set_section("world")

        gLogger.reset_section()