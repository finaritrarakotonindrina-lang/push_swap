/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:41:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/17 10:42:49 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

bool is_sorted(t_list **stack_a)
{
	t_list *temp1;
	t_list *temp2;
	if (!stack_a || !*stack_a || !(*stack_a)->next)
        return (true);
	temp1 = *stack_a;
	temp2 = (*stack_a) -> next;
	while (temp2)
	{
		if(temp1 -> content > temp2 -> content)
			return (false);
		temp1 = temp2;
		temp2 = temp1 -> next;
	}
	return (true);
}
