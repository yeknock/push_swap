/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_functions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:54:00 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:55:10 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int flag)
{
	t_stack	*temp_first;
	t_stack	*t;

	if (!a || !(*a))
		return ;
	temp_first = (*a);
	t = (*a);
	(*a) = (*a)->next;
	while (t -> next != NULL)
		t = t->next;
	t -> next = temp_first;
	temp_first->next = NULL;
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int flag)
{
	t_stack	*temp_first;
	t_stack	*t;

	if (!b || !(*b))
		return ;
	temp_first = (*b);
	t = (*b);
	(*b) = (*b)->next;
	while (t -> next != NULL)
		t = t->next;
	t -> next = temp_first;
	temp_first->next = NULL;
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b, int flag)
{
	ra(a, flag);
	rb(b, flag);
	write(1, "rr\n", 3);
}
