---
layout: default
title: Commande de gaz
parent: Conception et prototypage
nav_order: 2
---

# Conception et prototypage

# 1 modélisation 3D et prototypage physique.

La conception du joystick a débuté par la modélisation 3D de celui-ci en partant des inspirations citées avant même si beaucoup de modification ont été effectuées par rapport a cette inspirations. Une fois que la modélisation était adaptée a nos idées nous avons commencé à imprimer les prototypes pour avoir un apperçu réel du joystick et commencer a y placer les composants préalablement placés sur la modélisation mais cette foi-ci en réel pour vérifier que toutes les mesures étaient bonnes. Une fois cette étape validé nous avons pu passer à la connection des capteurs sur une carte arduino.


![modélisation de la base du joystick](..\images\poster.webp)

<script type="module" src="https://ajax.googleapis.com/ajax/libs/model-viewer/3.4.0/model-viewer.min.js"></script>

<model-viewer src="images/joystick_prototype_v3 copy.glb" ar ar-modes="webxr scene-viewer quick-look" camera-controls tone-mapping="commerce" poster="images/poster copy.webp" shadow-intensity="1">
   
</model-viewer>

# 2 test programmation des capteurs.

Pour programmer les capteurs "AS 5800" nous avons utilisés une carte arduino pro_micro 