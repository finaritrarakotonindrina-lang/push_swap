/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:43:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/17 13:48:34 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int **array;
	t_list *stack_a;
	t_list *stack_b;
 
	stack_a = NULL;
	stack_b = NULL;
	array = NULL;
	if (argc == 1)
		return 0;
	else if ( argc == 2)
	{
		char **newargv;
		int newargc;
		newargc = 0;
		newargv = split_fonc(argv[1], ' ');
		while (newargv[newargc] != NULL)
        newargc++;
		stack_a = the_input(newargc, newargv, array, &stack_a, 0);
	}
	else
		stack_a = the_input(argc - 1, argv, array, &stack_a, 1);
	while (stack_a != NULL)
	{
		printf("[%d] -> ",(*stack_a).content);
		stack_a = stack_a -> next;
	}
	printf("NULL\n");
	
}
