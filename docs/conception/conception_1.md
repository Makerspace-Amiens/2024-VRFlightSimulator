---
layout: default
title: Joystick
parent: Conception et prototypage
nav_order: 1
---

# Conception et prototypage du joystick

## Base du joystick

### Prototypage du capteur AS5600

Avant de se lancer dans la modélisation du mécanisme du joystick, nous sommes passés par une phase de prototypage des capteurs à effet Hall AS5600 afin de découvrir leur fonctionnement et nous préparer à la programmation de ces derniers. Le but de cette manoeuvre consiste en grande partie à ne pas se faire surprendre lors de leur intégration au mécanisme aussi bien lors de la phase de modélisation avec la tolérance de distance entre le capteur et l'aimant mais également lors de sa programmation.

Nous avons donc modélisé une pièce accueillant un roulement, un axe possédant à son extrémité un aimant et le capteur AS5600 :

![Proto capteur AS5600](..\images\proto_capteur_2024-Mar-20_09-22-10AM-000_CustomizedView9995141759.png)

*Rendu 3D de la pièce destinée à prototyper un capteur AS5600*

Cette pièce a été imprimée par une imprimante 3D Artillery Sidewinder X2 utilisant la technologie de dépôt de filament fondu (FDM) :

![Proto capteur AS5600 2](..\images\IMG_3341.jpg)

*Photo de la pièce destinée à prototyper un capteur AS5600 en cours d'impression*

Enfin nous avons prototypé ce capteur à l'aide de la carte électronique Arduino Pro Micro et d'un bouton poussoir.

![Proto capteur AS5600 3](..\images\IMG_3358.jpg)

### Modélisation du mécanisme

Suite au prototypage des capteurs à effet Hall, nous sommes passés par une phase de modélisation du mécanisme en s'inspirant du mécanisme de retour de force choisit lors de la phase d'étude et choix techniques. Nous avons notamment intégré lors de cette modélisation, les composants mécaniques mais également les vis et écrous, ce qui est une bonne pratique pour ne pas avoir de surprise au montage. Pour information, seuls les patins rouges sont directement issus d'une modélisation existante.

![Mecanisme_v1.1](..\images\cachedImage2.PNG)

*Rendu 3D de la première version du mécanisme du joystick*

![Mecanisme_v1.2](..\images\cachedImage3.PNG)

*Rendu 3D de la première version du mécanisme du joystick*

![Mecanisme_v1.3](..\images\cachedImage4.PNG)

*Rendu 3D de la première version du mécanisme du joystick*

### Prototypage du mécanisme

#### Prototypage matériel

Afin d'entamer la phase de prototypage du mécanisme du joystick, nous avons imprimé ses différents composants en 3D puis les avons nettoyés.

![Mecanisme_v1.4](..\images\IMG_1001.jpg)

*Composants du mécanisme imprimés en 3D*

![Mecanisme_v1.5](..\images\IMG_1002.jpg)

*Composants du mécanisme imprimés en 3D*

Puis nous sommes passés au montage et à la programmation des capteurs.

![Mecanisme_v1.6](..\images\mécanisme1.jpg)

*Mécanisme en cours de montage*

![Mecanisme_v1.7](..\images\IMG_3638.jpg)

*Mécanisme monté pour prototypage*

![Mecanisme_v1.8](..\images\IMG_3640.jpg)

*Mécanisme monté pour prototypage*

#### Prototypage logiciel

A cette étape du projet, nous avons eu l'occasion de commencer la programmation du joystick. Nous avons utilisé l'environnement de développement Arduino IDE aisni que la bibliothèque Jostick.h afin de programmer et interfacer notre carte électronique notamment dans l'utilisation de capteurs AS5600. 

Voici l'algorigramme de notre programme :

![Algo](..\images\Algorigramme.png)

*Algorigramme du programme du joystick*

![Interface de test](..\images\FRNRL91IVO450GL.png)

*Interface de test du joystick sous Windows 10*

### Première difficultée physique rencontrée

Une fois les capteurs programmés, une première difficulté s'est confrontée à nous lors du test de ce dernier, la casse d'un des axes du mécanisme dû à un décollage entre deux couches de filament. La force s'appliquant perpendiculairement à l'axe, ce dernier a cédé sous le poids de notre bras.

![Ancien axe du mécanisme](..\images\IMG_3398.jpg)

*Axe X inférieur du mécanisme cassé*

Nous avons donc amélioré notre mécanisme en renforçant chaque axe par une vis M3. De plus, nous avons modifié la base de la poignée afin de faciliter son câblage avec une coupe en son centre et ajouté un mécanisme d'attache poignée afin de permettre la fixation de la future poignée sur le mécanisme.

![Nouvel axe du mécanisme](..\images\IMG_3879.jpg)

*Nouvel axe du mécanisme renforcé*









//////////////////////////////////////////////////////////////////////////////

**Modélisation de la base du joystick**

<script type="module" src="https://ajax.googleapis.com/ajax/libs/model-viewer/3.4.0/model-viewer.min.js"></script>

<model-viewer src="../images/joystick_prototype_v3 copy.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls tone-mapping="commerce" poster="../images/poster copy.webp" shadow-intensity="1"></model-viewer>