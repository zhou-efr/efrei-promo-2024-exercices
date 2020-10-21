/*
 * Name : DLL.h
 * Date of creation : 13/09/2020
 * Date of last update : 13/09/2020
 * author(s) : zhou
 */
#ifndef TD_EN_C_DLL_H
#define TD_EN_C_DLL_H

typedef struct DLL
{
    struct DLL* previous;
    int data;
    struct DLL* next;
}DoubleNode;

//useful

DoubleNode* init_double_linked_list(int size);

void print_double_linked_list(DoubleNode* start);

void push_object_start(DoubleNode** start, int value);

void push_object_end(DoubleNode** start, int value);

void insert_object(DoubleNode** start, int value, int position_from_0);

void free_double_linked_list(DoubleNode* start);

void to_str_DLL(DoubleNode* node);

/// TD 2

// ex 2.1.2
void insert_array_to_DLL(DoubleNode** destination, int* target, int size, int pos);

// ex 2.5
int is_symmetrical(DoubleNode* node);

#endif //TD_EN_C_DLL_H
