/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 15:17:33 by finarako          #+#    #+#             */
/*   Updated: 2026/03/06 15:21:17 by finarako         ###   ########.fr       */
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