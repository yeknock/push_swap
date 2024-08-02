/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:49:43 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/02 19:00:20 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	update(int **arr, int **ordered, t_stack **a)
{
	int		size;

	size = ft_lstsize(a);
	if (is_sorted(a))
		exit (0);
	*arr = malloc(size * sizeof(int));
	if (*arr == NULL)
		exit(1);
	list_to_arr(a, *arr);
	*ordered = ft_intdup(*arr, size);
	sort_arr(*ordered, size);
	sort_arr_index(*arr, *ordered, size);
	reset_list(a, *arr);
	free(*arr);
	free(*ordered);
	arr = NULL;
	ordered = NULL;
}

int	is_sorted(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	if (!a || !(*a))
		return (1);
	while (temp -> next)
	{
		if (temp -> data > (temp -> next)-> data)
			return (0);
		temp = temp -> next;
	}
	delete_stack(a);
	return (1);
}

void	solut(t_stack **a)
{
	int		size;
	t_stack	*b;

	b = NULL;
	size = ft_lstsize(a);
	if (size == 1)
		return ;
	else if (size == 2)
		alt_sort2(a);
	else if (size == 3)
		alt_sort3(a);
	else if (size == 4)
		alt_sort4(a, &b);
	else if (size == 5)
		alt_sort5(a, &b);
	else if (size > 5)
	{
		butterfly_sort(a, &b);
		a_sort(a, &b);
	}
	delete_stack(a);
	a = NULL;
}

int	main(int argc, char *argv[])
{
	int		*arr;
	int		*ordered;
	t_stack	*a;
	int		i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			get_number_to_stack(argv[i], &a);
			i++;
		}
		if (overlapping_case(&a))
		{
			update(&arr, &ordered, &a);
			solut(&a);
		}
		free(a);
	}
	return (0);
}
