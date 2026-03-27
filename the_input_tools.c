/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_input_tools.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:46:27 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 14:54:19 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void is_free(int **array, int argc)
{
	int i;

	i = 0;
	while (i < (argc))
	{
		free(array[i]);
		i++;
	}
	free(array);
}
static int has_duplicated(int **array)
{
	int i;
	int j;

	i = 0;
	if (!array)
	{
		ft_printf("error\n");
		exit(1);
	}
	while (array[i] != NULL)
	{
		j = i + 1;
		while (array[j] != NULL)
		{
			if (*array[i] == *array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
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
