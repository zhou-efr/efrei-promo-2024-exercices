# L2-C

Ce répertoire contiendra à priori tout les exercices de C qu'auront eu les L2 int 1 de la promo 2024.

Prenez ce que vous voulez, si vous avez des question posez les, MAIS évitez de prendre les exercices tel qu'ils sont.
Veuillez les modifier dans la forme (et/ ou le fond), surtout si c'est pour un controle.

zhou.

## Affichage des differents TD
Les fonctions des TDs sont dans les fichiers qui leurs corespondent, exemple : toutes les fonctions touchant aux simple linked lists sont dans les fichier `SLL.h` et `simpleLinkedList.c` independemment du TD dans lequel elles sont demandées. <br/>
Cependant chaque TD possède son propre main avec toutes les fonctions qui y sont demandées, exemple : `TD1_main.c` contiens tous les fonctions du premier TD. <br/>
Si vous souhaiter changer le main qui est build (sur CLion, obtenable gratuitement via la licence étudiante) changer le nom du main dans `CMakeList.c`, exemple :

Pour passer du TD 1 au TD 2 :
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

12/09/2020
