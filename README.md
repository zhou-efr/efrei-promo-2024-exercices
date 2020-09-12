# L2-C

Ce répertoire contiendra à priori tous les exercices de C qu'auront eu les L2 int 1 de la promo 2024.

Prenez ce que vous voulez, si vous avez des questions posez les, MAIS évitez de prendre les exercices tels qu'ils sont.
Veuillez les modifier dans la forme (et/ou le fond), surtout si c'est pour un contrôle.

Zhou.

## Sommaire

- [Affichage des différents TDs](#affichage-des-diff%C3%A9rents-tds)
- [Erreurs](#erreurs)

## Affichage des différents TDs
Les fonctions des TDs sont dans les fichiers qui leurs correspondent, exemple : toutes les fonctions touchant aux simple linked lists sont dans les fichier `SLL.h` et `simpleLinkedList.c` indépendamment du TD dans lequel elles sont demandées.

Cependant, chaque TD possède son propre main avec toutes les fonctions qui y sont demandées, exemple : `TD1_main.c` contient toutes les fonctions du premier TD.

Si vous souhaiter changer le main qui est build (sur CLion, qui peut être obtenu gratuitement via la licence étudiante) changer le nom du main dans `CMakeList.c`, exemple :

pour passer du TD 1 au TD 2 :
```c
cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C SSL.h simpleLinkedList.c TD1_main.c circledLinkedList.c CLL.h doubleLinkedList.c DLL.h)
```

On change `TD1_main.c` en `TD2_main.c` dans la ligne `add_executable( ... )`.

```c
cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C SSL.h simpleLinkedList.c TD2_main.c circledLinkedList.c CLL.h doubleLinkedList.c DLL.h)
```

## ERREURS
Si vous rencontrer une erreur, un crash, un exercice qui ne correspond pas à la consigne, vous êtes invités à me le signaler à `killian.zhou@efrei.net`. Veuillez à y préciser la nature du problème, la portion de code concerné et le/les fichiers correspondants. Merci.

12/09/2020
