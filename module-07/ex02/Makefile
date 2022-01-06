
NAME	= Array
CC		= clang++ --std=c++98 
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) *.dSYM *.out

re: fclean all

run: re
	@./$(NAME)
