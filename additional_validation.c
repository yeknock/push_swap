#include "push_swap.h"

void	mult_space_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && str[i + 1] == ' ')
		{
			printf("Error\n");
			exit(1);
		}
		i++;
	}
}

void	min_max_err(t_stack **st)
{
	delete_stack(st);
	printf("Error\n");
	exit(1);
}