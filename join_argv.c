/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:40:39 by finarako          #+#    #+#             */
/*   Updated: 2026/03/17 16:05:13 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

char *join_argv(int argc, char **argv)
{
	int i;
	char *newargv;
	char *temp;

	i = 0;
	newargv = strdup_fonc("");
	while (i < argc - 1)
	{
		temp = strjoin_fonc(newargv, argv[i + 1]);
		free(newargv);
		newargv = strjoin_fonc(temp, " ");
		free(temp);
		i++;
	}
	return (newargv);
}
