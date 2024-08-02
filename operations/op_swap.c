/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:56:30 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 17:05:04 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **head, int flag)
{
	int	tmp;

	if (head && *head && (*head)-> next)
	{
		tmp = (*head)->data;
		(*head)-> data = ((*head)-> next)-> data;
		((*head)-> next)-> data = tmp;
	}
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_stack **head, int flag)
{
	int	tmp;

	if (head && *head && (*head)-> next)
	{
		tmp = (*head)->data;
		(*head)-> data = ((*head)-> next)-> data;
		((*head)-> next)-> data = tmp;
	}
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_stack **h1, t_stack **h2)
{
	sa(h1, 0);
	sb(h2, 0);
	write(1, "ss\n", 3);
}
