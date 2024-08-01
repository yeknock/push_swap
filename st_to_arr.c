#include "push_swap.h"

int	*stack_to_array(t_stack **st)
{
	t_stack	*temp;
	int		*arr;
	int		i;

	if (!st || !(*st))
		return (0);
	arr = (int *)malloc(sizeof(int) * ft_lstsize(st));
	if (!arr)
		return (0);
	temp = *st;
	i = 0;
	while(temp != NULL)
	{
		arr[i] = temp -> data;
		i++;
		temp = temp -> next;
	}
	return (arr);
}

int	*ordered_arr(int *arr, int size)
{
	int	*a;
	int	i;

	a = malloc(sizeof(int) * size);
	if (!a)
		return (0);
	i = 0;
	while (i < size)
	{
		a[i] = arr[i];
		i++;
	}
	arr_sorintg(a, size);

	return (a);
}

void	arr_sorintg(int *a, int size)
{
	int	temp;
	int i;
	int	j;

	i = 0;
	j = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if (a[i] > a[j])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
			j++;
		}
		i++;
	}
}

void	arr_changeto_index(int *ord, int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (arr[i] == ord[j])
			{
				arr[i] = j;
			}
			j++;
		}
		i++;
	}
}