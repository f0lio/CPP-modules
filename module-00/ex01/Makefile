
NAME	= phonebook
CC		= clang++
FLAGS	= -Wall -Werror -Wextra
SRCS 	= phonebook.cpp

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
