/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 13:55:25 by finarako          #+#    #+#             */
/*   Updated: 2026/03/23 08:53:50 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_list *take_top_list(t_list **lst)
{
	if (!lst || !*lst)
		return (NULL);
	t_list *temp;
	temp = (*lst);
	*lst = (*lst) -> next;
	temp -> next = NULL;
	return (temp);
}
t_list *take_bouttom_list(t_list **lst)
{
	if (!lst || !*lst || !(*lst)->next)
		return (NULL);
	t_list *temp;
	temp = last_list(*lst);
	while ((*lst)-> next -> next != NULL)
		lst = &(*lst) -> next;
	(*lst) -> next = NULL;
	return (temp);
}
t_list *return_rotate(t_list **lst)
{
	if (!lst)
		return (NULL);
	t_list *temp;
	temp = take_bouttom_list(lst);
	add_front (lst,temp);
	return (*lst);
}
t_list *rotate(t_list **lst)
{
	if (!lst || !*lst)
		return (NULL);
	t_list *temp;
	temp = take_top_list(lst);
	add_back(lst, temp);
	return(*lst);
}
void push(t_list **lst1, t_list **lst2)
{
	if (!lst1 || !*lst1)
        return ;
	t_list *temp;
	temp = take_top_list(lst1);
	add_front(lst2, temp);
}

void	swap(t_list **lst)
{
	if (!lst || !*lst || !(*lst) -> next)
		return ;
	int temp;
	temp = (*lst)->content;
	(*lst) -> content = (*lst)->next->content;
	(*lst)->next->content = temp;
}
