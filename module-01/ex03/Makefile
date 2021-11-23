
NAME	= brain
CC		= clang++ --std=c++98
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run: fclean all
	@./$(NAME)
