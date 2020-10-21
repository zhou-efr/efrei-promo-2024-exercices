/*
 * Name : SLL.h
 * Date of creation : 12/09/2020
 * Date of last update : 14/09/2020
 * author(s) : zhou
 */
#ifndef TD_EN_C_SSL
#define TD_EN_C_SSL

typedef struct SLL
{
    int data;
    struct SLL* next;
}Node;


//useful

Node* initSLL(int size);

void userFulfillSLL(Node* node);

void to_str(Node* node);

void free_SLL(Node* node);

Node* get_index(Node* node, int index);

/// TD

// ex 1.1
int len(Node* node);
int iterative_len(Node* node);

// ex 1.2
int first_occurrence(Node* node, int value);
int iterative_first_occurrence_position(Node* node, int value);

// ex 1.3
int number_of(Node* node, int value);
int iterative_occurrence_count(Node* node, int value);

//ex 1.4
int sum(Node* node);
int iterative_sum(Node* node);

// ex 1.5
int ascending(Node* node);

// ex 2.1
void insert(Node** node, Node* nNode, int position);

// ex 2.2
void delete(Node* node, int value);
void iterative_element_removal(Node** node, int value);

// ex 2.3
Node* revert(Node* node);
void iterative_reverse(Node** node);

// ex 2.4
void switchInSLL(Node** node, int index1, int index2);

// ex 3.1
Node* ascendingFusion(Node* l1, Node* l2);

// ex 3.3
int isDuplicates(Node* node);

/// TD 2

// ex 1.1
void reversed_to_str(Node* node);

// ex 1.2
void concatenateSLL(Node* destination, Node* target);

// ex 1.4
Node* array_to_SLL(int* target, int size);

// ex 1.5
void split(Node** start, Node* cut);

// ex 2.1
void insert_array_to_SLL(Node** destination, int* target, int size, int pos);

// ex 2.2
void sort_SLL(Node** node);

// ex 2.6
int* SLL_to_array(Node* node);

#endif