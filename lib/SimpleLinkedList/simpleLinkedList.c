/*
 * Name : simpleLinkedList.c
 * Date of creation : 12/09/2020
 * Date of last update : 14/09/2020
 * author(s) : zhou
 */
#include "SLL.h"
#include <stdlib.h>
#include <stdio.h>

Node* initSLL(int size)
{
    /*
     * initSLL :
     * * size : integer which correspond to the size of the created SLL
     *
     * for loop which create nodes, start at 1 since the last one doesn't have to initialize a next node.
     */

    Node* star = (Node*)malloc(sizeof(Node));
    Node* buffer = star;
    for (int i = 1; i < size; i++) {
        buffer->data = 0;
        buffer->next = (Node*)malloc(sizeof(Node));
        buffer = buffer->next;
    }

    buffer->data = 0;
    buffer->next = 0;

    return star;
}

void userFulfillSLL(Node* node)
{
    /*
     * userFulfillSLL :
     * * node : the first node of the SLL we want to fill
     *
     * let the user fulfill an initialized SLL with value entered on a terminal.
     */

    if(node != 0)
    {
        printf("enter a value :");
        scanf("%d", &(node->data));
        userFulfillSLL(node->next);
    }
}

void to_str(Node* node)
{
    /*
     * to_str :
     * * node : the first node of the SLL we want to fill
     *
     * display in a single line, without going to next line, all the element of a SLL with a semicolon.
     */

    if(node != 0)
    {
        printf(" %d;", node->data);
        to_str(node->next);
    }
}

void free_SLL(Node* node)
{
    /*
     * free_SLL :
     * * node : the first node of the SLL we want to fill
     *
     * free an SLL.
     */

    if(node != 0)
    {
        free_SLL(node->next);
        free(node);
    }
}

Node* get_index(Node* node, int index)
{
    /*
     * get_index :
     * * node : the first node of the SLL we want to fill
     * * index : the position from 0 in the SLL of the researched node
     *
     * recursively search a node and return it.
     */

    if (node == 0) {
        return 0;
    }else if (index == 0){
        return node;
    }else{
        return get_index(node->next, index-1);
    }
}

int len(Node* node)
{
    /*
     * len :
     * node : the first node of the SLL we want to fill
     *
     * recursively return the size of a SLL.
     */

    if (node == 0)
    {
        return 0;
    }else
    {
        return len(node->next) + 1;
    }
}

int first_occurrence(Node* node, int value)
{
    /*
     * first_occurrence :
     * * node : the first node of the SLL we want to fill
     * * value : integer corresponding to the searched value
     *
     * recursively count the first position where is 'value'. If it isn't in the list then the function reach the end of
     * the SLL then we return -1 which is keep thanks to a ternary condition.
     */

    if (node == 0)
    {
        return -1;
    }else if(node->data == value){
        return 1;
    }else
    {
        int returned = first_occurrence(node->next, value);
        return (returned >= 0)?(returned + 1):-1;
    }
}

int number_of(Node* node, int value)
{
    /*
     * number_of :
     * * node : the first node of the SLL we want to fill
     * * value : integer corresponding to the searched value
     *
     * recursively count the number of node which the data equal to 'value'.
     */

    if (node == 0)
    {
        return 0;
    }else if(node->data == value){
        return number_of(node->next, value) + 1;
    }else
    {
        return number_of(node->next, value);
    }
}

int sum(Node* node)
{
    /*
     * sum :
     * * node : the first node of the SLL we want to fill
     *
     * recursively count the number of nodes in a SLL.
     */

    if(node == 0)
    {
        return 0;
    }else
    {
        return sum(node->next) + node->data;
    }
}

int ascending(Node* node)
{
    /*
     * ascending :
     * * node : the first node of the SLL we want to fill
     *
     * Check if a SLL is in ascending order.
     */

    Node* buffer = node;

    if(buffer == 0)
    {
        return 1;
    }
    
    while (buffer->next != 0)
    {
        if (buffer->data > buffer->next->data)
        {
            return 0;
        }
        buffer = buffer->next;
    }

    return 1;
}

