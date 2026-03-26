/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:17:33 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 13:41:41 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_list	*last_list(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next != NULL)
	{
		lst = lst -> next;
	}
	return (lst);
}
int	stack_size(t_list *lst)
{
	int	compt;

	compt = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		compt++;
		lst = lst -> next;
	}
	return (compt);
}
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
void	add_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new -> next = *lst;
	*lst = new;
}
