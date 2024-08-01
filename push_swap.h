/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:33:09 by ymartiro          #+#    #+#             */
/*   Updated: 2024/08/01 15:53:49 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

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
void		ft_lstadd_front(t_stack **lst, int data);
t_stack		*ft_lstnew(int data);
void		ft_lstdelfirst(t_stack **st);
int			ft_lstsize(t_stack **st);
void		get_number_to_stack(char *str, t_stack **st);
void		check_valid_chars(char *str);
int			overlapping_case(t_stack **st);
void		mult_space_check(char *str);
void		min_max_err(t_stack **st);
int			int_min_max(long int n);
void		delete_stack(t_stack **st);
int			log_2(int num);
int			ft_sqrt(int num);
void		butterfly_sort(t_stack **a, t_stack **b);
int			find_max_indx(t_stack **b);
void		a_sort(t_stack **a, t_stack **b);
void		alt_sort2(t_stack **a);
void		alt_sort3(t_stack **a);
int			find_min_indx(t_stack **a);
void		alt_sort4(t_stack **a, t_stack **b);
void		alt_sort5(t_stack **a, t_stack **b);
int			is_sorted(t_stack **a);
void		list_to_arr(t_stack **a, int *arr);
void		ft_swap(int *a, int *b);
void		sort_arr(int *ordered, int size);
void		sort_arr_index(int *arr, int *ordered, int size);
void		reset_list(t_stack **a, int *arr);
int			*ft_intdup(int *arr, int size);
void		update(int **arr, int **ordered, t_stack **a);
void		solut(t_stack **a);
void		sa(t_stack **a, int flag);
void		sb(t_stack **b, int flag);
void		ss(t_stack **a, t_stack **b, int flag);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **a, int flag);
void		rb(t_stack **b, int flag);
void		rr(t_stack **a, t_stack **b, int flag);
void		rra(t_stack **a, int flag);
void		rrb(t_stack **b, int flag);
void		rrr(t_stack **a, t_stack **b, int flag);

#endif
