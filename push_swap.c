/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmosoyan <mmosoyan@student.42yerevan.am    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:56:38 by mmosoyan          #+#    #+#             */
/*   Updated: 2024/07/27 18:33:43 by mmosoyan         ###   ########.fr       */
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

	if (argc > 1)
	{
		if (valid_symbols(argv) && valid_integer(argv))
		{
			list(&a, argv);
			if (no_doubles(&a))
			{
				update(&arr, &ordered, &a);
				solut(&a);
			}
			else
				return (1);
		}
		else
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	return (0);
}
