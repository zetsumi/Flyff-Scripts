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
    if ("." in value.lower() or "," in value.lower()) \
            and ".dds" not in value.lower() and ".tga" not in value.lower() and ".png" not in value.lower() \
            and ".txt" not in value.lower():
        return float(value.replace(",", "."))
    if value.isdigit() and "sz" not in key:
        return int(value)

    # Surcouche par les type Windows
    if "sz" in key:
        return str(value)
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


def skip_preproc(string):
    if "#ifdef" in string or \
            "# ifdef" in string or \
            "#endif" in string or \
            "# endif" in string or \
            "#ifndef" in string or \
            " #ifndef" in string:
        return True
    return False
