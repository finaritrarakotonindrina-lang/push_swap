/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 15:40:39 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 14:02:22 by finarako         ###   ########.fr       */
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
char	*strjoin_fonc(char const *s1, char const *s2)
{
	size_t	leng1;
	size_t	leng2;
	size_t	i;
	size_t	j;
	char	*concast;

	leng1 = strlen_fonc(s1);
	leng2 = strlen_fonc(s2);
	concast = malloc(leng1 + leng2 + 1);
	if (!concast)
		return (NULL);
	i = 0;
	while (i < leng1)
	{
		concast[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < leng2)
	{
		concast[i + j] = s2[j];
		j++;
	}
	concast[leng1 + leng2] = '\0';
	return (concast);
}


