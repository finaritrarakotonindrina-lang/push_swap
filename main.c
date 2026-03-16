/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:43:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/16 19:48:53 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

// static int	is_digit(char *str)
// {
// 	int i;

// 	i = 0;
// 	if (!str)
// 		return 0;
// 	if(str[i] == '+' || str[i] == '-')
// 		i++;
// 	if (!str[i])
// 		return(0);
// 	while (str[i])
// 	{
// 		if (!(str[i] >= '0' && str[i] <= '9'))
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }
// static int valid_argv(int argc, char **argv)
// {
// 	int i;

// 	i = 1;
// 	while (i < argc)
// 	{
// 		if(is_digit(argv[i]) == 0)
// 			return(0);
// 		i++;
// 	}
// 	return (1);
// }
// static int **argv_to_int(int argc, char **argv)
// {
//     int **array;
//     int i;
//     long tmp;

//     i = 0;
//     array = malloc(sizeof(int *) * argc);
//     if (!array)
//         return (NULL);
//     while (i < argc - 1)
//     {
//         tmp = ft_atol(argv[i + 1]);
//         if (tmp > INT_MAX || tmp < INT_MIN)
//         {
//             free(array);
//             return (NULL);
//         }
//         array[i] = malloc(sizeof(int));
//         *array[i] = (int)tmp;
//         i++;
//     }
//     array[i] = NULL;
//     return (array);
// }

// static int has_duplicated(int **array)
// {
// 	int i;
// 	int j;

// 	i = 0;
// 	while (array[i] != NULL)
// 	{
// 		j = i + 1;
// 		while (array[j] != NULL)
// 		{
// 			if (array[i] == array[j])
// 				return (0);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (1);
// }
// static void int_to_stack_value(int **array, t_list **stack_a)
// {
// 	int i;
// 	t_list *new;

// 	i = 0;
// 	while (array[i] != NULL)
// 	{
// 		new = malloc(sizeof(t_list));
// 		if (!new)
// 			return ;
// 		new -> content = *array[i];
// 		new -> next = 	NULL;
// 		add_back(stack_a, new);
// 		i++;
// 	}
// }
// void free_it(int **array, int argc)
// {
// 	int i;

// 	i = 0;
// 	while (i < (argc - 1))
// 	{
// 		free(array[i]);
// 		i++;
// 	}
// 	free(array);
// }
// bool is_sorted(t_list **stack_a)
// {
// 	t_list *temp1;
// 	t_list *temp2;
// 	if (!stack_a || !*stack_a || !(*stack_a)->next)
//         return (true);
// 	temp1 = *stack_a;
// 	temp2 = (*stack_a) -> next;
// 	while (temp2)
// 	{
// 		if(temp1 -> content > temp2 -> content)
// 			return (false);
// 		temp1 = temp2;
// 		temp2 = temp1 -> next;
// 	}
// 	return (true);
// }
#include <stdio.h>
int main(int argc, char **argv)
{
	int **array;
	t_list *stack_a;
	t_list *stack_b;
	//t_list *stock_it;
	int digit;
 
	stack_a = NULL;
	stack_b = NULL;
	array = NULL;
	digit= 0;
	if (argc == 1)
		return 0;
	else if ( argc == 2)
	{
		split_fonc(argv[1], ' ');
		
	}
	else
	{
		digit = the_input(argc, argv, array, &stack_a);
		// if (valid_argv(argc, argv) == 0)
		// 	return (0);
		// printf("%d\n",valid_argv(argc, argv));
		// array = argv_to_int(argc, argv);
		// if (has_duplicated(array) == 0)
		// 	return (0);
		// printf("%d\n",has_duplicated(array));
		// int_to_stack_value(array, &stack_a);
		// free_it(array, argc);
		// if (is_sorted(&stack_a) == false)
		// {
			
		// }
		// else
		// 	exit(1);
		// while (array[i] != NULL)
		// {
    	// 	printf("%d\n", *array[i]);
    	// 	i++;
		// }
	}
}
