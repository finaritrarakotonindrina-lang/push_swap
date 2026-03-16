/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_fonc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:03:38 by finarako          #+#    #+#             */
/*   Updated: 2026/03/16 19:55:40 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

static int	compt_word(const char *s, char c)
{
	int	i;
	int	compt;

	i = 0;
	compt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			compt++;
		}
		i++;
	}
	return (compt);
}

static int	leng_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**free_it(char **array, int nbr_word)
{
	while (nbr_word >= 0)
	{
		free(array[nbr_word]);
		nbr_word--;
	}
	free(array);
	return (NULL);
}

static char	**split_it(char **array, const char *s, char c, int nbr_word)
{
	int	i;

	i = 0;
	while (i < nbr_word)
	{
		while (*s == c)
			s++;
		array[i] = substr_fonc(s, 0, leng_word(s, c));
		if (!array[i])
			return (free_it(array, i - 1));
		s = s + leng_word(s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**split_fonc(char const *s, char c)
{
	int		nbr_word;
	char	**result;

	if (!s)
		return (NULL);
	nbr_word = compt_word(s, c);
	result = (char **)malloc(sizeof(char *) * (nbr_word + 1));
	if (!result)
		return (NULL);
	return (split_it(result, s, c, nbr_word));
}
