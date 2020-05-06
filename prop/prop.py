class Prop:

    def __init__(self):
        pass

    def load(self, file_prop, file_text, file_define):
        raise NotImplementedError

    def filter(self):
        raise NotImplementedError

    def write_new_config(self, mode):
        raise NotImplementedError