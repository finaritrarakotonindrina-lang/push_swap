#ifndef PUSH_H
# define PUSH_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdbool.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_list
{
	int				index;
	int				content;
	struct s_list	*next;
}					t_list;

int main (int argc, char **argv);
int	ft_strcmp(char *s1, char *s2);
t_list	*last_list(t_list *lst);
void	add_front(t_list **lst, t_list *new);
char	*strjoin_fonc(char const *s1, char const *s2);
void is_free(int **array, int argc);
void	add_back(t_list **lst, t_list *new);
t_list *take_top_list(t_list **lst);
t_list *take_bouttom_list(t_list **lst);
t_list *return_rotate(t_list **lst);
t_list *rotate(t_list **lst);
void push(t_list **lst1, t_list **lst2);
void	swap(t_list **lst);
long	ft_atol(const char *nptr);
char	**split_fonc(char const *s, char c);
t_list *the_input(int newargc, char **argv , int **array, t_list **stack_a);
char	*substr_fonc(char const *s, unsigned int start, size_t len);
size_t	strlen_fonc(const char *s);
char	*strdup_fonc(const char *s);
bool is_sorted(t_list **stack_a);
char *join_argv(int argc, char **argv);
int compt_newargc(char **newargv);
void push_a(t_list **lst_a, t_list **lst_b);
void push_b(t_list **lst_a, t_list **lst_b);
void swap_swap(t_list **lst_a, t_list **lst_b);
void rotate_rotate(t_list **lst_a, t_list **lst_b);
void return_rotate_rotate(t_list **lst_a, t_list **lst_b);
t_list *for_two(t_list *stack_a);
t_list *for_thre(t_list **stack_a);
void ft_assign_index(t_list *stack);
int	stack_size(t_list *lst);
void bring_to_top(t_list **stack_a, t_list *target);
int find_position(t_list *stack_a, t_list *target);
t_list *the_target(t_list *stack_a, int i);
#endif