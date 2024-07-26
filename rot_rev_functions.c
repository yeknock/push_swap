#include "push_swap.h"

void	rra(t_stack **a)
{
	t_stack	*temp_last;
	t_stack	*t;

	if (!a || !(*a))
		return ;
	t = *a;
	while (t -> next -> next != NULL)
		t = t -> next;
	temp_last = t -> next;
	t -> next = NULL;
	temp_last -> next = (*a);
	(*a) = temp_last;
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	t_stack	*temp_last;
	t_stack	*t;

	if (!b || !(*b))
		return ;
	t = *b;
	while (t -> next -> next != NULL)
		t = t -> next;
	temp_last = t -> next;
	t -> next = NULL;
	temp_last -> next = (*b);
	(*b) = temp_last;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}