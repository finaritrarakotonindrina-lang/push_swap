/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_simple.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:48:42 by finarako          #+#    #+#             */
/*   Updated: 2026/03/24 18:36:26 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

t_list *the_target(t_list *stack_a, int i)
{
	while (stack_a)
	{
		if (stack_a -> index == i)
			return (stack_a);
		stack_a = stack_a -> next;
	}
	return (stack_a);
}
int find_position(t_list *stack_a, t_list *target)
{
	int count;

	count = 0;
	while (stack_a)
	{
		if (stack_a == target)
			return (count);
		count++;
		stack_a = stack_a->next;
	}
	return (count);
}
void bring_to_top(t_list **stack_a, t_list *target)
{
	int size;
	int position;

	position = find_position (stack_a, target);
	size = stack_size(stack_a);
	if (position <= (size/2))
	{
		while (position > 0)
		{
			rotate(stack_a);
			ft_printf("ra\n");
			position--;
		}
	}
	else
	{
			while (position < size)
		{
			return_rotate(stack_a);
			ft_printf("ra\n");
			position++;
		}
	}
}
void is_simple(t_list **stack_a)
{
	t_list *target;
	t_list *stack_b;

	int i;
	int size;

	size = stack_size(*stack_a);
	if (size == 2)
		for_two(*stack_a);
	else if (size == 3)
		for_thre(stack_a);
	else
	{
		i = 0;
		while (stack_a)
		{
			target = the_target(stack_a, i);
			bring_to_top(stack_a, target);
			push_b(&stack_a, &stack_b);
		}
		
	}
	
}
