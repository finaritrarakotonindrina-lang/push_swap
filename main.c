/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:43:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/13 15:52:30 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static int	is_digit(char *str)
{
	int i;

	i = 0;
	if (!str)
		return 0;
	if(str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return(0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
static int valid_char(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		if(is_digit(argv[i]) == 0)
			return(0);
		i++;
	}
	return (1);
}
static int limit_int(int *array)
{
	if (*array > __INT_MAX__ || *array < -2147483648)
		return (1);
	return(0);
}
static int	**char_to_int(int argc, char **argv)
{
	int **array;
	int i;

	i = 0;
	array = malloc(sizeof(int **)*(argc));
	while (i < argc - 1)
	{
		array[i] = (int*)ft_atol(argv[i + 1]);
		if (limit_int(array[i]))
			return (0);
		i++;
	}
	array[i] = NULL;
	return (array);	
}

static int has_duplicated(int **array)
{
	int i;
	int j;

	i = 0;
	while (array[i] != NULL)
	{
		j = i + 1;
		while (array[j] != NULL)
		{
			if (array[i] == array[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
static void int_to_stack_value(int **array, t_list **stack_a)
{
	int i;
	t_list *new;

	i = 0;
	stack_a = malloc(sizeof(t_list));
	new = malloc(sizeof(t_list));
	while (array[i] != NULL)
	{
		new -> content = array[i];
		add_back(stack_a, new);
		i++;
	}
}
#include <stdio.h>
int main(int argc, char **argv)
{
	int **array;
	t_list *stack_a;
	t_list *stack_b;
	//t_list *stock_it;
	int digit;
	int i;
 
	stack_a = NULL;
	stack_b = malloc(sizeof(t_list));
	//stock_it = malloc(sizeof(t_list));
	array = NULL;
	digit= 0;
	i = 0;
	if (argc == 1)
		return 0;
	else
	{
		if (valid_char(argc, argv) == 0)
			return (0);
		printf("%d\n",valid_char(argc, argv));
		array = char_to_int(argc, argv);
		if (has_duplicated(array) == 0)
			return (0);
		printf("%d\n",has_duplicated(array));
		int_to_stack_value(array, &stack_a);
		while (array[i] != NULL)
		{
    		printf("%d\n", *array[i]);
    		i++;
		}
	}
}
