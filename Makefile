SRC =	ft_printf.c ft_putstr_printf.c ft_print_hexa.c

CC = clang
FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
NAME = libftprintf.a

all:	$(NAME)

$(NAME):	libft/libft.a	$(OBJECT)
	ar -rcs $(NAME) $(SRC)

$(OBJECT):	$(SRC)
	$(CC) $(FLAGS) -c $(SRC)

clean:
	rm -f $(OBJECT) a.out

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re