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
#include <limits.h>
#include <unistd.h>

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_stack;

void		print(t_stack **st);
size_t		ft_strlen(const char *str);
char		*ft_substr(char *s, unsigned int start, size_t len);
char		*ft_strdup(const char *str);
char		*ft_strchr(char *str, int c);
long int	ft_atoi(char *str);
void		ft_lstadd_back(t_stack **lst, int data);
t_stack		*ft_lstnew(int data);
void		get_number_to_stack(char *str, t_stack **st);
void		check_valid_chars(char *str);
void		overlapping_case(t_stack **st);

// Operations
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

#endif