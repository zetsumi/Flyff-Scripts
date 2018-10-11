import subprocess
from collections import OrderedDict
from logger import gLogger
from lxml import etree as ET



class MdlObj:

    def __init__(self):
        self.szName = 0
        self.iObject = 1
        self.dwModelType = 2
        self.szPart = 3
        self.bFly = 4
        self.bDistant = 5
        self.bPick = 6
        self.fScale = 7
        self.bTrans = 8
        self.bShadow = 9
        self.bTextureEx = 10

    def toString(self):
        toString = str(str(self.szName) + " " + \
            str(self.iObject) + " " + \
            str(self.dwModelType) + " " + \
            str(self.szPart) + " " + \
            str(self.bFly) + " " + \
            str(self.bDistant) + " " + \
            str(self.bPick) + " " + \
            str(self.fScale) + " " + \
            str(self.bShadow) + " " + \
            str(self.bTextureEx))
        return toString


    def getIdMax(self):
        return 10


    def getSize(self):
        return self.getIdMax() + 1


    def load(self, f):
        gLogger.set_section("mdlobj")
        gLogger.info("loading:", f)
        datas = OrderedDict()
        with open(f, "r") as fd:
            for line in fd:
                if "//" in line:
                    continue
                arr = line.split(" ")
                copy = list()
                for it in arr:
                    if it != "" and len(it) > 0:
                        copy.append(it)
                arr = copy
                if len(arr) < self.getSize():
                    continue
                data = MdlObj()
                for key in self.__dict__:
                    setattr(data, key, arr[getattr(self, key)])
                datas[data.iObject] = data
        gLogger.reset_section()
        return datas
    

    def filter(self, mdlobj, path_model, define):
        gLogger.set_section("mdlobj")
        
        mdlobj_undeclared = list()
        mdlobj_model_missing = list()

        for it in mdlobj:
            obj = mdlobj[it]
            if obj.dwModelType not in define and obj.dwModelType not in mdlobj_undeclared:
                mdlobj_undeclared.append(obj.dwModelType)
            model = "Obj_" + obj.szName + ".o3d"
            out = subprocess.check_output(['find', path_model, '-iname', model])
            if (out == "" or len(out) <= 0) and it not in mdlobj_model_missing:
                mdlobj_model_missing.append(it)

        gLogger.write("./filter/mdlobj_undeclared.txt", mdlobj_undeclared, "{infos}: {undeclared}/{total}".format(
                infos="Obj undeclared:",
                undeclared=len(mdlobj_undeclared),
                total=len(mdlobj)))

        gLogger.reset_section()


    def write(self, mdlobj):
        gLogger.set_section("mdlobj")

        with open("output/mdlObj.inc", "w") as fd:
            fd.write("\"obj\" 0 \n")
            fd.write("{\n")
            for it in mdlobj:
                obj = mdlobj[it]
                fd.write("\t")
                fd.write(obj.toString())
                fd.write("\n")
            fd.write("}\n")

        gLogger.reset_section()

    def write_new_config(self, mdlobj):
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

        for it in mdlobj:
            obj = mdlobj[it]
            section = section_unknow
            if obj.dwModelType in actor_type:
                section = ET.SubElement(actor_type[obj.dwModelType], "actor")
            for attr in attr_order:
                value = getattr(obj, attr)
                value = value.replace('"', "")
                if value is not None and value != "":
                    section.set(attr, value)

        tree = ET.ElementTree(root)
        tree.write('xml/mdlobj.xml', pretty_print=True, xml_declaration=True)
        gLogger.reset_section()