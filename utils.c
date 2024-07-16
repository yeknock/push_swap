#include "push_swap.h"

void push(int data)
{
    stack *newNode;
    newNode = malloc(sizeof(newNode));
    if (!newNode)
    {
        printf("Error\n");
        exit(1);
    }
    newNode -> data = data;
    newNode -> link = NULL;

    newNode -> link = top;
    top = newNode;
}