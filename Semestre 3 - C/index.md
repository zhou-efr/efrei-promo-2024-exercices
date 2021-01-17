# Table Of Contents
[<strong>TD 1</strong>](#TD-1)
- [1 Introduction level](#11-Introduction-level)
- [2 Medium Level](#12-Medium-Level)
- [3 Advanced level](#13-Advanced-level)

[<strong>TD 2</strong>](#TD-2)
- [1 Introduction level](#21-Introduction-level)
- [2 Medium Level](#22-Medium-Level)
## TD 1
### 1.1 Introduction level
- 1.1 Get the size of a list <br/>
Create two algorithms, an iterative one and a recursive one, returning the length of a Singly Linked List (SLL).
[line 102](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c) 
<br/>iterative one at [line 603](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
- 1.2 Going through part of a list <br/>
Create two algorithms, an iterative one and a recursive one, returning the position of the first occurence of a given value in a list. If the given value is not found, return -1. The first Element has a position of 1.
[line 120](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
<br/>iterative one at [line 622](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 1.3 Count occurrences in a list <br/>
Create two algorithms, an iterative one and a recursive one, returning the number of occurrences of a given element.
[line 143](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
<br/>iterative one at [line 646](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 1.4 Sum elements in a list <br/>
Create two algorithms, an iterative one and a recursive one, returning the sum of every data in a SLL containing integers. <br/>
<strong>Example</strong> : if the list to be processed is {5 → 12 → 42 → 55 → 42}, your algorithm will return 156.
[line 164](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
<br/>iterative one at [line 669](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 1.5 Determine if a list is in ascending order<br/>
Create an algorithm returning true when the values inside a given SLL are in strictly ascending order, and false otherwise.
[line 182](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

### 1.2 Medium Level
- 2.1 Add an element to a list <br/>
Create an algorithm that adds a given element to a given position on a SLL. If this position is higher than the length of the list, add it at the end. If the given position is 0 or less, add it at the beginning of the list.
[line 205](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 2.2 Remove an element from a list <br/>
Create two algorithms, an iterative one and a recursive one, removing all occurrences of a given element in a SLL.
[line 226](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
<br/>iterative one at [line 688](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 2.3 Reverse a SLL <br/>
Create two algorithms, an iterative one and a recursive one, that reverse the order of a SLL. Do not create a new list, so no memory allocation should be used.
[line 260](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
<br/>iterative one at [line 721](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 2.4 Switch two elements in a SLL <br/>
Create an algorithm switching two elements at given positions. Switch the elements, not just the data they contain. Be careful, don’t forget the case where the list only has two elements !
[line 283](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

### 1.3 Advanced level
- 3.1 Merge two ascending ordered lists <br/>
    Create an algorithm taking two ascending ordered lists as parameters, and returning a single list, in an ascending order.
Do not create a new list, so no memory allocation should be used. <br/>
<strong>Example</strong> : list a ={2 → 7 → 9 → 12 → 13} and list b ={1 → 2 → 4 → 5 → 15}
Your returned list should be {1 → 2 → 2 → 4 → 5 → 7 → 9 → 12 → 13 → 15}
[line 358](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 3.2 Determine if a list has a cycle <br/>
Create an algorithm returning true if the given SLL is circular at some point, false otherwise.
[line 23](https://github.com/gundamzhou/L2-C/blob/master/lib/circledLinkedList.c)

- 3.3 Determine if a list has doubles <br/>
Create an algorithm returning true if the given SLL has doubles, and false otherwise.
[line 404](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

## TD2
### 2.1 Introduction level
- 1.1 Go through a list backwards <br/>
Create an algorithm (recursive or iterative, as you wish), displaying the values of a SLL from the last element to the first.
[line 431](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 1.2 Concatenate two lists <br/>
Create an algorithm concatenating two given lists. <br/>
<strong>Example</strong> : list a ={a1 → a2 → ⋅⋅⋅ → an} and list b ={b1 → b2 → ⋅⋅⋅ → bm}. Your algorithm should return the list {a1 → a2 → ⋅⋅⋅ → an → b1 → b2 → ⋅⋅⋅ → bm}. <br/>
<strong>Note</strong> : See what happens if you free your lists after the call.
[line 447](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 1.3 Go through a circular list <br/>
Create an iterative algorithm, returning the length of a circular SLL. <br/>
<strong>Note</strong> : Now try it in recursive...
[line 33](https://github.com/gundamzhou/L2-C/blob/master/lib/circledLinkedList.c)

- 1.4 Convert an array of integers to a list <br/>
Create an algorithm that takes a given integer array of arbitrary size, and returns a list containing the same elements, in the same order.
[line 466](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 1.5 Split a list into two lists <br/>
Create an algorithm taking as arguments a list, and as argument by reference an element of this list. Your algorithm will split the list in two : one starting with the first element of the given list and ending with the given element (excluded), and the other starting at the given element (included) and ending with the last element of the given list. <br/>
<strong>Note</strong> : your list does not return any value, it just processes the given data. 
[line 488](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

### 2.2 Medium level
- 2.1 Add an array of integers to a list <br/>
Create an algorithm adding the values of a given array of integers, at a given position, to a SLL. If the given position is bigger than the size of the list, add the elements at the end of the list. If the given position is 0, add them at the start of the list.
Adapt your algorithm to do the same for a DLL. <br/>
<strong>Note</strong> : Be smart and lazy, reuse the code you have already written before.
[SLL line 508](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c) <br/>
[DLL line 147](https://github.com/gundamzhou/L2-C/blob/master/lib/doubleLinkedList.c)

- 2.2 Order the elements of a list of integers <br/>
By taking inspiration from the bubble sort, create an algorithm sorting a given SLL of integers.
Be sure to swap the elements you are handling, and not just their values.<br/>
<strong>Note</strong> : you can compare the complexity and the time your algorithm takes with other sorting algorithms. <br/>
<strong>Note 2</strong> : a quicker sorting method is not necessarily the best option if its implementation is complicated. 
[line 569](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)

- 2.3 Stacks modelling <br/>
Using the structure of a now familiar SLL, offer a structure to implement a stack.
List all the algorithms you’ll need to use your stack (stack, unstack…)

- 2.4 Queues modelling <br/>
Using the structure of a SLL, offer a structure to implement a queue.
List all the algorithms you’ll need to use your queue .

- 2.5 Determine if a given DLL is symmetrical <br/>
Create an algorithm returning true if the given DLL or integers is symmetrical.
A DLL is symmetrical if ∀k ∈{1,2,...,n}∶ vk = v(n−k+1). vi being the element of position i in the list.
[line 173](https://github.com/gundamzhou/L2-C/blob/master/lib/doubleLinkedList.c)

- 2.6 Convert a SLL of integers to an array <br/>
Create an algorithm that takes a given integer SLL , and returns an array of the same size containing the same elements, in the same order.
[line 581](https://github.com/gundamzhou/L2-C/blob/master/lib/simpleLinkedList.c)
