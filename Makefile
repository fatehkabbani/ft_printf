# NAME, all, clean, fclean, re
NAME = libftprintf.a

FLAG = -Werror -Wextra -Wall

SRC = ft_printf.c \
			ft_putchar.c \
			ft_puthex.c \
			ft_putnbr.c \
			ft_putptr.c \
			ft_putstr.c \
			ft_putunsigned_nbr.c




OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)


%.o : %.c
		cc $(FLAG) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re: fclean , all

.PHONY: NAME , all , clean , fclean , re
