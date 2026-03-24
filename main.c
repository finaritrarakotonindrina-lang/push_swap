/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:43:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/23 16:10:12 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"
#include <stdio.h>
void free_split_argv(char **split_argv)
{
	int i;

	i = 0;
	while (split_argv[i] != NULL)
	{
    	free(split_argv[i]);
    	i++;
	}
	free(split_argv);
}

int main(int argc, char **argv)
{
	int **array;
	t_list *stack_a;
	t_list *stack_b;
	char ** split_argv;
	char *join_it;

	stack_a = NULL;
	stack_b = NULL;
	array = NULL;
	if (argc == 1)
	{
		ft_printf("error");
		return 0;
	}
	else
	{
		join_it = join_argv (argc, argv);
		split_argv = split_fonc (join_it, ' ');
		free (join_it);
		argc = compt_newargc(split_argv);
		stack_a = the_input(argc, split_argv, array, &stack_a);
		free_split_argv(split_argv);
		if (is_sorted(&stack_a) == false)
		{
			ft_printf("false mann\n");
			for_thre(&stack_a);
		}
		else
			ft_printf("true mann\n");
			
	}
		while (stack_a != NULL)
	{
		ft_printf("[%d] -> ",(*stack_a).content);
		stack_a = stack_a -> next;
	}
	ft_printf("NULL\n");
}
