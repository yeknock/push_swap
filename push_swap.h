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
	struct s_list	*next;
}	stack_node;

void	push(stack_node **st, int data);
void	print(stack_node **st);
int		ft_atoi(const char *str);
// Swap Operations
void	sa(stack_node **a);
void	sb(stack_node **b);
void	ss(stack_node **a, stack_node **b);
// Push Operations
void	pa(stack_node **a, stack_node **b);
void	pb(stack_node **a, stack_node **b);
// Rotate Operations
void	ra(stack_node **a);
void	rb(stack_node **b);
void	rr(stack_node **a, stack_node **b);
// Rotate-Reverse Operations
void	rra(stack_node **a);
void	rrb(stack_node **b);
void	rrr(stack_node **a, stack_node **b);

#endif