# Flyff-Scripts

![](https://mirrors.creativecommons.org/presskit/buttons/88x31/svg/by-nc-sa.svg)<br>
![](https://img.icons8.com/color/24/000000/error.png) Ce projet n'est pas affilié avec ***Gala Lab*** ![](https://img.icons8.com/color/24/000000/error.png)<br>
<br>

Script en `python 3.x` ayant pour but de filtrer les ressources de flyff v15 et de les réécrire aux formats `JSON` et `XML`.<br>
Les ressources ciblés sont la v15 de Flyff.<<br>
<br>

[![discord](https://discordapp.com/api/guilds/294405146300121088/widget.png)](https://discord.gg/fZP7TWq)</br>

# USAGE
Lancer le script :
```sh
py core.py
```

# Modules
Les modules sont listé dans `module.py` pour activer le module modifier la valeur `active` en `True`.<br>
Pour effectuer un filtre du module modifier la valeur `Filtre` en `True`.
```json
"header": {
    "active": True,
    "filter": False
}
```

## Résultat
La liste des fichiers constituant le projet est composé dans `project.py`.
Le résultat de `core` sortira dans les dossiers :
* output/filter
* output/xml
* output/json
* output/json/text
* output/json/header
* output/prop
* output/documentation
La fonction `create_directories` créra les dossiers necessaire aux fichiers de sortie.

# Roadmap
## 1.0:
- [x] Lecture de tous les fichiers `.txt.txt`
- [x] Lecture de tous les fichiers `.h`
- [ ] Lecture de tous les fichiers `.inc`
- [ ] Lecture de tous les fichiers `.txt`
- [ ] Convertion de tous les fichier en `JSON`
- [ ] Convertion de tous les fichier en `XML`

## 2.0:
- [ ] Chargement des mondes
- [ ] Ecriture des mondes en `JSON` et `XML`
