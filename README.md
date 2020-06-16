# Flyff-Scripts

![](https://mirrors.creativecommons.org/presskit/buttons/88x31/svg/by-nc-sa.svg)<br>
![](https://img.icons8.com/color/24/000000/error.png) Ce projet n'est pas affilié avec ***Gala Lab*** ![](https://img.icons8.com/color/24/000000/error.png)<br>
<br>

Script écrit `python 3.7` ayant pour but de filtrer les ressources de Fly For Fun et de les récrire aux formats `JSON` et `XML`.
<br>

[![discord](https://discordapp.com/api/guilds/294405146300121088/widget.png)](https://discord.gg/fZP7TWq)</br>

# USAGE
Lancer le script :
```sh
py core.py
```

# Modules
Les modules sont listé dans le fichier `module.py`.<br>
Par defauts tous les modules sont désactivés.<br>
Pour activer un module modifier la valeur `active` en `True`.<br>
Pour activer un filtre un module modifier la valeur `filtre` en `True`.<br>
```json
"header": {
    "active": True,
    "filter": False
}
```

## Résultat
La liste des fichiers constituant le projet est composé dans `project.py`.<br>
Le résultat de `core` sortira dans les dossiers :
* output/filter
* output/xml
* output/json
* output/json/text
* output/json/header
* output/prop
* output/documentation
<br>

La fonction `create_directories` créera les dossiers nécessaires aux fichiers de sortie.

# Structure
* ___doc___ : documentation sur le projet
* ___Ressource___ : contient les fichiers d'origine de Fly For Fun.
    * ___World___ : contient les mondes.
    * ___defines___ : contient fichier header `.h`.
    * ___model___ : contient les fichiers listant les models.
    * ___network___ : contient la liste des PACKETTYPE et SNAPSHOTTYPE du projet.
    * ___prop___ : contient les fichiers de configuration `.inc` et `.txt`.
    * ___text___ : contient la liste des textes `.txt.txt`.
* ___util___ : script en relation avec les fichers de configuration `Ressource/defines` `Ressource/text` et diverts fonction utile.
* ___model___ : script en relation avec les fichers de configuration `Ressource/model`.
* ___network___ : script en relation avec les fichers de configuration `Ressource/network`.
* ___prop___ : script en relation avec les fichers de configuration `Ressource/prop`.
* ___world___ : script en relation avec les fichers de configuration `Ressource/World`.


# Roadmap
## 1.0:
- [x] Lecture de tous les fichiers `.txt.txt`
- [x] Lecture de tous les fichiers `.h`
- [ ] Lecture de tous les fichiers `.inc`
- [ ] Lecture de tous les fichiers `.txt`
- [ ] Chargement des mondes
- [ ] Convertion de tous les fichier en `JSON`
- [ ] Convertion de tous les fichier en `XML`

# Version Ressource
## Fait
## En cours
- [x] Version 15
## A faire
- [ ] Version 16
- [ ] Version 17
- [ ] Version 18
- [ ] Version 19
- [ ] Version 20
- [ ] Version 21
