NAME = libft.a
FLAGS = -Wall -Wextra -Werror
SRC = ft_*.c
HEADER = libft.h
CC = gcc

all: $(NAME) clean

$(NAME): $(HEADER) $(SRC)
	$(CC) $(FLAGS) -c $(SRC)
	ar r $(NAME) *.o

clean:
	rm -f *.o

fclean:
	rm -f *.o
	rm -f $(NAME)

re: fclean all
