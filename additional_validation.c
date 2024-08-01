/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional_validation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:44:45 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:45:22 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mult_space_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			write(1, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	min_max_err(t_stack **st)
{
	delete_stack(st);
	write(1, "Error\n", 6);
	exit(1);
}
