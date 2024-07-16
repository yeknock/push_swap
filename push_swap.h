#include <stdio.h>

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_list
{
	void			*data;
	struct s_list	*link;
}	stack;
stack *top = NULL;

void    push(int data);

#endif