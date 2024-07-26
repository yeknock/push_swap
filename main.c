/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:32:53 by ymartiro          #+#    #+#             */
/*   Updated: 2024/07/17 11:32:58 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a = NULL;

	if (argc >= 2)
	{
		int	i = 1;
		while (i < argc)
		{
			get_number_to_stack(argv[i], &a);
			i++;
		}
		print(&a);
	}

	return (0);
}