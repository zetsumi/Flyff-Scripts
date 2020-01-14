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
    return [line, ]


def bytes_to_unsigned_int(val):
    return int.from_bytes(val, byteorder="little", signed=False)


def convert_value(key, value):

    if isinstance(value, str) is False:
        return value
    if value == "TRUE":
        return True
    if value == "FALSE":
        return False
    if value == "=":
        return int(0)
    if "." in value:
        return float(0)
    if value.isdigit():
        return int(value)

    # Surcouche par les type Windows
    if "sz" in key:
        return value
    if "dw" in key:
        try:
            return int(value)
        except ValueError:
            return value
    if key[0] == "f":
        try:
            return float(value)
        except ValueError:
            return value
    if key[0] == "b":
        return bool(value)

    return value
