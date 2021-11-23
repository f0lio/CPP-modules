
NAME	= zombie
CC		= clang++ --std=c++98
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

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
