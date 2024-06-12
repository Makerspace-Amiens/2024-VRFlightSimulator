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

![Mecanisme_v1.4](..\images\IMG_1001.JPG)

*Composants du mécanisme imprimés en 3D*

![Mecanisme_v1.5](..\images\IMG_1002.JPG)

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

![Nouvel axe du mécanisme 2](..\images\Analyse_de_section_meca_v2.PNG)

*Analyse de section du renforcement de l'axe*

![Evolution mécanisme](..\images\IMG_1005.JPG)

*Evolution du mécanisme*

### Mécanisme final

La modélisation terminée, nous sommes passés à l'impression des différents composants du mécanisme final et à son assemblage.

<video src="..\images\20240418_222930.mp4" controls title="Title"  style="width: 100%;"></video>

*Impression 3D de composants du mécanisme*

![Composants mécanisme](..\images\comp_mécanisme.jpg)

*Quelques composants du mécanisme*

**Voici le mécanisme du joystick terminé :**

***Rendus 3D :***

![Mécanisme final 1](..\images\joystick_base_3_2024-Jun-10_01-42-35PM-000_CustomizedView2178541344-Copie.png)

*Mécanisme final du joystick*

![Mécanisme final 2](..\images\joystick_base_3_2024-Jun-10_01-43-08PM-000_CustomizedView54842374853.png)

*Mécanisme final du joystick*

***Vidéo 3D du montage :***

<video src="..\images\Vidéo-montage-mecanisme-joystick.mp4" controls title="Title"  style="width: 100%;"></video>

***Model 3D du mécanisme :***

<script type="module" src="https://ajax.googleapis.com/ajax/libs/model-viewer/3.4.0/model-viewer.min.js"></script>

<model-viewer src="..\images\mécanisme_final_joystick.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls tone-mapping="commerce" poster="..\images\poster_mécanisme_final_joystick.webp" shadow-intensity="1"></model-viewer>

---

## Poignée du joystick

### Design de la poignée

Possédant dès à présent un mécanisme fonctionnel et répondant à nos attentes, nous nous sommes penchés sur le développement d'une poignée de joystick sur mesure s'inspirant du joystick de l'avion de chasse F-16.

Le développement d'une telle pièce étant délicat d'un point de vue ergonomique, nous nous sommes inspirés d'une modélisation existante du joystick du F-16 afin d'obtenir les différentes dimensions importantes (hauteur/largeur/profondeur/...) dans le but d'éviter une phase de prototypage ergonomique.

![Modélisation existante poignée](..\images\large_display_sidestick_wip_10.png)

*Modélisation existante utilisée dans le développement de notre poignée*

Avant de nous lancer dans la modélisation, nous avons déssinés sur des rendus le design attendu lors de la phase de modélisation de cette poignée. 

![Design attendu poignée](..\images\IMG_0914.jpg)

*Design attendu de la poignée*

![Design attendu poignée](..\images\IMG_0915.jpg)

*Design attendu de la poignée*

![Design attendu poignée](..\images\IMG_0912.jpg)

*Design attendu de la poignée*

### Développement du hat-switch

Notre cahier des charges incluant un hat-switch, nous avons décidé de développer ce dernier sur mesure car la disponibilité et le prix de ce composant étaient un frein dans son intégration au sein de notre joystick. Nous sommes donc passés par une étape de modélisation puis de prototypage.

![Modélisation hat-switch 1](..\images\IMG_1017.PNG)

*Modélisation de la première version du hat_switch*

Après de nombreuses corrections de dimensions, nous sommes parvenus à un résultat satisfaisant. 

![Modélisation hat-switch 1](..\images\IMG_3643.jpg)

*Prototypes de la première version du hat_switch*

Malheureusement, en vue de l'encombrement de notre hat-switch au sein de la poignée, nous avons retravaillé sa conception afin de faciliter son intégration entre les différents composants présents. Outre cela, nous avons développé un circuit imprimé sur-mesure à l'aide du logiciel KiCad.

![Modélisation hat-switch 1](..\images\IMG_1016.PNG)

*Circuit électronique du PCB du hat-switch*

![Modélisation hat-switch 1](..\images\IMG_1018.PNG)

