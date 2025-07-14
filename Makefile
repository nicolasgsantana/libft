NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_*.c
CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar r $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
