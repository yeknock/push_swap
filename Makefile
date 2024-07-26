CC = cc
FLAGS = -Wall -Wextra -Werror
SOURCES = main.c push_functions.c rot_functions.c rot_rev_functions.c swap_functions.c utils.c validation.c libft_files/ft_atoi.c libft_files/ft_strchr.c libft_files/ft_strdup.c libft_files/ft_strlen.c libft_files/ft_substr.c
OBJECTS = $(SOURCES:.c=.o)
NAME = push_swap

all: $(NAME)

%.o: %.c Makefile push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME):
	$(CC) $(FLAGS) $(SOURCES) -o $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f ($NAME)

re: fclean all

.PHONY: $(NAME) all clean fclean re