/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:12:38 by finarako          #+#    #+#             */
/*   Updated: 2026/02/19 16:23:28 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putnbrbase(int n, char *base)
{
	int		count;
	long	long_nbr;
	int		lengh;

	lengh = ft_strlen(base);
	long_nbr = (long)n;
	count = 0;
	if (long_nbr < 0)
	{
		count = count + ft_putchar('-');
		long_nbr *= (-1);
	}
	if (long_nbr >= lengh)
	{
		count = count + ft_putnbrbase(long_nbr / lengh, base);
		count = count + ft_putnbrbase(long_nbr % lengh, base);
	}
	else
	{
		count = count + ft_putchar(base[long_nbr % lengh]);
	}
	return (count);
}
