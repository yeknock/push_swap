#include "push_swap.h"

void	check_valid_chars(char *str)
{
	char	*valid_chars;
	int		i;

	valid_chars = "0123456789-+ ";
	i = 0; // invalid characters case
	while(str[i] != '\0')
	{
		if (!ft_strchr(valid_chars, str[i]))
		{
			printf("Error\n");
			exit(1);
		}
		i++;
	}
	i = 0; // more than one + or - case
	while(str[i] != '\0')
	{
		if ((str[i] == '-' || str[i] == '+') && (str[i + 1] < 48 || str[i + 1] > 57))
		{
			printf("Error\n");
			exit(1);
		}
		i++;
	}
}

void	handle_err(char *str)
{
	if(!str)
	{
		printf("Error\n");
		exit(1);
	}
}

void	get_number_to_stack(char *str, t_stack **st)
{
	char		*temp_str;
	long	int	temp_int;
	int 		i;
	int			start;

	i = 0;
	start = i;
	check_valid_chars(str);
	mult_space_check(str);
	while(str[i] != '\0')
	{
		if((str[i] >= 48 && str[i] <= 57) && (str[i + 1] == ' ' || str[i + 1] == 0))
		{
			temp_str = ft_substr(str, start, i - start + 1);
			temp_int = ft_atoi(temp_str);
			if (int_min_max(temp_int) == 0)
				min_max_err(st);
			ft_lstadd_back(st, (int)temp_int);
			free(temp_str);
			start = i + 1;
		}
		i++;
	}
	overlapping_case(st);
}

int	int_min_max(long int n)
{
	if (n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}

void	overlapping_case(t_stack **st)
{
	t_stack	*head;
	t_stack	*temp;

	head = *st;
	if (!st || !(*st))
	{
		printf("Error\n");
		exit(1);
	}
	while(head != NULL && head -> next != NULL)
	{
		temp = head -> next;
		while(temp != NULL)
		{
			if (head -> data == temp -> data)
			{
				delete_stack(st);
				printf("Error\n");
				exit(1);
			}
			temp = temp -> next;
		}
		head = head -> next;
	}
}