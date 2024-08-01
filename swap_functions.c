/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:43:57 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:58:56 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **a, int flag)
{
	t_stack	*second;
	int		temp_data;

	if (!(*a) || !a)
		return ;
	second = (*a)->next;
	if (second == NULL)
		return ;
	else
	{
		temp_data = (*a)->data;
		(*a)->data = second -> data;
		second -> data = temp_data;
		if (flag == 1)
			write(1, "sa\n", 3);
	}
}

void	sb(t_stack **b, int flag)
{
	t_stack	*second;
	int		temp_data;

	if (!(*b) || !b)
		return ;
	second = (*b)->next;
	if (second == NULL)
		return ;
	else
	{
		temp_data = (*b)->data;
		(*b)->data = second -> data;
		second -> data = temp_data;
		if (flag == 1)
			write(1, "sb\n", 3);
	}
}

void	ss(t_stack **a, t_stack **b, int flag)
{
	sa(a, flag);
	sb(b, flag);
	write(1, "ss\n", 3);
}
