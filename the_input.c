/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 10:41:35 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 13:48:33 by finarako         ###   ########.fr       */
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
static int valid_argv(int argc, char **argv)
{
	int i;

	i = 0;
	while (i < argc)
	{
		if(is_digit(argv[i]) == 0)
			return(0);
		i++;
	}
	return (1);
}
static int **argv_to_int(int argc, char **argv)
{
    int **array;
    int i;
    long tmp;

    i = 0;
    array = malloc(sizeof(int *) * (argc + 1));
    if (!array)
        return (NULL);
    while (i < argc)
    {
        tmp = ft_atol(argv[i]);
        if (tmp > INT_MAX || tmp < INT_MIN)
        {
            free(array);
            return (NULL);
        }
        array[i] = malloc(sizeof(int));
        *array[i] = (int)tmp;
        i++;
    }
    array[i] = NULL;
    return (array);
}


static void int_to_stack_value(int **array, t_list **stack_a)
{
	int i;
	t_list *new;

	i = 0;
	while (array[i] != NULL)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return ;
		new -> content = *array[i];
		new -> next = 	NULL;
		add_back(stack_a, new);
		i++;
	}
}

#include <stdio.h>
t_list *the_input(int argc, char **argv , int **array, t_list **stack_a)
{
	if (valid_argv(argc, argv) == 0)
	{
		ft_printf("error");
		return (0);	
	}
	printf("%d\n",valid_argv(argc, argv));
	array = argv_to_int(argc, argv);
	if (has_duplicated(array) == 0)
		return (0);
	printf("%d\n",has_duplicated(array));
	int_to_stack_value(array, stack_a);
	is_free(array, argc);
	return (*stack_a);
}
