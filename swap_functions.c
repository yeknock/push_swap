/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:43:57 by ymartiro          #+#    #+#             */
/*   Updated: 2024/07/17 13:44:00 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(stack_node **a)
{
	stack_node	*second;
	int			temp_data;

	if (*a == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	second = (*a) -> next;
	if (second == NULL)
		return ;
	else
	{
		temp_data = (*a) -> data;
		(*a) -> data = second -> data;
		second -> data = temp_data;
	}
}


void	sb(stack_node **b)
{
	stack_node	*second;
	int			temp_data;

	if (*b == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	second = (*b) -> next;
	if (second == NULL)
		return ;
	else
	{
		temp_data = (*b) -> data;
		(*b) -> data = second -> data;
		second -> data = temp_data;
	}
}


void	ss(stack_node **a, stack_node **b)
{
	sa(a);
	sb(b);
}