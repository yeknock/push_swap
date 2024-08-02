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

void	min_max_err(char *temp_str, t_stack **st)
{
	free(temp_str);
	delete_stack(st);
	handle_err();
}

void	val_char(char *str)
{
	char	*valid_chars;
	int		i;

	i = 0;
	valid_chars = "0123456789+- ";
	while (str[i] != '\0')
	{
		if (!ft_strchr(valid_chars, str[i]))
			handle_err();
		i++;
	}
}
