NAME = push_swap
SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

all : $(NAME)

%.o : %.c Makefile push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

test: $(NAME)
	$(eval ARG = $(shell jot -r 100 0 2000000))
	./push_swap $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

.PHONY : all clean fclean re
