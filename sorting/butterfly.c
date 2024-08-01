/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 19:29:48 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/26 18:49:52 by mmosoyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sqrt(int num)
{
	int	i;

	i = 0;
	while (1)
	{
		if (i * i == num)
			return (i);
		else if (i * i > num)
			return (i - 1);
		i++;
	}
}

int	log_2(int num)
{
	int	i;

	i = 0;
	while (num)
	{
		num = num / 2;
		i++;
	}
	return (i);
}

void	butterfly_sort(t_stack **a, t_stack **b)
{
	int	counter;
	int	n;
	int	size;

	counter = 0;
	size = ft_lstsize(*a);
	n = ft_sqrt(size) + log_2(size);
	while (size != 0)
	{
		if ((*a)-> data <= counter)
		{
			pb(a, b);
			rb(b, 1);
			counter++;
			size--;
		}
		else if ((*a)-> data <= counter + n)
		{
			pb(a, b);
			counter++;
			size--;
		}
		else
			ra(a, 1);
	}
}

int	find_max_indx(t_stack **b)
{
	int		max;
	int		index;
	t_stack	*tmp;

	index = 0;
	tmp = *b;
	max = tmp -> data;
	while (tmp)
	{
		if (tmp -> data > max)
			max = tmp -> data;
		tmp = tmp -> next;
	}
	tmp = *b;
	while (tmp)
	{
		if (tmp -> data == max)
			return (index);
		index++;
		tmp = tmp -> next;
	}
	return (-1);
}

void	a_sort(t_stack **a, t_stack **b)
{
	int	index;
	int	size;

	size = ft_lstsize(*b);
	while (size != 0)
	{
		index = find_max_indx(b);
		if (index >= (size + 1) / 2)
		{
			while (size - index > 0)
			{
				rrb(b, 1);
				index++;
			}
		}
		else
		{
			while (index-- > 0)
				rb(b, 1);
		}
		pa(a, b);
		size--;
	}
}
