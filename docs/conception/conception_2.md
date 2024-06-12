---
layout: default
title: Commande de gaz
parent: Conception et prototypage
nav_order: 2
---

# Conception et prototypage de la commande de gaz

## Mécanisme de frein

La première contrainte rencontrée dans la conception de la commande de gaz correspond au frein des poignées lorsqu'elles sont poussées ou tirées. Pour cela, nous nous sommes orientés dans un premier temps vers un système de vérins pneumatiques fixés sous les axes de rotations des deux poignées. Malheureusement, ce système était trop encombrant et couteux dans notre application. Nous nous sommes alors orientés vers l'utilisation de joints de plomberies mis en contrainte entre une piece fixe et la poignée. 

Nous avons donc développé un système de frein sur mesure afin de répondre spécifiquement à nos attentes. La vis fait office d'axe de rotation et permet de compresser le joint entre la pièce fixe et la poignée, l'intensité du frein peut alors être réglée individuellement sur chaque poignée. Un écrou est inséré dans la commande de gaz et un contre écrou permet d'entrainer la vis lors de la rotation de la poignée. Une pièce s'emboitant sur ce contre écrou et soutenue par un roulement est destinée à acceuillir l'aimant permettant de mesurer la rotation de l'axe et donc le mouvement de la poignée une fois de plus à l'aide du capteur à effet Hall AS5600.

![Mécanisme cmd gaz 1](..\images\mécanisme_commande_de_gaz.png)

*Prototype du mécanisme de frein*

![Mécanisme cmd gaz 2](..\images\mécanisme_commande_de_gaz_section.png)

*Analyse de section du prototype du mécanisme de frein*

Nous avons ensuite prototypé ce mécanisme afin de valider son fonctionnement et son intégration définitive dans la commande de gaz.

![Mécanisme cmd gaz 3](..\images\IMG_4076.jpg)

*Prototype du mécanisme de frein*

## Modélisation de la commande

Lors de la phase de modélisation de la commande de gaz, nous avons dans un premier temps reproduit à l'échelle 1:1 les poignées de commande de gaz d'un avion de combat A-10C tout en prenant en compte le passage des cables des futurs composants électroniques, puis avons intégré ces commandes sur notre mécanisme de frein mis en miroir.

![cmd gaz 1](..\images\proto_1_2024-Jun-12_09-02-01PM-000_CustomizedView39706856709.png)

*Poignées des commandes de gaz*

Enfin nous avons intégré les différents composants électroniques soumis par notre cahier des charges. 

![cmd gaz 2](..\images\proto_1_2024-Jun-12_09-04-23PM-000_CustomizedView47652743778.png)

*Poignées des commandes de gaz avec composants électroniques*

Une fois les poignée et leur mécanisme terminés, nous avons développé un boitier quasi identique au boitier du joystick afin d'avoir un package joystick / commande de gaz cohérant.

![cmd gaz 3](..\images\proto_1_2024-Jun-12_09-08-41PM-000_CustomizedView34933864181.png)

*Boitier de la commande de gaz*

![cmd gaz 4](..\images\14f5079c-c17f-4ea4-ae73-9d4b9c500ce7.PNG)

*Intégration des poignées et du mécanisme dans le boitier*

Pour finir, nous avons intégré le reste des composants électroniques et développés deux encoders caps pour les encodeurs rotatifs.

**Modélisation terminée :**

![cmd gaz 5](..\images\proto_1_2024-Jun-10_06-38-26PM-000_CustomizedView9001261200.png)

## Impression des composants

La modélisation achevée, nous sommes passés à la phase d'impression des composants afin de procéder au montage de la commande.

<video src="..\images\gaz_droit.mp4" controls title="Title"  style="width: 100%;"></video>

*Impression d'une partie de la poignée droite de la commande de gaz*

## Câblage des composants électroniques

Suite à l'impression des composants, nous sommes passés au câblage des différents composants électroniques présents dans la commande de gaz. De plus, nous avons utilisé le circuit imprimé du joystick afin de connecter nos composants à la carte Arduino Pro Micro.

![cmd gaz 6](..\images\IMG_4090.jpg)

*Photo du câblage de la poignée gauche*

![cmd gaz 7](..\images\IMG_4091.jpg)

*Photo des deux poignées cablées*

Ne possédant plus de connecteurs JST, nous avons soudé les composants directement sur le PCB.

![cmd gaz 8](..\images\IMG_4101.jpg)

## Découpe laser

Afin de procéder au montage final, nous avons effectuer les découpes et gravures nécessaires au laser avec des plaques d'Acrylique 3 mm.

![cmd gaz 9](..\images\IMG_4200.jpg)

*Face du boitier découpée au laser*

<video src="../images/decoupe.mp4" controls title="Title"  style="width: 100%;"></video>

*Découpe laser de la partie supérieure du boitier*
