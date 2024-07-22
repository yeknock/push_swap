#include "push_swap.h"

void	rra(stack_node **a)
{
	stack_node	*temp_last;
	stack_node	*t;

	t = *a;
	while (t -> next -> next != NULL)
		t = t -> next;
	temp_last = t -> next;
	t -> next = NULL;
	temp_last -> next = (*a);
	(*a) = temp_last;
}

void	rrb(stack_node **b)
{
	stack_node	*temp_last;
	stack_node	*t;

	t = *b;
	while (t -> next -> next != NULL)
		t = t -> next;
	temp_last = t -> next;
	t -> next = NULL;
	temp_last -> next = (*b);
	(*b) = temp_last;
}

void	rrr(stack_node **a, stack_node **b)
{
	rra(a);
	rrb(b);
}