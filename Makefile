CC = cc
FLAGS = -Wall -Wextra -Werror
SOURCES = main.c push_functions.c rot_functions.c rot_rev_functions.c swap_functions.c urils.c
OBJECTS = $(SOURCES:.c=.o)
NAME = push_swap

all: $(NAME)

%.o: %.c Makefile push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS) 
	$(CC) $(FLAGS) -o $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f ($NAME)

re: fclean all

.PHONY $(NAME) all clean fclean re