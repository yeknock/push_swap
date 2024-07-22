#include "push_swap.h"

void	ra(stack_node **a)
{
	stack_node	*temp_first;
	stack_node	*t;

	temp_first = (*a);
	t = (*a);
	(*a) = (*a) -> next;
	while (t -> next != NULL)
		t = t -> next;
	t -> next = temp_first;
	temp_first -> next = NULL;
}

void	rb(stack_node **b)
{
	stack_node	*temp_first;
	stack_node	*t;

	temp_first = (*b);
	t = (*b);
	(*b) = (*b) -> next;
	while (t -> next != NULL)
		t = t -> next;
	t -> next = temp_first;
	temp_first -> next = NULL;
}

void	rr(stack_node **a, stack_node **b)
{
	ra(a);
	rb(b);
}