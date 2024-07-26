#include "push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*temp_first;
	t_stack	*t;

	if (!a || !(*a))
		return ;
	temp_first = (*a);
	t = (*a);
	(*a) = (*a) -> next;
	while (t -> next != NULL)
		t = t -> next;
	t -> next = temp_first;
	temp_first -> next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	t_stack	*temp_first;
	t_stack	*t;

	if (!b || !(*b))
		return ;
	temp_first = (*b);
	t = (*b);
	(*b) = (*b) -> next;
	while (t -> next != NULL)
		t = t -> next;
	t -> next = temp_first;
	temp_first -> next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}