void insert(Node** l, Node* nNode, int pos)
{
    /*
     * insert :
     * * node : the first node of the SLL we want to fill
     * * nNode : the node which we want to insert
     * * position : the position where we want to insert the new node
     *
     * recursively insert a node.
     */
    if(l != NULL)
    {
        if(*l == NULL || pos <= 1)
        {
            Node* buffer = *l;
            (*l) = nNode;
            (*l)->next = buffer;
        }else{
            insert(&((*l)->next), nNode, pos-1);
        }
    }
}

void delete(Node* node, int value)
{
    // /!\ don't work, will be corrected soon

    /*
     * delete :
     * * node : the first node of the SLL we want to fill
     * * value : the value of nodes we want to remove
     *
     * recursively remove all the nodes which have as data 'value'. NB : when find a node to delete, it delete it and
     * test again the current node (since it check the node after the current one).
     *
     * /!\ error if the 1st node == value, will be corrected soon
     */

    if (node != 0)
    {
        if (node->data == value)
        {
            Node* buffer = node->next;
            node->data = node->next->data;
            node->next = node->next->next;
            free(buffer);
            delete(node, value);
        }else
        {
            if(node->next->next == 0 && node->next->data == value)
            {
                free(node->next);
                node->next = 0;
            }else
            {
                delete(node->next, value);
            }
        }
    }
}

Node* revert(Node* node)
{
    /*
     * revert :
     * * node : the first node of the SLL we want to fill
     *
     * reverse a SLL. NB : don't forget to set the node next value to 0 even if it will be changed because the last one
     * (which was the first one) will still point to it's previous next and it will give a loop (the last one pointing
     * to a node which point on itself).
     */

    if(node->next == 0)
    {
        return node;
    }else
    {
        Node* buffer = revert(node->next);
        node->next->next = node;
        node->next = 0;
        return buffer;
    }
}

void switchInSLL(Node** l, int pos1, int pos2)
{
    /*
     * switchInSLL :
     * * node : the first node of the SLL we want to fill
     * * index1 : the position of the first node FROM 0
     * * index2 : the position of the second node FROM 0
     *
     * switch two node in a SLL. A little bit stodgy but interesting. NB : when switching first change the value of next
     * in previous nodes since if index 1 and index 2 are consecutive buffer_first will point on itself (or smthng like
     * that)
     */

    if(*l == 0){return;}
    if(pos1 == pos2){return;}

    int first = (pos1 > pos2)?pos2:pos1;
    int second = (pos1 > pos2)?pos1:pos2;
    int size = 0;

    Node* buffer = *l;

    while(buffer != 0){buffer = buffer->next;size++;}
    buffer=(*l);
    size--;

    if(first < 0)
        first = 0;

    if(second > size)
        second = size;

    Node* ante = 0;
    Node* pos_1 = 0;
    Node* post = 0;
    Node* pos_2 = 0;

    int i = 0;

    while(second >= 0)
    {
        //check first
        if (first == 1)
            ante = buffer;
        else if (first == 0)
            pos_1 = buffer;

        //check second
        if (second == 1)
            post = buffer;
        else if( second == 0)
            pos_2 = buffer;

        // I know that it possible to fusion this and the previous condition
        // but it clearer like that
        if(pos_2 != 0)
        {
            // replacing the next of the next before pos1
            if (pos1 >= 0)
                (*l) = pos_2;
            else
                ante->next = pos_2;

            // replacing the next of the next before pos2
            post->next = pos_1;

            // storing the node after the current one
            buffer = pos_2->next;

            // replacing the next of the current node with the next of pos_1
            pos_2->next = pos_1->next;

            // doing the same for pos_1
            pos_1->next = buffer;
        }else
        {
            buffer = buffer->next;
        }

        first --;
        second --;
    }
}

Node* ascendingFusionGL(Node* l1, Node* l2)
{
    /*
     * author : guerric lebihan
     * ascendingFusion :
     * * l1 : the first node of the SLL
     * * l2 : the first node of the second SLL
     *
     * merge two SLL, already ordered, in the ascending order and return the first node of the new SLL. NB : compare
     * firsts nodes first for l1 simpler loop.
     */
        if(l1 != NULL)
        {
            if(l2 != NULL)
            {
                if(l1->data < l2->data)
                {
                    l1->next = ascendingFusionGL(l1->next,l2);
                    return l1;
                }
                else
                {
                    l2->next = ascendingFusionGL(l1,l2->next);
                    return l2;
                }
            }
            return l1;
        }
        if(l2 != NULL)
        {
            return l2;
        }
        return NULL;
    }   
