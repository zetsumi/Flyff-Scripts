from collections import OrderedDict
from lxml import etree as ET
from project import g_project
from utils.logger import gLogger

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

TypeItem = {
    2: "ctrl",
    3: "sfx",
    4: "item",
    5: "mvr",
    6: "region",
    7: "ship",
    8: "path"
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
        self.items = dict()
        self.ctrls = dict()
        self.sfxs = dict()
        self.ships = dict()
        self.paths = dict()
        self.regions = dict()
        self.movers = dict()

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
        pointer = None
        with open(f, "r", encoding="ISO-8859-1") as fd:
            type_model = ""
            index = ""
            for line in fd:
                line = self.__remove_element__(line)
                if "{" in line or "}" in line:
                    continue
                arr = self.__filter_arr__(line.split("\t"))
                if arr is None or len(arr) <= 0 or arr == []:
                    continue

                if len(arr) == 2 and "MTI" not in arr[1] and arr[1].isdigit():
                    type_model = TypeItem[int(arr[1])]
                    if type_model == "item":
                        pointer = self.items
                    elif type_model == "ctrl":
                        pointer = self.ctrls
                    elif type_model == "sfx":
                        pointer = self.sfxs
                    elif type_model == "ship":
                        pointer = self.ships
                    elif type_model == "path":
                        pointer = self.paths
                    elif type_model == "region":
                        pointer = self.regions
                    elif type_model == "mvr":
                        pointer = self.movers
                    else:
                        pointer = None

                if pointer is not None and len(arr) == 2 and "MTI" in arr[1]:
                    pointer[index]["motion"][arr[0].replace('"', "")] = arr[1].replace('"', "")
                    pass

                if len(arr) != 12:
                    continue

                if len(arr) == 12 and pointer is not None:
                    index = arr[1]
                    pointer[index] = dict()
                    if type_model == "mvr":
                        pointer[index]["motion"] = dict()
                    for i in ModelParams:
                        key = ModelParams[i]
                        value = arr[i].replace('"', "")
                        if len(value) == 0:
                            value = ""
                        pointer[index][key] = value

        gLogger.reset_section()


    def __write_sub_section__(self, arr, xml_section, title, list_type):
        for index in arr:
            section = ET.SubElement(xml_section, title)
            object = arr[index]
            if object["dwModelType"] not in list_type:
                gLogger.error(title, "have wrong model type:", index, object["dwModelType"])
                return None
            for i in range(0, len(ModelParams)):
                key = ModelParams[i]
                value = object[key]
                section.set(key, value)
        return True

    def __write_sub_section_mover__(self, arr, xml_section, title, list_type):
        for index in arr:
            section = ET.SubElement(xml_section, title)
            object = arr[index]
            if object["dwModelType"] not in list_type:
                gLogger.error(title, "have wrong model type:", index, object["dwModelType"])
                return None
            for i in range(0, len(ModelParams)):
                key = ModelParams[i]
                value = object[key]
                section.set(key, value)
            section_motion = ET.SubElement(section, "motions")
            for key in object["motion"]:
                value = object["motion"][key]
                sub_section = ET.SubElement(section_motion, "motion")
                sub_section.set(key, value)

        return True

    def write_new_config(self):
        gLogger.set_section("mdldyna")

        root = ET.Element("mdldyna")
        section_items = ET.SubElement(root, "items")
        section_ctrls = ET.SubElement(root, "ctrls")
        section_sfxs = ET.SubElement(root, "sfxs")
        section_ships = ET.SubElement(root, "ships")
        section_paths = ET.SubElement(root, "paths")
        section_regions = ET.SubElement(root, "regions")
        section_movers = ET.SubElement(root, "movers")

        if self.__write_sub_section__(self.items, section_items, "item", ["MODELTYPE_MESH", "MODELTYPE_ANIMATED_MESH"]) is None:
            return None
        if self.__write_sub_section__(self.ctrls, section_ctrls, "ctrl", ["MODELTYPE_MESH", "MODELTYPE_SFX", "MODELTYPE_ANIMATED_MESH", "MODELTYPE_BILLBOARD"]) is None:
            return None
        if self.__write_sub_section__(self.sfxs, section_sfxs, "sfx", ["MODELTYPE_SFX"]) is None:
            return None
        if self.__write_sub_section__(self.ships, section_ships, "ship", ["MODELTYPE_MESH", "MODELTYPE_ANIMATED_MESH"]) is None:
            return None
        if self.__write_sub_section__(self.paths, section_paths, "path", ["MODELTYPE_MESH"]) is None:
            return None
        if self.__write_sub_section__(self.regions, section_regions, "region", ["MODELTYPE_MESH"]) is None:
            return None
        if self.__write_sub_section_mover__(self.movers, section_movers, "mover", ["MODELTYPE_ANIMATED_MESH"]) is None:
            return None

        tree = ET.ElementTree(root)
        tree.write(g_project + 'mdldyna.xml', pretty_print=True, xml_declaration=True)

        gLogger.reset_section()