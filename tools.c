/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:58:32 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 14:02:32 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

long	ft_atol(const char *nptr)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			sign *= -1;
		i++;
	}
	while (nptr[i] && nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	return (result * sign);
}
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
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

char	*strdup_fonc(const char *s)
{
	size_t	len;
	char	*dest;
	int		i;

	len = strlen_fonc(s);
	dest = malloc (len + 1);
	i = 0;
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
size_t	strlen_fonc(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
