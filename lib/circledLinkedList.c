#include "CLL.h"

void SLL_to_CLL(Node* node)
{
    Node* buffer = node;
    while (buffer->next != 0)
    {
        buffer = (buffer->next);
    }
    buffer->next = node;
}

void CLL_to_SLL(Node* node)
{
    Node* buffer = node;
    while (buffer->next != node)
    {
        buffer = (buffer->next);
    }
    buffer->next = 0;
}

int isCLL(Node* node)
{
    Node* buffer = node;
    while (buffer->next != node && buffer->next != 0)
    {
        buffer = (buffer->next);
    }
    return (buffer->next != 0);
}

int lenCLL(Node* node)
{
    Node* buffer = node;
    int i = 0;

    while (buffer->next != node)
    {
        buffer = buffer->next;
        i++;
    }

    return ++i;
}
