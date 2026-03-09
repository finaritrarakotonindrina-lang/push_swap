/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 11:54:13 by finarako          #+#    #+#             */
/*   Updated: 2026/03/08 15:30:42 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

void push_a(t_list **lst_a, t_list **lst_b)
{
	t_list *temp;

	temp = take_top_list(lst_b);
	add_front(lst_a, temp);
}
void push_b(t_list **lst_a, t_list **lst_b)
{
	t_list *temp;

	temp = take_top_list(lst_a);
	add_front(lst_b, temp);
}
void swap_a(t_list **lst_a)
{
	
	swap(lst_a);
}
void swap_b(t_list **lst_b)
{
	swap(lst_b);
}
void swap_swap(t_list **lst_a, t_list **lst_b)
{
	swap(lst_a);
	swap(lst_b);
}
void rotate_a(t_list **lst_a)
{
	rotate(lst_a);	
}
void rotate_b(t_list **lst_b)
{
	rotate(lst_b);	
}
void rotate_rotate(t_list **lst_a, t_list **lst_b)
{
	rotate(lst_a);
	rotate(lst_b);
}
void return_rotate_a(t_list **lst_a)
{
	return_rotate(lst_a);
}
void return_rotate_b(t_list **lst_b)
{
	return_rotate(lst_b);
}
void return_rotate_rotate(t_list **lst_a, t_list **lst_b)
{
	return_rotate(lst_a);
	return_rotate(lst_b);
}
