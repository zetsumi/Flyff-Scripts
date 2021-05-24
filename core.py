from utils import gLogger
from module import Module
from project import g_project

def exec_modules(m):
    # Exécute tous les modules actif
    dict_module = m.modules
    for it in dict_module:
        mdl = dict_module[it]
        active = mdl["active"]
        if active is True:
            execute = mdl["exec"]
            if execute is not None:
                gLogger.set_section('core')
                gLogger.info('execute module', it)
                execute()

# Fonction principal du program
# L'execution du program effectura les modules present est active provenant de `module.py`
# La liste des fichiers créer seront listé dans `project.json` et `project.xml`
if __name__ == "__main__":
    # Manager des module
    module = Module()

    gLogger.set_section("core")
    gLogger.info("Running Flyff Properties ", g_project.version_binary)
    gLogger.reset_section()

    # Creation des répertoires de sortie
    g_project.create_directories()

    # Exécute le traitement de chaque module
    exec_modules(module)

    # Details des fichier traités
    module.write_project_file('json')
    module.write_project_file('xml')

    gLogger.set_section("core")
    gLogger.info("process finished")
    gLogger.reset_section()
