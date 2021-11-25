
NAME	= karenFilter
CC		= clang++ --std=c++98 
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp Karen.cpp

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME) *.dSYM

re: fclean all

run: re
	@./$(NAME)
