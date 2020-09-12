#include "SSL.h"
#include <stdlib.h>
#include <stdio.h>

Node* initSLL(int size)
{
    Node* star = (Node*)malloc(sizeof(Node));;
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

void userFulfillSSL(Node* node)
{
    if(node != 0)
    {
        printf("enter a value :");
        scanf("%d", &(node->data));
        userFulfillSSL(node->next);
    }
}

void to_str(Node* node)
{
    if(node != 0)
    {
        printf(" %d;", node->data);
        to_str(node->next);
    }
}

void free_SLL(Node* node)
{
    if(node != 0)
    {
        free_SLL(node->next);
        free(node);
    }
}

Node* get_index(Node* node, int index)
{
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
    if (node->next == 0)
    {
        return 1;
    }else
    {
        return len(node->next) + 1;
    }
}

int first_occurrence(Node* node, int value)
{
    if (node == 0)
    {
        return 1;
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
    Node* buffer = node;

    while (buffer->next != 0)
    {
        if (buffer->data < buffer->next->data)
        {
            return 0;
        }
        buffer = buffer->next;
    }

    return 1;
}

void insert(Node* node, Node* nNode, int position)
{
    if(position <= 1 || node->next == 0)
    {
        Node* buffer = node->next;
        node->next = nNode;
        nNode->next = buffer;
    }else{
        insert(node->next, nNode, position-1);
    }
}

void delete(Node* node, int value)
{
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

void switchInSSL(Node** node, int index1, int index2)
{
    if (*node != 0)
    {
        int first, second;
        Node* buffer = *node, * buffer_first = 0, * buffer_next = 0,
        * buffer_previous = 0, * buffer_first_previous = 0;

        if (index1 < index2)
        {
            first = index1;
            second = index2;
        }else if (index1 > index2)
        {
            first = index2;
            second = index1;
        }else{
            return;
        }


        if (first < 0) { first = 0;}


        while(second >= 0 && buffer != 0)
        {
            if (second == 0)
            {
                /*
                 * buffer
                 * buffer_previous
                 * buffer_first
                 * buffer_first_previous may = 0
                 * */

                buffer_previous->next = buffer_first;
                if (buffer_first_previous == 0)
                {
                    *node = buffer;
                }else{
                    buffer_first_previous->next = buffer;
                }

                buffer_next = buffer_first->next;
                buffer_first->next = buffer->next;
                buffer->next = buffer_next;
            }else if (second == 1 || buffer->next->next == 0)
            {
                buffer_previous = buffer;
                second = 1;
            }

            if (first == 0)
            {
                buffer_first = buffer;
            }else if (first == 1)
            {
                buffer_first_previous = buffer;
            }

            second -= 1;
            first--;
            buffer = buffer->next;
        }
    }
}

Node* ascendingFusion(Node* a, Node* b)
{
    if (a == 0){return b;
    }else if (b == 0){return a;}

    Node* buffer_a = a, * buffer_b = b, * buffer_c = 0;

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

    return (a->data <= b->data)?a:b;
}

int isDuplicates(Node* node)
{
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
    if (node != 0)
    {
        reversed_to_str(node->next);
        printf(" %d;", node->data);
    }
}

void concatenateSSL(Node* destination, Node* target)
{
    if(destination->next == 0)
    {
        destination->next = target;
    }else
    {
        concatenateSSL(destination->next, target);
    }
}

Node* array_to_SLL(int* target, int size)
{
    Node * start = (Node*)malloc(sizeof(Node)), * buffer = start;

    for (int i = 0; i < size; ++i)
    {
        buffer->data = target[i];
        buffer->next = (i+1 < size)?(Node*)malloc(sizeof(Node)):0;
        buffer = buffer->next;
    }

    return start;
}

void split(Node* start, Node* cut)
{
    if (start != 0)
    {
        if (start->next == cut){
            start->next = 0;
        }else{
            split(start->next, cut);
        }
    }
}

void insert_array_to_SLL(Node** destination, int* target, int size, int pos)
{
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
     if (begin > end)
     {
         return;
     }

     int p = get_index(*node, end)->data, pos = begin;

     for (int i = begin; i <= end; ++i) {
        if (get_index(*node, i)->data <= p)
        {
            switchInSSL(node, pos, i);
            pos++;
        }
     }
     internal_sort_SLL(node, begin, pos-2);
     internal_sort_SLL(node, pos, end);
}

void sort_SLL(Node** node)
{
    internal_sort_SLL(node, 0, len(*node) - 1);
}

int* SLL_to_array(Node* node)
{
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