Node* ascendingFusion(Node* l1, Node* l2)
{
    /*
     * ascendingFusion :
     * * l1 : the first node of the SLL
     * * l2 : the first node of the second SLL
     *
     * merge two SLL, already ordered, in the ascending order and return the first node of the new SLL. NB : compare
     * firsts nodes first for l1 simpler loop.
     */

    if (l1 == 0){return l2;
    }else if (l2 == 0){return l1;
    }else if(l1 == l2){return l1;
    }

    Node* buffer_a = l1, * buffer_b = l2, * buffer_c = 0;

    if (buffer_a->data <= buffer_b->data)
    {
        buffer_c = buffer_a;
        buffer_a = buffer_a->next;
    }else
    {
        buffer_c = buffer_b;
        buffer_b = buffer_b->next;
    }

    while (buffer_a != 0 && buffer_b != 0)
    {
        if (buffer_a->data <= buffer_b->data)
        {
            buffer_c->next = buffer_a;
            buffer_a = buffer_a->next;
        }else
        {
            buffer_c->next = buffer_b;
            buffer_b = buffer_b->next;
        }
        buffer_c = buffer_c->next;
    }

    if (buffer_a == 0 && buffer_b != 0){buffer_c->next = buffer_b;
    }else if (buffer_b == 0 && buffer_a != 0){buffer_c->next = buffer_a;}

    return (l1->data <= l2->data) ? l1 : l2;
}

int isDuplicates(Node* node)
{
    /*
     * isDuplicates :
     * * node : the first node of the SLL
     *
     * return true if there's two time a value in a SLL, else return false.
     */

    Node* buffer = node, * buffer2 = 0;

    while (buffer->next != 0)
    {
        buffer2 = node;
        while(buffer2->next != buffer)
        {
            if (buffer->data == buffer2->data)
            {
                return 1;
            }
            buffer2 = buffer2->next;
        }
        buffer = buffer->next;
    }
    return 0;
}

void reversed_to_str(Node* node)
{
    /*
     * to_str :
     * * node : the first node of the SLL we want to fill
     *
     * display in a single line, without going to next line, all the element of a SLL with a semicolon from the end.
     */

    if (node != 0)
    {
        reversed_to_str(node->next);
        printf(" %d;", node->data);
    }
}

void concatenateSLL(Node* destination, Node* target)
{
    /*
     * concatenateSLL :
     * * destination : SLL which will be extended
     * * target : extension
     *
     * add a SLL at the end of another.
     */

    if(destination->next == 0)
    {
        destination->next = target;
    }else
    {
        concatenateSLL(destination->next, target);
    }
}

Node* array_to_SLL(int* target, int size)
{
    /*
     * array_to_SLL :
     * * target : array of int (pointer to an int)
     * * size : size of the array
     *
     * convert an array of integer into a SLL and return it's first node.
     */

    Node * start = (Node*)malloc(sizeof(Node)), * buffer = start;

    for (int i = 0; i < size; ++i)
    {
        buffer->data = target[i];
        buffer->next = (i+1 < size)?(Node*)malloc(sizeof(Node)):0;
        buffer = buffer->next;
    }

    return start;
}

void split(Node** l, Node* e)
{
    /*
     * split :
     * * start : the first node of the SLL
     * * cut : the first node of the new SLL
     *
     * split a SLL into two SLL.
     */

    if ((*l) != 0)
    {
        if((*l) == e){
            (*l) = 0;
        }
        else if ((*l)->next == e)
        {
            (*l)->next = 0;
        }else{
            split(&((*l)->next), e);
        }
    }
}

void insert_array_to_SLL(Node** destination, int* target, int size, int pos)
{
    /*
     * insert_array_to_SLL :
     * * destination : first node of the SLL
     * * target : array of int to insert
     * * size : size of the array
     * * pos : position where insert
     */

    Node* buffer = array_to_SLL(target, size), * next = 0, * runner = *destination;
    if (pos <= 0)
    {
        next = buffer;
        *destination = buffer;
        while (next->next != 0) {next = next->next;}
        next->next = runner;
    }else{
        int i = pos;

        while (i > 1) {runner = runner->next; i--;}

        next = runner->next;
        runner->next = buffer;

        while (runner->next != 0) {runner = runner->next;}

        runner->next = next;
    }
}

