#include "../push_swap.h"

long int	ft_atoi(char *str)
{
	int	i;
	int	return_value;
	int	sign;

	i = 0;
	sign = 1;
	return_value = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		return_value = return_value * 10 + (str[i] - 48);
		i++;
	}
	return (return_value * sign);
}