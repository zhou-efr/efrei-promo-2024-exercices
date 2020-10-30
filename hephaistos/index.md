# Index exercice Hephaistos

## Sommaire
- Listes
    - [Listes 1 P1](#listes-1-p1)
    - [Listes 1 P2](#listes-1-p2)
    - [Listes 1 P3](#listes-1-p3)
    - [Listes 2 P2](#listes-2-p1)
    - [Listes 2 P3](#listes-2-p2)
- Arbres
    - [Arbres 1 P1](#arbres-1-p1)
    - [Arbres 1 P2](#arbres-2-p2)
    - [Arbres 1 P3](#arbres-2-p3)
    - [Arbres 2 P1](#arbres-2-p1)
    - [Arbres 2 P2](#arbres-2-p2)
    - [Arbres 2 P3](#arbres-2-p3)
    
## Structures
La majorité des structures sont dans ces fichiers (SLL, Stack, Queue) : <br/>
[Element.h](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Element.h)<br/>
[Element.c](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Element.c)

## Listes 1 P1 
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/Liste-1/one.c)

- <strong>1.1 Parcourir intégralement une liste</strong> <br/>

Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui retournent la longueur d’une LSC.

-  <strong>1.2 Parcourir partiellement une liste</strong> <br/>

Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui retournent la position d’un élément donné en argument dans une liste. Ils doivent renvoyer \-1 dans le cas où l’élément ne se trouve pas dans la liste. On considérera que la position du premier élément est 1.

- <strong> 1.3 Compter le nombre d’occurences dans une liste</strong>

Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui retournent le nombre d’occurrences d’un élément donné en argument dans une liste.

- <strong> 1.4 Somme éléments d’une liste</strong><br/>

Concevoir un algorithme qui renvoie la somme des éléments d’une LSC d’entiers. 
    
    Exemple Si la liste à traiter est {5 → 12 → 42 → 55 → 42}, votre algorithme devra renvoyer 156.

- <strong> 1.5 Déterminer si une liste est strictement croissante</strong><br/>
          
Concevoir un algorithme qui renvoie vrai lorsque les valeurs des éléments d’une LSC d’entiers passée en argument sont strictement croissantes et qui renvoie faux dans le cas contraire.
## Listes 1 P2
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/Liste-1/two.c)

-  <strong>2.1 Ajouter un élément à une liste</strong> <br/>
Concevoir un algorithme qui ajoute un élément donné en argument à une position donnée dans une LSC. Si cette position est supérieure à la longueur de la liste, ajouter l’élément en queue de liste. Si la position donnée est 0, ajouter l’élément en tête de liste.
 
- <strong> 2.2 Supprimer un élément d’une liste</strong><br/>
Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui suppriment toutes les occurrences d’un élément donné en argument dans une LSC 
 
-  </strong>2.3 Inverser une liste simplement chaînée</strong><br/>
Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui inversent l’ordre d’une LSC. Il ne faut pas créer une nouvelle liste, il ne sera donc pas nécessaire d’effectuer d’allocation ou de libération de mémoire. 
 
- <strong> 2.4 Permuter deux éléments dans une liste</strong><br/>
Concevoir un algorithme qui permute deux éléments situés chacun à une position donnée en argument. Il faudra s’attacher à bien permuter les éléments et non pas les valeurs de ces éléments. Il faudra aussi prendre garde à gérer le cas particulier de la liste qui ne comporte que deux éléments
 
## Listes 1 P3
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/Liste-1/three.c)

- <strong> 3.1 Fusionner deux listes chaînées dont les valeurs des éléments sont croissantes</strong><br/>
Concevoir un algorithme qui prend en argument deux LSC dont les valeurs des éléments sont croissantes et qui retourne une seule LSC avec ces éléments dans un ordre croissant. Il ne faut pas créer une nouvelle liste, il ne sera donc pas nécessaire d’effectuer d’allocations ou de libérations de mémoire.

    Exemple Soit deux LSC : a = {2 → 7 → 9 → 12 → 13} et b = {1 → 2 → 4 → 5 → 15}.
    L’algorithme qui recevrait en argument ces deux listes renverrait alors {1 → 2 → 2 → 4 →5 → 7 → 9 → 12 → 13 → 15}.

- <strong>  3.2 Déterminer si une liste contient un cycle</strong><br/>
Concevoir un algorithme performant qui renvoie vrai si la liste passée en argument contient un cycle et faux dans le cas contraire.

- <strong>  3.3 Déterminer si une liste contient des doublons</strong><br />
Concevoir un algorithme performant qui renvoie vrai si la LSC d’entiers passée en argument contient des doublons et faux dans le cas contraire.
## Listes 2 P1
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/Liste-2/one-2.c)

- <strong>1.1 Parcourir une liste à rebours</strong> <br />
Concevoir un algorithme (itératif ou récursif, à votre convenance) qui log les valeurs d’une LSC en partant du dernier élément et en remontant au premier.
<br />Pour logger, utilisez la fonction fournie.

- <strong>1.2 Concaténer deux listes </strong><br />
Concevoir un algorithme qui concatène deux listes.
    
    ```Exemple Soit deux LSC : a = {a1 -> a2 -> . . . -> an} et b = {b1 -> b2 -> . . . -> bm}. L’algorithme qui recevrait en entrée ces deux listes produirait alors la liste {a1 -> a2 -> . . . -> an → b1 -> b2 -> . . . -> bm}.```

- <strong> 1.3 Parcourir intégralement une liste chaînée circulaire</strong><br/>
Concevoir un algorithme itératif qui retourne la longueur d’une LSC circulaire.

- <strong>  1.4 Convertir un tableau d’entiers en LDC</strong><br />
Concevoir un algorithme qui prend en argument un tableau d’entiers de taille arbitraire et qui retourne une LDC de même taille et dont la valeur des éléments sont dans le même ordre et les mêmes que celles du tableau.

- <strong>  1.5 Séparer une liste en deux listes</strong><br />
Concevoir un algorithme qui prend en argument une LSC et en argument par référence un élément de cette liste et qui sépare la liste donnée en argument en deux listes : la première, allant de l’élément en tête de liste à l’élément donné en argument (non inclus) et la seconde, allant de l’élément donné en argument (inclus) à l’élément en queue de liste. Il faudra prendre garde à bien traiter les multiples cas particuliers (élément absent, position, etc.). Note Cet algorithme ne renvoie aucune valeur. Il ne fait que traiter les données qui lui sont données en argumen
## Listes 2 P2
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/Liste-2/two-2.c)

- <strong>  2.1 Ajouter un tableau d’entiers à une liste</strong><br />
Concevoir un algorithme qui ajoute les valeurs d’un tableau d’entiers donné en argument à une position donnée dans une LSC d’entiers dans le même ordre. Si cette position est supérieure à la longueur de la liste, ajouter les éléments en queue de liste. Si la position donnée est 0, ajouter les éléments en tête de liste.
Note: Pour cet exercice, il peut être très judicieux de réutiliser les algorithmes que vous avez déjà rédigés.

- <strong>  2.2 Classer les éléments d’une liste d’entiers</strong><br />
En vous inspirant de l’algorithme du tri à bulles (bubble sort), concevez un algorithme qui prend en argument par référence une LSC d’entiers et qui la trie. Il faudra s’attacher à bien permuter les éléments et non pas les valeurs de ces éléments.

- <strong>  2.3 Modélisation des piles</strong><br />
En utilisant la structure de la LSC que vous avez manipulée jusqu’alors, proposez une structure de données d’une pile. Listez les algorithmes à réaliser pour traiter les fonctionnalités des piles.

- <strong> 2.4 Modélisation des files</strong><br />
En utilisant la structure de la LSC que vous avez manipulée jusqu’alors, proposez une structure de données d’une file. Listez les algorithmes à réaliser pour traiter les fonctionnalités des files.

- <strong>  2.5 Déterminer si une LDC est symétrique</strong><br />
Concevoir un algorithme qui renvoie vrai si la LDC d’entiers passée en argument est symétrique. <br
Définition Soit une LDC d’entiers de longueur n, on note la valeur de l’élément situé en k e position : vk. On dit alors que cette liste est symétrique si ∀k ∈ {1, 2, . . . , n} : vk = v(n−k+1) .

- <strong> 2.6 Convertir une LSC d’entiers en tableau</strong><br />
Concevoir un algorithme qui prend en argument une LSC d’entiers et qui retourne un tableau de même taille et dont la valeur des éléments sont dans le même ordre et les mêmes que celles de la liste

## Arbres 1 P1
[link to the files](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Arbre-1/one-3.c)
- <strong> 1.1 Compter le nombre d’éléments d’un arbre binaire </strong> <br/>
Concevoir un algorithme récursif qui retourne le nombre d’éléments d’un arbre binaire.
- <strong> 1.2 Rechercher un élément dans un arbre binaire </strong> <br/>
Concevoir un algorithme récursif, qui prend en argument un entier et un arbre binaire d’entiers, qui renvoie vrai si cet entier appartient à l’arbre binaire, et qui renvoie faux dans le cas contraire.
- <strong> 1.3 Modifier les éléments d’un arbre binaire </strong> <br/>
Concevoir un algorithme récursif qui parcourt un arbre binaire d’entiers en multipliant par deux le contenu de ses éléments.
- <strong> 1.4 Parcourir récursivement un arbre binaire </strong> <br/>
Après avoir rappelé la différence entre les parcours préfixe, suffixe et infixe, concevoir un algorithme récursif qui affiche les éléments d’un arbre binaire de telle sorte que chaque parent soit affiché après ses enfants (évalués de gauche à droite).
- <strong> 1.5 Supprimer un arbre binaire </strong> <br/>
Concevoir un algorithme récursif qui supprime un arbre binaire passé en argument, c'est-à-dire qui libère la mémoire de tous ses éléments dans un ordre judicieux, de façon à ne pas libérer un élément ayant des enfants occupant encore de la mémoire.

## Arbres 1 P2
[link to the files](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Arbre-1/two-3.c)
- <strong> 2.1 Créer un arbre ayant un nombre arbitraire d’éléments </strong> <br/>
Concevoir un algorithme, qui prend en argument un entier positif, qui crée et retourne un arbre binaire ayant un nombre d’éléments égal à cet entier.
- <strong> 2.2 Déterminer si un arbre binaire a un nombre pair de feuilles </strong> <br/>
Concevoir un algorithme récursif qui renvoie vrai lorsque l’arbre binaire passé en argument admet un nombre pair de feuilles et qui renvoie faux dans le cas contraire.
- <strong> 2.3 Rechercher le niveau de profondeur d’un élément dans un arbre binaire </strong> <br/>
Concevoir un algorithme récursif, qui prend en argument un entier et un arbre binaire d’entiers, qui renvoie le niveau de profondeur (0 pour la racine,1 pour le 1er niveau et ainsi de suite) de cet entier s’il appartient à l’arbre binaire, et qui renvoie −1 dans le cas contraire.

## Arbres 1 P3
[link to the files](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Arbre-1/three-3.c)
- <strong> 3.1 Créer un arbre binaire à partir d’un tableau  </strong> <br/>
Concevoir un algorithme récursif, qui prend en argument un tableau d’entiers de taille arbitraire, qui crée et retourne un arbre binaire d’entiers équilibré de même taille contenant les éléments de ce tableau.
- <strong> 3.2 Copier un arbre binaire </strong> <br/>
Concevoir un algorithme, qui prend en argument un arbre binaire d’entiers, qui retourne un nouvel arbre binaire identique à celui passé en argument : le nouvel arbre doit avoir le même nombre d’éléments, répartis de la même façon, avec les mêmes valeurs. L’arbre retourné ne doit bien entendu pas dépendre de la mémoire allouée pour les éléments de l’arbre « modèle ».

## Arbres 2 P1
[link to the files](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Arbre-2/onefour.c)
- <strong> 1.1 Parcourir itérativement un arbre binaire </strong> <br/>
Concevoir un algorithme itératif utilisant une pile qui log tous les éléments d’un arbre binaire dans un ordre préfixe.
Un algorithme récursif passera évidement les tests. Ce n'est pas l'objectif...
- <strong> 1.2 Parcours en largeur d’un arbre binaire  </strong> <br/>
Concevoir un algorithme itératif, qui log tous les éléments d’un arbre binaire suivant un parcours un largeur (d’abord la racine, puis les éléments du 1er niveau, puis ceux du 2e et ainsi de suite).
- <strong> 1.3 Créer un nœud d’un arbre binaire de recherche  </strong> <br/>
Concevoir un algorithme qui prend en entrée un entier, et qui crée et renvoie un nœud d’un arbre binaire de recherche avec cette valeur.
- <strong> 1.4 Afficher un arbre </strong> <br/>
Concevoir un algorithme qui affiche un arbre avec un ordre préfixe (de gauche à droite).
Notez que cet arbre n’est pas forcément binaire : chaque nœud peut avoir un nombre arbitraire d’enfants.
- <strong> 1.5 Ajouter un élément en bas d’un arbre binaire  </strong> <br/>
Concevoir un algorithme, qui prend en argument un entier et un arbre binaire de recherche d’entiers, qui ajoute cet entier en bas de cet arbre (le nœud qui sera créé sera donc une feuille). La descente dans l’arbre pour l’ajout de ce nœud devra se faire aléatoirement.

## Arbres 2 P2
[link to the files](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Arbre-2/twofour.c)
- <strong> 2.1 Ajouter un élément à un arbre binaire de recherche (BST) </strong> <br/>
Concevoir un algorithme, qui prend en argument un entier et un arbre binaire de recherche d’entiers, qui ajoute cet entier à cet arbre.
- <strong> 2.2 Retirer un élément à un arbre binaire de recherche </strong> <br/>
Concevoir un algorithme, qui prend en argument un entier et un arbre binaire de recherche d’entiers, qui retire dans cet arbre le nœud dont la valeur est cet entier.

## Arbres 2 P3
[link to the files](https://github.com/zhou-efr/L2-C/blob/master/hephaistos/Arbre-2/threefour.c)
- <strong> 3.1 Équilibrer un arbre binaire de recherche </strong> <br/>
Concevoir un algorithme, qui prend en argument un arbre binaire de recherche, et qui l’équilibre (comparable à un arbre AVL).
