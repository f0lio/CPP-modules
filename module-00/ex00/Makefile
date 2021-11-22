
NAME	= megaphone
CC		= clang++
FLAGS	= -Wall -Werror -Wextra
SRCS 	= megaphone.cpp

$(NAME):
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all
