/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:45:56 by finarako          #+#    #+#             */
/*   Updated: 2026/03/06 15:46:31 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void	add_back(t_list **lst, t_list *new)
{
	t_list	*last_new;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last_new = *lst;
	while (last_new -> next != NULL)
	{
		last_new = last_new -> next;
	}
	last_new -> next = new;
}