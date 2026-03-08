#ifndef PUSH_H
# define PUSH_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				*content;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

long	ft_atoi(const char *nptr);
int main (int argc, char **argv);
t_list	*last_list(t_list *lst);
void	add_front(t_list **lst, t_list *new);
void	add_back(t_list **lst, t_list *new);
t_list *take_top_list(t_list **lst);
t_list *take_bouttom_list(t_list **lst);
t_list *return_rotate(t_list **lst);
t_list *rotate(t_list **lst);
void push(t_list **lst1, t_list **lst2);
void	swap(t_list **lst);


#endif