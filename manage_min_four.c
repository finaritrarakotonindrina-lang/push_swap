/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_min_four.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 08:12:10 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 13:53:57 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_list *for_two(t_list *stack_a)
{
	t_list *temp1;
	t_list *temp2;
	if (!stack_a || !(stack_a)->next)
        return (NULL);
	temp1 = stack_a;
	temp2 = stack_a -> next;
	while (temp2)
	{
		if(temp1->content > temp2->content)
		{
			swap (&stack_a);
			ft_printf("sa\n");
			return (stack_a);
		}
	}
	return (stack_a);
}
t_list *for_thre(t_list **stack_a)
{
	int a;
	int b;
	int c;

	a = (*stack_a) ->content;
	b = (*stack_a) ->next -> content;
	c = (*stack_a) -> next-> next -> content;
	if ( a > b && b < c && a < c)
		swap(stack_a);
	else if (a > b && b > c && a > c)
	{
		swap(stack_a);
		return_rotate(stack_a);
		ft_printf("sa\nrra\n");
	}
	else if ( a > b && b < c && a > c)
	{
		rotate (stack_a);
		ft_printf ("ra\n");
	}
	else if (a < b && b > c && a < c)
	{
		swap(stack_a);
		rotate(stack_a);
		ft_printf("sa\nra\n");
	}
	else if ( a < b && b > c && a > c)
	{
		return_rotate(stack_a);
		ft_printf("rra\n");
	}
	return (*stack_a);
}





