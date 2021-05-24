# Flyff-Scripts

Script ayant pour but de filtrer les ressources de flyff et de les réécrire aux formats `json` et `xml`.
Les ressource ciblés sont la v15 de Flyff.

# USAGE
Lancer le script :
```sh
py core.py
```

# Modules
Les modules sont listé dans `module.py` pour activer le module modifier la valeur `active` en `True`. Pour effectuer un filtre du module modifier la valeur `Filtre` en `True`.
```json
"header": {
    "active": True,
    "filter": False
}
```

# Projet
La liste des fichiers constituant le projet est composé dans `project.py`.
Le résultat de `core` sortira dans les dossier :
* output/filter
* output/xml
* output/json
* output/json/text
* output/json/header
* output/prop
* output/documentation
La fonction `create_directories` créra les dossiers necessaire aux fichiers de sortie.

# Version 1.0:
- [x] Lecture de tous les fichiers `.txt.txt`
- [x] Lecture de tous les fichiers `.h`
- [ ] Lecture de tous les fichiers `.inc`
- [ ] Lecture de tous les fichiers `.txt`
- [ ] Convertion de tous les fichier en `JSON` et `XML`

# Version 2.0:
- [ ] Chargement des mondes
- [ ] Ecriture des mondes en `JSON` et `XML`

# Version 3.0:
- [ ] Chargement des models
- [ ] Ecriture des models en `AES` `FBX`