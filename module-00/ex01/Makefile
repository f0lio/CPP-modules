
NAME	= phonebook
CC		= clang++ --std=c++98
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp Contact.cpp Phonebook.cpp Utils.cpp

$(NAME): $(SRCS)
	@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)
	@rm -rf *.gch

re: fclean all

run: fclean all
	@./$(NAME)
