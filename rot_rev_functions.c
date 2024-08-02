/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_rev_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:55:15 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:57:10 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **a, int flag)
{
	t_stack	*temp_last;
	t_stack	*t;

	if (!a || !(*a))
		return ;
	t = *a;
	while (t -> next -> next != NULL)
		t = t->next;
	temp_last = t -> next;
	t -> next = NULL;
	temp_last -> next = (*a);
	(*a) = temp_last;
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	rrb(t_stack **b, int flag)
{
	t_stack	*temp_last;
	t_stack	*t;

	if (!b || !(*b))
		return ;
	t = *b;
	while (t -> next -> next != NULL)
		t = t->next;
	temp_last = t -> next;
	t -> next = NULL;
	temp_last -> next = (*b);
	(*b) = temp_last;
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
