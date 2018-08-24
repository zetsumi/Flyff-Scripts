class Vector:

    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z


class Rect:

    def __init__(self, left, top, right, bottom):
        self.left = left
        self.top = top
        self.right = bottom



def splitter(line):
    if "\t" not in line and " " in line:
        return line.split(" ")
    elif " " not in line and "\t" in line:
        return line.split("\t")
    elif " " in line and "\t" in line:
        line = line.replace("\t", "")
        return line.split(" ")
    return [line,]


def bytes_to_unsigned_int(val):
    return int.from_bytes(val, byteorder="little", signed=False)
