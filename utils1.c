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

void push(stack_node **st, int data)
{
    stack_node *newNode;
    newNode = (stack_node *)malloc(sizeof(stack_node));
    if (!newNode)
    {
        printf("Error\n");
        exit(1);
    }
    newNode -> data = data;
    newNode -> link = *st;
    *st = newNode;
}

void    print(stack_node *st)
{
    stack_node *temp = st;
    while (temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp -> link;
    }
}

int	ft_lstsize(stack_node *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->link;
	}
	return (count);
}