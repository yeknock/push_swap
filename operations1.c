/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:43:57 by ymartiro          #+#    #+#             */
/*   Updated: 2024/07/17 13:44:00 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(stack_node *a)
{
    stack_node  *temp;
    stack_node  *temp_head;
    temp = a -> link;
    temp_head = a;

    a -> link = a -> link -> link;
    temp -> link = temp_head;
    a = temp;
}