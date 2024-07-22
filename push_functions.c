#include "push_swap.h"

void	pa(stack_node **a, stack_node **b)
{
    stack_node  *first_of_b;

    first_of_b = *b;
    if (first_of_b == NULL)
        return ;
    push(a, first_of_b -> data);
}

void	pb(stack_node **a, stack_node **b)
{
    stack_node  *first_of_a;

    first_of_a = *a;
    if (first_of_a == NULL)
        return ;
    push(b, first_of_a -> data);
}