/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:33:09 by ymartiro          #+#    #+#             */
/*   Updated: 2024/07/17 11:33:12 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				data;
	struct s_list	*link;
}	stack_node;


void		push(stack_node **st, int data);
void		print(stack_node *st);
int			ft_lstsize(stack_node *lst);

// Operations
void	sa(stack_node *a);

#endif