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

**Modélisation terminée :**

