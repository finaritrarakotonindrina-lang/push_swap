/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:40:39 by finarako          #+#    #+#             */
/*   Updated: 2026/03/19 14:04:36 by finarako         ###   ########.fr       */
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
int compt_newargc(char **newargv)
{
	int newargc;

	newargc = 0;
	while (newargv[newargc])
		newargc++;
	return (newargc);
}

