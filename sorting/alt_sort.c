/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alt_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 18:23:39 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 17:35:37 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	alt_sort2(t_stack **a)
{
	if ((*a)-> data < ((*a)-> next)-> data)
		return ;
	sa(a, 1);
}

void	alt_sort3(t_stack **a)
{
	int	f;
	int	s;
	int	t;

	f = (*a)-> data;
	s = ((*a)-> next)-> data;
	t = (((*a)-> next)-> next)-> data;
	if (f < s && s > t)
	{
		rra(a, 1);
		if (f < t)
			sa(a, 1);
	}
	else if (s < f && s < t)
	{
		if (f < t)
			sa(a, 1);
		else
			ra(a, 1);
	}
	else if (f > s && s > t)
	{
		sa(a, 1);
		rra(a, 1);
	}
}

int	find_min_indx(t_stack **a)
{
	int		min;
	int		min_index;
	t_stack	*tmp;

	min_index = 0;
	tmp = *a;
	min = tmp -> data;
	while (tmp)
	{
		if (tmp -> data < min)
			min = tmp -> data;
		tmp = tmp -> next;
	}
	tmp = *a;
	while (tmp)
	{
		if (tmp -> data == min)
			return (min_index);
		min_index++;
		tmp = tmp -> next;
	}
	return (-1);
}

void	alt_sort4(t_stack **a, t_stack **b)
{
	int	ind;

	ind = find_min_indx(a);
	if (ind >= 2)
	{
		while (3 - ind >= 0)
		{
			rra(a, 1);
			ind++;
		}
	}
	else if (ind == 1)
		ra(a, 1);
	pb(a, b);
	alt_sort3(a);
	pa(a, b);
}

void	alt_sort5(t_stack **a, t_stack **b)
{
	int	ind;

	ind = find_min_indx(a);
	if (ind > 2)
	{
		while (4 - ind >= 0)
		{
			rra(a, 1);
			ind++;
		}
	}
	else
	{
		while (ind > 0)
		{
			ra(a, 1);
			ind--;
		}
	}
	pb(a, b);
	alt_sort4(a, b);
	pa(a, b);
}
