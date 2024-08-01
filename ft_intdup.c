/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:45:36 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:45:53 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_intdup(int *arr, int size)
{
	int	*dup;
	int	i;

	i = 0;
	dup = malloc(size * sizeof(int));
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = arr[i];
		i++;
	}
	return (dup);
}
