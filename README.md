# L2-C

Ce répertoire contiendra à priori tous les exercices de C qu'auront eu les L2 int 1 de la promo 2024.

Prenez ce que vous voulez, si vous avez des questions posez les, MAIS évitez de prendre les exercices tels qu'ils sont.
Veuillez les modifier dans la forme (et/ou le fond), surtout si c'est pour un contrôle.

Zhou.

## Sommaire

- [Installation](#installation)
- [Exécuter les différents TDs](#affichage-des-diff%C3%A9rents-tds)
- [Erreurs](#erreurs)
- [Index des exercices](#index)

## Installation
### CLion
Lancez CLion, cliquez sur "Open/Import", selectionnez le dossier `L2-C`.

### CodeBlock
Créez un nouveau projet console. Faites <em>click droit</em>-><em>remove file from project</em> sur le fichier `main.c`. Déplacez tout les fichiers du git dans le dossier du projet. (Sur codeblock) Faites <em>click droit</em>-><em>add files...</em> sur le projet (icone codeblock dans <em>management</em> -> <em>Projects</em>). Selectionnez tous les fichiers `TD*_main.c`. Recommencez avec les fichiers du dossier `lib`. 

## Affichage des différents TDs
Les fonctions des TDs sont dans les fichiers qui leurs correspondent, exemple : toutes les fonctions touchant aux simple linked lists sont dans les fichier `SLL.h` et `simpleLinkedList.c` indépendamment du TD dans lequel elles sont demandées.

Cependant, chaque TD possède son propre main avec toutes les fonctions qui y sont demandées, exemple : `TD1_main.c` contient toutes les fonctions du premier TD.

### Run on CLion
Si vous souhaiter changer le main qui est build (sur CLion, qui peut être obtenu gratuitement via la licence étudiante) changer le nom du main dans `CMakeList.c`, exemple :

pour passer du TD 1 au TD 2 :
```c
cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C TD1_main.c SSL.h simpleLinkedList.c circledLinkedList.c CLL.h doubleLinkedList.c DLL.h)
```

On change `TD1_main.c` en `TD2_main.c` dans la ligne `add_executable( ... )`.

```c
cmake_minimum_required(VERSION 3.17)
project(TD_en_C C)

set(CMAKE_C_STANDARD 11)

add_executable(TD_en_C TD2_main.c SSL.h simpleLinkedList.c circledLinkedList.c CLL.h doubleLinkedList.c DLL.h)
```
Puis lancez le build (`maj + F10` ou <em>Run</em>-><em>Run \<project-name></em>).

### Run on CodeBlock
Mettez en commentaire tous les <em>main</em> sauf celui que vous souhaitez lancer, 
exemple : 
```c
#include <stdio.h>

/*
int main()
{
  printf("hello world");
}
*/
```
Puis faites <em>Build</em>-><em>Build and Run</em>.

## ERREURS
Si vous rencontrer une erreur, un crash, un exercice qui ne correspond pas à la consigne, vous êtes invités à me le signaler à `killian.zhou@efrei.net`. Veuillez à y préciser la nature du problème, la portion de code concerné et le/les fichiers correspondants. Merci.

## Index
Retrouvez [ici](https://github.com/gundamzhou/L2-C/blob/master/index.md) l'index des exercices ainsi que leurs descriptions (cliquer sur le numéro de ligne pour être renvoyé sur le fichier contenant l'exercercice). [page moodle](https://www.myefrei.fr/moodle/course/view.php?id=6870)<br/> licence description : Int EFREI de White Pepper S.A.S. est mis à disposition selon les termes de la licence Creative Commons Attribution - Pas d’Utilisation Commerciale - Partage dans les Mêmes Conditions 4.0 International. Les autorisations au-delà du champ de cette licence peuvent être obtenues à mailto://franck.lepoivre@platypus.academy

13/09/2020
