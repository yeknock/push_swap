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
    newNode -> next = *st;
    *st = newNode;
}

void    print(stack_node **st)
{
    stack_node *temp;

    temp = *st;
    if(!temp)
    {
        printf("Error\n");
        exit(1);
    }
    while (temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp -> next;
    }
    free(temp);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	return_value;
	int	sign;

	i = 0;
	sign = 1;
	return_value = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		return_value = return_value * 10 + (str[i] - 48);
		i++;
	}
	return (return_value * sign);
}