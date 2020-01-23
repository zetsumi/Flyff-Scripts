from utils import gLogger
from module import Module
from project import g_project


if __name__ == "__main__":
    module = Module()
    gLogger.set_section("core")
    gLogger.info("Running Flyff Properties ", g_project.version_binary)
    gLogger.reset_section()

    g_project.create_directories()

    # if module.modules["header"]["active"] is True:
    #     module.module_header()
    # if module.modules["text"]["active"] is True:
    #     module.module_text()
    # if module.modules["mdldyna"]["active"] is True:
    #     module.module_mdldyna()
    # if module.modules["mdlobj"]["active"] is True:
    #     module.module_mdlobj()
    # if module.modules["karma"]["active"] is True:
    #     module.module_karma()
    # if module.modules["ctrl"]["active"] is True:
    #     module.module_ctrl()
    # if module.modules["item"]["active"] is True:
    #     module.module_item()
    # if module.modules["skill"]["active"] is True:
    #     module.module_skill()
    # if module.modules["mover"]["active"] is True:
    #     module.module_mover()
    # if module.modules["world"]["active"] is True:
    #     module.module_world()
    # if module.modules["quest"]["active"] is True:
    #     module.module_quest()
    # if module.modules["drop"]["active"] is True:
    #     module.module_drop()
    # if module.modules["ai"]["active"] is True:
    #     module.module_ai()
    # if module.modules["event_monster"]["active"] is True:
    #     module.module_event_monster()
    # if module.modules["diepenalty"]["active"] is True:
    #     module.module_die_penalty()
    # if module.modules["filter"]["active"] is True:
    #     module.module_filter()
    if module.modules["invalid"]["active"] is True:
        module.module_invalid()

    # module.write_project_file('json')
    # module.write_project_file('xml')

    gLogger.set_section("core")
    gLogger.info("process finished")
    gLogger.reset_section()
