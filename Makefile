SRC =	ft_printf.c ft_putstr_printf.c hexa.c

LIBFT = libft/libft.a

CC = clang
FLAGS = -Wall -Wextra -Werror
OBJECT = $(SRC:.c=.o)
NAME = libftprintf.a

all:	$(NAME)

$(NAME):	$(LIBFT) $(OBJECT)
	@cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJECT)

$(OBJECT):	$(SRC)
	$(CC) $(FLAGS) -c $(SRC)

$(LIBFT):
	$(MAKE) -C ./libft

clean:
	rm -f $(OBJECT)
	$(MAKE) fclean -C ./libft

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re