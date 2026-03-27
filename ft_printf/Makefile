NAME = libftprintf.a
CC = cc 
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar -rcs

SRC = ft_putchar.c ft_printf.c ft_format.c ft_putnbrbase.c ft_putstr.c ft_putnbr_unsigned.c ft_putnbr_hexa.c

OBJ = $(SRC:.c=.o)
all : $(NAME)
%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all  clean fclean re
