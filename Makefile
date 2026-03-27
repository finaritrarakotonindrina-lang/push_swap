NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
PRINTF_DIR = ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a
SRC = check_flag.c\
	join_argv.c\
	main.c\
	manage_min_four.c\
	move_utils_2.c\
	move_utils.c\
	simple_tools.c\
	split_fonc.c\
	t_list_utils.c\
	the_input_tools.c\
	the_input.c\
	tools.c

OBJS = $(SRC:.c=.o)
all : $(NAME)
%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@
$(NAME) : $(OBJS)
	make -C $(PRINTF_DIR)
	$(CC) $(FLAGS) $(OBJS) $(PRINTF_LIB) -o $(NAME)
clean :
	make -C $(PRINTF_DIR) clean
	$(RM) $(OBJS)
fclean : clean
	make -C $(PRINTF_DIR) fclean
	$(RM) $(NAME)
re : fclean all
.PHONY: all clean fclean re