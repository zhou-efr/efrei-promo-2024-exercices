# Index exercice Hephaistos

## Sommaire

- [Listes 1 P1](#listes-1-p1)
- [Listes 1 P2](#listes-1-p2)
- [Listes 1 P3](#listes-1-p3)


## Listes 1 P1 
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/one.c)

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
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/two.c)

-  <strong>2.1 Ajouter un élément à une liste</strong> <br/>
Concevoir un algorithme qui ajoute un élément donné en argument à une position donnée dans une LSC. Si cette position est supérieure à la longueur de la liste, ajouter l’élément en queue de liste. Si la position donnée est 0, ajouter l’élément en tête de liste.
 
- <strong> 2.2 Supprimer un élément d’une liste</strong><br/>
Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui suppriment toutes les occurrences d’un élément donné en argument dans une LSC 
 
-  </strong>2.3 Inverser une liste simplement chaînée</strong><br/>
Concevoir deux algorithmes, l’un itératif, l’autre récursif, qui inversent l’ordre d’une LSC. Il ne faut pas créer une nouvelle liste, il ne sera donc pas nécessaire d’effectuer d’allocation ou de libération de mémoire. 
 
- <strong> 2.4 Permuter deux éléments dans une liste</strong><br/>
Concevoir un algorithme qui permute deux éléments situés chacun à une position donnée en argument. Il faudra s’attacher à bien permuter les éléments et non pas les valeurs de ces éléments. Il faudra aussi prendre garde à gérer le cas particulier de la liste qui ne comporte que deux éléments
 
## Listes 1 P3
[link to the files](https://github.com/gundamzhou/L2-C/blob/master/hephaistos/three.c)

- <strong> 3.1 Fusionner deux listes chaînées dont les valeurs des éléments sont croissantes</strong><br/>
Concevoir un algorithme qui prend en argument deux LSC dont les valeurs des éléments sont croissantes et qui retourne une seule LSC avec ces éléments dans un ordre croissant. Il ne faut pas créer une nouvelle liste, il ne sera donc pas nécessaire d’effectuer d’allocations ou de libérations de mémoire.

    Exemple Soit deux LSC : a = {2 → 7 → 9 → 12 → 13} et b = {1 → 2 → 4 → 5 → 15}.
    L’algorithme qui recevrait en argument ces deux listes renverrait alors {1 → 2 → 2 → 4 →5 → 7 → 9 → 12 → 13 → 15}.

- <strong>  3.2 Déterminer si une liste contient un cycle</strong><br/>
Concevoir un algorithme performant qui renvoie vrai si la liste passée en argument contient un cycle et faux dans le cas contraire.

- <strong>  3.3 Déterminer si une liste contient des doublons</strong><br />
Concevoir un algorithme performant qui renvoie vrai si la LSC d’entiers passée en argument contient des doublons et faux dans le cas contraire.