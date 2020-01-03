import subprocess
from collections import OrderedDict
from utils.logger import gLogger
from lxml import etree as ET
from utils.define import Define
from utils.text import Text

MdlObjParameters = {
    "szName": 0,
    "iObject": 1,
    "dwModelType": 2,
    "szPart": 3,
    "bFly": 4,
    "bDistant": 5,
    "bPick": 6,
    "fScale": 7,
    "bTrans": 8,
    "bShadow": 9,
    "bTextureEx": 10
}


class MdlObj:

    def __init__(self):
        self.datas = dict()
        self.define = Define()


    def load(self, f, d):
        gLogger.set_section("mdlobj")
        gLogger.info("loading:", f)
        self.datas = dict()
        with open(f, "r", encoding="ISO-8859-1") as fd:
            for line in fd:
                if "//" in line:
                    continue
                arr = line.split(" ")
                copy = list()
                for it in arr:
                    if it != "" and len(it) > 0:
                        copy.append(it)
                arr = copy
                if len(arr) < len(MdlObjParameters):
                    continue
                id_object = arr[1]
                self.datas[id_object] = dict()
                for key in MdlObjParameters:
                    self.datas[id_object][key] = arr[MdlObjParameters[key]].replace('"', "")
        self.define.load(d)
        gLogger.reset_section()


    '''
    Valable uniquement sur UNIX du a find
    TODO : detecter unix ou windows et remplacer find
    '''
    def filter(self, path_model):
        gLogger.set_section("mdlobj")

        mdlobj_undeclared = list()
        mdlobj_model_missing = list()

        for it in self.datas:
            obj = self.datas[it]
            if obj["dwModelType"] not in self.define.datas and obj["dwModelType"] not in mdlobj_undeclared:
                mdlobj_undeclared.append(obj["dwModelType"])
            model = "Obj_" + obj["szName"] + ".o3d"
            out = subprocess.run(['find', path_model, '-iname', model], stdout=subprocess.PIPE)
            if len(out.stdout) == 0 and it not in mdlobj_model_missing:
                mdlobj_model_missing.append(model)

        gLogger.write("./filter/mdlobj_undeclared.txt", mdlobj_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Obj undeclared:",
                undeclared=len(mdlobj_undeclared),
                total=len(self.datas)))
        gLogger.write("./filter/mdlobj_model_missing.txt", mdlobj_model_missing, "{infos}: {undeclared}/{total}".format(
                infos="Model not found:",
                undeclared=len(mdlobj_model_missing),
                total=len(self.datas)))

        gLogger.reset_section()


    def write(self, mdlobj):
        gLogger.set_section("mdlobj")

        with open("output/mdlObj.inc", "w", encoding="ISO-8859-1") as fd:
            fd.write("\"obj\" 0 \n")
            fd.write("{\n")
            for it in mdlobj:
                obj = mdlobj[it]
                fd.write("\t")
                fd.write(obj.toString())
                fd.write("\n")
            fd.write("}\n")

        gLogger.reset_section()

    def write_new_config(self):
        gLogger.set_section("mdlobj")

        root = ET.Element("actor")
        section_static = ET.SubElement(root, "static")
        section_dynamic = ET.SubElement(root, "dynamic")
        section_billboard = ET.SubElement(root, "billboard")
        sectiion_sfx = ET.SubElement(root, "sfx")
        section_ase = ET.SubElement(root, "ase")
        section_unknow = ET.SubElement(root, "unknow")

        attr_order = [
            "szName",
            "iObject",
            "dwModelType",
            "szPart",
            "bFly",
            "bDistant",
            "bPick",
            "fScale",
            "bTrans",
            "bShadow",
            "bTextureEx"
        ]

        actor_type = {
            "MODELTYPE_NONE": section_unknow,
            "MODELTYPE_MESH": section_static,
            "MODELTYPE_ANIMATED_MESH": section_dynamic,
            "MODELTYPE_BILLBOARD": section_billboard,
            "MODELTYPE_SFX": sectiion_sfx,
            "MODELTYPE_ASE": section_ase
        }

        for it in self.datas:
            obj = self.datas[it]
            section = section_unknow
            if obj["dwModelType"] in actor_type:
                section = ET.SubElement(actor_type[obj["dwModelType"]], "actor")
            for attr in attr_order:
                value = obj[attr]
                value = value.replace('"', "")
                if value is not None and value != "":
                    section.set(attr, value)

        tree = ET.ElementTree(root)
        tree.write('xml/mdlobj.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()