
NAME	= replace
CC		= clang++ --std=c++98 
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) *.replace *.dSYM

re: fclean all

run: fclean all
	@./$(NAME)
