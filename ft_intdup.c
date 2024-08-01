#include "push_swap.h"

int	*ft_intdup(int *arr, int size)
{
	int	*dup;
	int	i;

	i = 0;
	dup = malloc(size * sizeof(int));
	if (dup == NULL)
		return (NULL);
	while (i < size)
	{
		dup[i] = arr[i];
		i++;
	}
	return (dup);
}
