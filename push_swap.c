/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymartiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:32:53 by ymartiro          #+#    #+#             */
/*   Updated: 2024/07/17 11:32:58 by ymartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int main(void)
{
    stack_node *a = NULL;
    stack_node *b = NULL;
    push(&a, 5);
    push(&a, 12);
    push(&a, 1);
    push(&a, 9);
    push(&a, 988);


    print(a);

    sa(a);
    printf("\n\n");

    print(a);

    return 0;
}