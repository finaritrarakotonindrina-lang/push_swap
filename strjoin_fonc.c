/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin_fonc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 13:27:45 by finarako          #+#    #+#             */
/*   Updated: 2026/03/19 12:43:49 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

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
