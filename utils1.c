/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:01:56 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 16:01:57 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	list_to_arr(t_stack **a, int *arr)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		arr[i] = tmp -> data;
		tmp = tmp -> next;
		i++;
	}
}

void	sort_arr(int *ordered, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (ordered[j] > ordered[j + 1])
				ft_swap(&ordered[j], &ordered[j + 1]);
			j++;
		}
		i++;
	}
}

void	sort_arr_index(int *arr, int *ordered, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == ordered[j])
			{
				arr[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
}

void	reset_list(t_stack **a, int *arr)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		tmp -> data = *arr;
		tmp = tmp -> next;
		arr++;
	}
}
