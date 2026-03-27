/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:43:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 18:22:32 by finarako         ###   ########.fr       */
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
void ft_assign_index(t_list *stack)
{
	t_list *temp1;
	t_list *temp2;
	int index;

	temp1 = stack;
	while (temp1)
	{
		temp2 = stack;
		index = 0;
		while (temp2)
		{
			if (temp2 -> content < temp1 ->content)
				index ++;
			temp2 = temp2 ->next;
		}
		temp1->index = index;
		temp1 = temp1 -> next;
	}
}
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
		printf("error");
		return 0;
	}
	else
	{
		int i;
		
		i = 1;
		while (i < argc)
		{
			if (check_flag(argv[i])==1)
				i++;
			else
				join_it = join_argv (argc, argv[i]);
			i++;
		}
		split_argv = split_fonc (join_it, ' ');
		free (join_it);
		argc = compt_newargc(split_argv);
		stack_a = the_input(argc, split_argv, array, &stack_a);
		free_split_argv(split_argv);
		ft_assign_index(stack_a);
		if (is_sorted(&stack_a) == false)
		{
			
		}
		else
			printf("true mann\n");
			
	}
		while (stack_a != NULL)
	{
		printf("[%d] -> ",(*stack_a).content);
		printf("rank%d -> ",(*stack_a).index);
		stack_a = stack_a -> next;
	}
}
