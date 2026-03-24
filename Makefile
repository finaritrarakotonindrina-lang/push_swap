NAME = push_swap
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf
PRINTF_DIR = ft_printf
PRINTF_LIB = $(PRINTF_DIR)/libftprintf.a
SRC = main.c \
 	ft_atol.c \
 	utils.c \
	utils_2.c \
 	last_list.c \
 	add_front.c \
 	add_back.c \
	split_fonc.c \
	the_input.c \
	substr_fonc.c\
	strlen_fonc.c\
	strdup_fonc.c \
	is_sorted.c \
	strjoin_fonc.c\
	join_argv.c \
	for_min_five.c
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