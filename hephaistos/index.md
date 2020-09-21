# Index exercice Hephaistos

## Sommaire

- [Listes 1 P1](#listes-1-p1)
- [Listes 1 P2](#listes-1-p2)
- [Listes 1 P3](#listes-1-p3)
- [Listes 2 P1](#listes-2-p1)
- [Listes 2 P2](#listes-2-p2)

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
Concevoir un algorithme qui prend en argument une LSC et en argument par référence un élément de cette liste et qui sépare la liste donnée en argument en deux listes : la première, allant de l’élément en tête de liste à l’élément donné en argument (non inclus) et la seconde, allant de l’élément donné en argument (inclus) à l’élément en queue de liste. Il faudra prendre garde à bien traiter les multiples cas particuliers (élément absent, position, etc.). Note Cet algorithme ne renvoie aucune valeur. Il ne fait que traiter les données qui lui sont données en argument

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
