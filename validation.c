/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 16:02:12 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 16:06:24 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_err(void)
{
	write (2, "Error\n", 6);
	exit(1);
}

void	check_valid_chars(char *str)
{
	int		i;

	val_char(str);
	i = 0;
	while (str[i] == ' ' && str[i] != '\0')
		++i;
	if (!str[i])
		handle_err();
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] < 48 || str[i + 1] > 57)
				handle_err();
			if (i != 0 && (str[i - 1] > 48 || str[i - 1] < 57))
				handle_err();
		}
		++i;
	}
}

void	get_number_to_stack(char *str, t_stack **st)
{
	char		*temp_str;
	long int	temp_int;
	int			i;
	int			j;

	i = 0;
	check_valid_chars(str);
	while (str[i] != '\0')
	{
		j = 1;
		if ((str[i] >= 48 && str[i] <= 57) || str[i] == '-')
		{
			j = 0;
			while (str[i + j] != ' ' && str[i + j] != '\0')
				j++;
			temp_str = ft_substr(str, i, j);
			temp_int = ft_atoi(temp_str);
			if (!int_min_max(temp_int))
				min_max_err(temp_str, st);
			ft_lstadd_back(st, (int)temp_int);
			free(temp_str);
		}
		i = i + j;
	}
}

int	int_min_max(long int n)
{
	if (n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}

int	overlapping_case(t_stack **st)
{
	t_stack	*head;
	t_stack	*temp;

	head = *st;
	if (!st || !(*st))
		return (0);
	while (head != NULL && head -> next != NULL)
	{
		temp = head -> next;
		while (temp != NULL)
		{
			if (head -> data == temp -> data)
			{
				delete_stack(st);
				write(2, "Error\n", 6);
				return (0);
			}
			temp = temp -> next;
		}
		head = head -> next;
	}
	return (1);
}
