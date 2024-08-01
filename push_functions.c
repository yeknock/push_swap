#include "push_swap.h"

void	pa(t_stack **a, t_stack **b)
{
	int	val;

	if (!b || !(*b))
		return ;
	val = (*b) -> data;
	ft_lstdelfirst(b);
	ft_lstadd_front(a, val);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	int	val;

	if (!a || !(*a))
		return ;
	val = (*a) -> data;
	ft_lstdelfirst(a);
	ft_lstadd_front(b, val);
	write(1, "pb\n", 3);
}