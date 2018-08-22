import os
from collections import OrderedDict
from logger import gLogger


class Packet:

    def __init__(self):
        self.snapshots = list()
        self.packets = list()
        self.packets_used = OrderedDict()
        self.snapshots_used = OrderedDict()
        self.token_bin = "BIN:"
        self.token_file = "FILE:"
        self.token_packet = "PACKETTYPE"
        self.token_snapshot = "SNAPSHOTTYPE"
        self.documentation = "documentation/message_header.md"
        self.file_packets = "config/packets.txt"
        self.file_snapshots = "config/snapshots.txt"
        self.packets_valid = list()
        self.snapshots_valid = list()


    def __load_ressource__(self, f, arr):
        binary = ""
        path = ""
        with open(f, "r") as fd:
            for line in fd:
                line = line.replace("\n", "")
                line = line.replace(" ", "")
                line = line.replace("\t", "")
                if self.token_bin in line:
                    line = line.replace(self.token_bin, "")
                    binary = line
                    arr[binary] = OrderedDict()
                elif self.token_file in line:
                    line = line.replace(self.token_file, "")
                    path = line
                    arr[binary][path] = list()
                else:
                    if len(line) > 0 and line != "" and  "/" not in line \
                            and (self.token_packet in line or self.token_snapshot in line) \
                            and "/" not in line:
                        arr[binary][path].append(line)

    def __load_msgdhr__(self, f):
        with open(f, "r") as fd:
            for line in fd:
                if self.token_snapshot in line or self.token_packet in line:
                    line = line.replace("#define", "")
                    line = line.replace("# define", "")
                    line = line.replace(" ", "\t")
                    line = line.split('\t')
                    newelement = ""
                    for elem in line:
                        if len(elem) > 0 and elem != "":
                            newelement = elem
                            break
                    if self.token_packet in newelement:
                        self.packets.append(newelement)
                    elif self.token_snapshot in newelement:
                        self.snapshots.append(newelement)
                    else:
                        gLogger.error("Unknow:", newelement)

        gLogger.write("filter/infos_packettype.txt", self.packets, "{infos} {f}".format(
                infos="writing list PACKETTYPE in:",
                f="filter/infos_snapshottype.txt"))
        gLogger.write("filter/infos_snapshottype.txt", self.snapshots, "{infos} {f}".format(
                infos="writing list SNASHOPTYPE in:",
                f="filter/infos_snapshottype.txt"))


    def __compare__(self, title, based, used, result):
        gLogger.info("Filtering:", title)
        arr_find = list()
        for binary in used:
            gLogger.info("\tBinary:", binary)
            for path in used[binary]:
                count_find = 0
                for value in used[binary][path]:
                    if value not in based:
                        gLogger.info("\t\t{hdr} used but no declared".format(hdr=title))
                    else:
                        arr_find.append(value)
                        count_find = count_find + 1
                gLogger.info("\t\tFile: {path} {hdr} [{use}/{declared}]".format(
                    path=path,
                    hdr=title,
                    use=count_find,
                    declared=len(used[binary][path])))

        i = 0
        with open(result, "w") as fd:
            for b in based:
                if b not in arr_find:
                    fd.write(b + "\n")
                    i = i + 1
        gLogger.info("{title} unused: {count}".format(title=title, count=i))
        return arr_find


    def __generate_doc__(self, used, find, fd):
        fd.write("\n")
        for binary in used:
            fd.write("# " + binary.upper() + ":" + "\n")
            values = list()
            for path in used[binary]:
                count = 0
                for value in used[binary][path]:
                    if value in find:
                        count = count + 1
                        values.append(value)
                fd.write("\n")
                fd.write("| Binary | File | Count  |" + "\n")
                fd.write("| ------ | ---- | ------ |"+ "\n")
                fd.write("| " + binary + " | " + path + " | " + str(count) + " |" + "\n")
                fd.write("## " + path + ":" + "\n")            
                for value in values:
                    fd.write("- " + value + "\n")

    
    def load(self, f):
        gLogger.set_section("msghdr")
        gLogger.info("loading:", f)
        self.__load_msgdhr__(f)
        self.__load_ressource__(self.file_packets, self.packets_used)
        self.__load_ressource__(self.file_snapshots, self.snapshots_used)
        gLogger.reset_section()


    def filter(self):
        gLogger.set_section("msghdr")
        gLogger.info("*********************************")
        self.packets_valid = self.__compare__("PACKETTYPE",
            self.packets, self.packets_used,
            "filter/packettype_error.txt")
        gLogger.info("=================================")
        self.snapshots_valid = self.__compare__("SNAPSHOTTYPE",
            self.snapshots, self.snapshots_used,
            "filter/snapshottype_error.txt")
        gLogger.info("*********************************")
        gLogger.reset_section()


    def doc(self):
        if not os.path.exists("./documentation"):
            os.makedirs("./documentation")
        with open(self.documentation, "w") as fd:
            self.__generate_doc__(self.packets_used, self.packets_valid, fd)
            self.__generate_doc__(self.snapshots_used, self.snapshots_valid, fd)