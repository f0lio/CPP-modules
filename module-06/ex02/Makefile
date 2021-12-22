
NAME	= identify
CC		= clang++ --std=c++98 
FLAGS	= -Wall -Werror -Wextra
SRCS 	= main.cpp Base.cpp A.cpp B.cpp C.cpp

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