*Modélisation du hat-switch final*

### Modélisation et prototypage de la poignée

Nous avons ensuite commencé la modélisation de cette poignée avec une méthode de modélisation habituelle : la modélisation solide. Cela nous permet de fixer les différentes contraintes de formes afin de simplifier la suite de la modélisation. Pour information, aucun composant de notre modélisation n'a été tiré de la modélisation existante.

![Modélisation solide poignée](..\images\joystick_2024-Mar-20_09-46-38AM-000_CustomizedView15023258634.png)

*Modélisation solide de la poignée*

![Modélisation solide poignée](..\images\joystick_2024-Mar-20_09-47-25AM-000_CustomizedView14068782543.png)

*Modélisation solide de la poignée*

Cette première étape de modélisation nous a permis de passer à une seconde méthode de modélisation : la modélisation surfacique. Cette méthode étant très compliquée à prendre en main, nous avons rencontré de nombreuses difficultés dans son utilisation.
Après plus d'une trentaine de prototypes de modélisation, nous avons réussi à aboutir à une modélisation convenable de la poignée où nous avons eu l'occasion d'intégrer le système de gâchette ainsi que les différents composants électroniques que nous avons fixés dans notre cahier des charges.

![Modélisation poignée finale](..\images\Poignée_2024-Jun-10_01-12-52PM-000_CustomizedView52016890750.png)

*Modélisation finale de la poignée*

![Modélisation poignée finale](..\images\0267eb1f-cb2b-4092-9662-71757f675998.PNG)

*Modélisation finale de la poignée*

Une fois de plus, nous avons imprimé et nettoyé les différents composants de la poignée afin de procéder à son montage.

<video src="..\images\poignée-droite.mp4" controls title="Title"  style="width: 100%;"></video>

*Impression 3D de la partie droite de la poignée*

![Poignée joystick](..\images\IMG_4007.jpg)

*Parties latérales de la poignée avant et après nettoyage*

***Vidéo 3D du montage :***

<video src="..\images\Vidéo-montage-poignée-joystick.mp4" controls title="Title"  style="width: 100%;"></video>

***Model 3D de la poignée :***

<script type="module" src="https://ajax.googleapis.com/ajax/libs/model-viewer/3.4.0/model-viewer.min.js"></script>

<model-viewer src="..\images\poignée_finale.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls tone-mapping="commerce" poster="..\images\poster_poignée_finale.webp" shadow-intensity="1"></model-viewer>

---

## Intégration de la poignée

Les éléments principaux composant notre joystick étant développés et remplissents nos attentes, nous sommes passés à la dernière phase du développement du joystick, l'intégration de la poignée au mécanisme. Pour cela, nous avons commencé par nous pencher sur la création du boitier destiné à accueillir le mécanisme ainsi que l'électronique de notre projet.

### Création du boitier

L'objectif de ce boitier est d'accueillir et de protéger le mécanisme et les composants électroniques de ce joystick tout en laissant entrevoir les éléments du mécanisme en fonctionnement. Afin d'obtenir un boitier solide tout en prenant en compte les contraintes de l'impression 3D, nous avons développé une base coupée en son centre à l'horizontale permettant une impression en deux parties à plat sans supports destinée à accueillir des plaques en acrylique d'une épaisseur de 3 mm découpés à l'aide d'une découpeuse laser. Ces plaques sont transparentes afin de laisser apparaître les entrailles de notre commande à l'exception de la partie supérieure qui quant à elle est gravée du logo de notre groupe réalisé à l'occasion de ce projet.

![Boitier joystick 1](..\images\joystick_base_3_2024-Jun-10_08-46-02PM-000_CustomizedView42001792719.png)

*Modélisation du boitier sans mécanisme*

![Boitier joystick 2](..\images\joystick_base_3_2024-Jun-10_08-49-57PM-000_CustomizedView14066334213.png)

*Modélisation du boitier avec mécanisme*

Enfin nous avons imprimé les éléments constituants la base de ce boitier puis effectué les découpes laser nécessaires.

<video src="..\images\20240516_203518_h264.mp4" controls title="Title"  style="width: 100%;"></video>

