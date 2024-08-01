/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:33:18 by ymartiro          #+#    #+#             */
/*   Updated: 2024/07/17 11:33:20 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print(t_stack **st)
{
    t_stack *temp;

    temp = *st;
    while (temp != NULL)
    {
        printf("%d\n",temp -> data);
        temp = temp -> next;
    }
}

void	delete_stack(t_stack **st)
{
	t_stack	*temp;
	t_stack	*next;

	if (!st || !(*st))
		return ;
	temp = *st;
	next = NULL;
	while(temp != NULL)
	{
		next = temp -> next;
		free(temp);
		temp = next;
	}
	*st = NULL;
}