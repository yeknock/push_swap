/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:46:01 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:48:37 by ymartiro         ###   ########.fr       */
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

void	ft_lstadd_front(t_stack **lst, int data)
{
	t_stack	*new;

	new = ft_lstnew(data);
	if (!new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		new -> next = *lst;
		*lst = new;
	}
}

void	ft_lstdelfirst(t_stack **st)
{
	t_stack	*temp;

	if (!st || !(*st))
		return ;
	temp = (*st)->next;
	free(*st);
	*st = temp;
}

int	ft_lstsize(t_stack **st)
{
	int		count;
	t_stack	*temp;

	count = 0;
	temp = *st;
	while (temp)
	{
		count++;
		temp = temp -> next;
	}
	return (count);
}
