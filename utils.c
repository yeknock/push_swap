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

t_stack	*ft_lstnew(int data)
{
	t_stack	*ret;

	ret = malloc(sizeof(t_stack));
	if (!ret)
		return (0);
	ret -> data = data;
	ret -> next = NULL;
	return (ret);
}

void	ft_lstadd_back(t_stack **lst, int data)
{
	t_stack	*p;
	t_stack	*new;

	new = ft_lstnew(data);
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		p = *lst;
		while (p -> next)
			p = p -> next;
		p -> next = new;
	}
}

void    print(t_stack **st)
{
    t_stack *temp;

    temp = *st;
    if(!temp)
    {
        printf("Error\n");
        exit(1);
    }
    while (temp != NULL)
    {
        printf("%d\n",temp -> data);
        temp = temp -> next;
    }
}