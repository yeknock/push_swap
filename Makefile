CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:.c=.o)
NAME = push_swap

all : $(NAME)

%.o : %.c Makefile push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

test: $(NAME)
	$(eval ARG = $(shell jot -r 5 0 2000000))
	./push_swap $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

re : fclean all

.PHONY : all clean fclean re
