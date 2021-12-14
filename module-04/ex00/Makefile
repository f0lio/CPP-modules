
NAME	= Animal
CC		= clang++ --std=c++98 
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

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