*Impression 3D de la partie inférieure de la base du boitier*

![Boitier joystick 3](..\images\IMG_4049.jpg)

*Partie supérieure de la base du boitier*

### Développement du circuit imprimé

Afin de rendre la poignée du joystick interchangeable, nous avons décidé de développer un PCB sur-mesure dans le but de simplifier la connexion des composants électroniques en plus de les rendre modulables à l'aide de connecteurs JST 2,56 mm. De plus, ce PCB sert de base universelle dans la connexion de composants sur une carte Arduino Pro Micro, ce qui la rend compatible dans le cadre de la connexion des composants de la commande de gaz.

Afin de développer cette carte électronique, nous avons une fois de plus utilisé le logiciel KiCad puis y avons importé une bibliothèque comprenant la schématique et l'empreinte de notre carte électronique programmable. Dans un premier temps, nous nous sommes penchés sur la schématique de notre PCB en effectuant les connexions nécessaires de la carte électronique aux connecteurs JST après avoir défini le nombre total de câbles traversant le mécanisme pour arriver aux composants placés dans la poignée. Nous avons également relié chaque pin de l'Arduino Pro Micro à des pins parallèles afin de garder un accès total aux pins de cette dernière, le but étant de permettre de prototyper ou de modifier nos connexions avec les composants sans changer de circuit imprimé. Enfin nous avons ajouté les perçages de notre PCB.

![PCB 1](..\images\joystick_pcb_schématique.PNG)

*Schématique du circuit imprimé*

Nous sommes ensuite passé à la phase de routage du circuit imprimé. Pour cela, nous avons utilisé dans un premier temps le plugin Freeroute qui nous a permis d'avoir une idée du passage des différentes pistes. Nous avons ensuite routé chaque piste à la main après avoir défini la largeur des routes à 0.5 mm, ce qui est acceptable dans notre contexte puisque l'alimentation de nos composants ne demande pas beaucoup de puissance. Enfin nous avons placé un plan de masse sur les deux faces de notre PCB afin de simplifier son routage et réduire les interferances des signaux envoyés par les composants.

![PCB 2](..\images\joystick_pcb.PNG)

*Circuit électronique du circuit imprimé*

La conception de notre circuit imprimé terminé, nous l'avons intégré dans notre modélisation.

![PCB 3](..\images\Joystick_pcb_2024-Jun-10_03-39-58PM-000_CustomizedView7596536755.png)

*Rendu 3D du circuit imprimé*

![PCB 3](..\images\joystick_base_3_2024-Jun-10_04-39-38PM-000_CustomizedView29528511753.png)

*Rendu 3D du circuit imprimé intégré dans le boitier du joystick*

Après réception de ces circuits imprimés commandés auprès du fournisseur spécialisé dans ce domaine Aisler, nous avons eu l'occasion de procéder à la soudure des connecteurs JST et des broches de pins mâles et femelles.

![PCB 4](..\images\IMG_4075.jpg)

*Photo du circuit imprimé vierge et soudé*

### Câblage des composants électroniques

Dans le cadre du câblage des composants électroniques de la poignée du joystick, nous avons utilisé du câble électrique en PVC 24/AWG, une épaisseur de câble largement suffisante dans notre application. Nous avons protégé toutes les connexions à l'aide de gaine thermo-rétractable et installés les connecteurs JST à l'aide d'une pince à sertir.

![Câblage 1](..\images\Câblage2.jpg)

*Photo du câblage des composants électroniques du joystick*

![Câblage 2](..\images\Câblage1.jpg)

*Photo du câblage des composants électroniques du joystick*

## Montage final

Tout les élements composant notre commande étants opérationnels, nous sommes passés au montage final du joystick.

***Vidéo 3D du montage :***

<video src="..\images\Vidéo-montage-joystick.mp4" controls title="Title"  style="width: 100%;"></video>

***Model 3D du joystick :***

<script type="module" src="https://ajax.googleapis.com/ajax/libs/model-viewer/3.4.0/model-viewer.min.js"></script>

<model-viewer src="..\images\joystick.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls tone-mapping="commerce" poster="..\images\poster_joystick.webp" shadow-intensity="1"></model-viewer>

