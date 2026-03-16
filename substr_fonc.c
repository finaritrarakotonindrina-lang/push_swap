/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr_fonc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:49:00 by finarako          #+#    #+#             */
/*   Updated: 2026/03/16 20:04:29 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

char	*substr_fonc(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	real_len;
	size_t	i;
	char	*substring;
	char	*dup;

	if (!s)
		return (NULL);
	s_len = strlen_fonc(s);
	if (start >= s_len)
	{
		dup = strdup_fonc("");
		return (dup);
	}
	real_len = s_len - start;
	if (real_len > len)
		real_len = len;
	substring = malloc(real_len + 1);
	if (!substring)
		return (NULL);
	i = 0;
	while (i < real_len)
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
}