void internal_sort_SLL(Node** node, int begin, int end)
{
    /*
     * internal_sort_SLL :
     * * node : pointer to the first node of the SLL, it's a pointer 'cause the first node could change.
     * * begin : start index of the list
     * * end : end index of the list
     *
     * sort in ascending order a SLL. This function use the algorithms commonly named "quicksort", see on internet for
     * more details about how it work.
     */

     if (begin > end)
     {
         return;
     }

     int p = get_index(*node, end)->data, pos = begin;

     for (int i = begin; i <= end; ++i) {
        if (get_index(*node, i)->data <= p)
        {
            switchInSLL(node, pos, i);
            pos++;
        }
     }
     internal_sort_SLL(node, begin, pos-2);
     internal_sort_SLL(node, pos, end);
}

void sort_SLL(Node** node)
{
    /*
     * sort_SLL :
     * * node :  pointer to the first node of the SLL, it's a pointer 'cause the first node could change.
     *
     * user side function to sort a SLL.
     */

    internal_sort_SLL(node, 0, len(*node) - 1);
}

int* SLL_to_array(Node* node)
{
    /*
     * SLL_to_array :
     * * node : the first node of the SLL
     *
     * convert an SLL into a dynamic array of integer.
     */

    int size = len(node);
    int* ar = (int*)calloc(size, sizeof(int));
    Node* buffer = node;

    for (int i = 0; i < size; ++i)
    {
        ar[i] = buffer->data;
        buffer = buffer->next;
    }

    return ar;
}

int iterative_len(Node* node)
{
    /*
     * len :
     * node : the first node of the SLL we want to fill
     *
     * return the size of a SLL.
     */

    Node* buffer = node;
    int i = 0;
    while(buffer != 0)
    {
        buffer = buffer->next;
        i++;
    }
    return i;
}

int iterative_first_occurrence_position(Node* node, int value)
{
    /*
     * first_occurrence :
     * * node : the first node of the SLL we want to fill
     * * value : integer corresponding to the searched value
     *
     *  count the first position where is 'value'.
     */

    Node* buffer = node;
    int i = 0;
    while(buffer != 0)
    {
        if(buffer->data == value)
        {
            return i+1;
        }
        buffer = buffer->next;
        i++;
    }
    return -1;
}

int iterative_occurrence_count(Node* node, int value)
{
    /*
     * number_of :
     * * node : the first node of the SLL we want to fill
     * * value : integer corresponding to the searched value
     *
     * count the number of node which the data equal to 'value'.
     */

    Node* buffer = node;
    int i = 0;
    while(buffer != 0)
    {
        if(buffer->data == value)
        {
            i++;
        }
        buffer = buffer->next;
    }
    return i;
}

int iterative_sum(Node* node)
{
    /*
     * sum :
     * * node : the first node of the SLL we want to fill
     *
     * count the number of nodes in a SLL.
     */

    Node* buffer = node;
    int i = 0;
    while(buffer != 0)
    {
        i += buffer->data;
        buffer = buffer->next;
    }
    return i;
}

void iterative_element_removal(Node** node, int value)
{
    /*
     * delete :
     * * node : the first node of the SLL we want to fill
     * * value : the value of nodes we want to remove
     *
     * remove all the nodes which have as data 'value'.
     */

    Node* buffer = *node, * temp = 0;
    int i = 0;

    while(buffer->next != 0)
    {
        if(buffer->next->data == value)
        {
            temp = buffer->next->next;
            free(buffer->next);
            buffer->next = temp;
        }else{
            buffer = buffer->next;
        }
    }

    if ((*node)->data == value)
    {
        buffer = *node;
        *node = (*node)->next;
        free(buffer);
    }
}

void iterative_reverse(Node** node)
{
    /*
     * revert :
     * * node : the first node of the SLL we want to fill
     *
     * reverse a SLL.
     */

    Node* buffer = *node, * temps[] = {buffer->next, 0};

    while(temps[0] != 0)
    {
        temps[0] = buffer->next;
        buffer->next = temps[1];
        temps[1] = buffer;
        buffer = (temps[0])?temps[0]:buffer;
    }

    *node = buffer;
}
