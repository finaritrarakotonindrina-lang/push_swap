/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 11:43:50 by finarako          #+#    #+#             */
/*   Updated: 2026/03/09 19:45:35 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int	is_digit(char *str)
{
	int i;

	i = 0;
	if (!str)
		return 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		else if(str[i] == '+' || str[i] == '-')
			i++;
		i++;
	}
	return (1);
}
int valid_char(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc - 1)
	{
		if(!is_digit(argv[i]))
			return(1);
		i++;
	}
	return (0);
}
int	**char_to_int(int argc, char **argv)
{
	int **array;
	int i;

	i = 1;
	array = malloc(sizeof(int **)*(argc - 1));
	while (i < argc - 1)
	{
		array[i] == atol(argv[i]);
		i++;
	}
	return (array);	
}
int has_duplicated(int argc, int **array)
{
	int i;
	int j;
	
	i = 1;
	while (array)
	{
		j = i + 1;
		while (i < argc~)
		{
			if (array[i] == array[i + j])
				return (0);
			i++;
		}
	}
	return (1);
}
int val
int main(int argc, char **argv)
{
	char **array;
	t_list *stack_a;
	t_list *stack_b;
	t_list *stock_it;

	stack_a = NULL; 
	stack_b= NULL;
	stock_it= NULL;
	if (argc == 1)
		return 0;
	else
	{
		
	}
	
}

