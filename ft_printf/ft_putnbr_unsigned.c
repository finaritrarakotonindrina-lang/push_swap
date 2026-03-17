/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:11:57 by finarako          #+#    #+#             */
/*   Updated: 2026/02/19 15:52:36 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, char *base)
{
	int		count;
	long	long_nbr;

	long_nbr = (long)n;
	count = 0;
	if (long_nbr >= 10)
	{
		count += ft_putnbrbase(long_nbr / 10, base);
		count += ft_putnbrbase(long_nbr % 10, base);
	}
	else
	{
		count = count + ft_putchar(long_nbr + '0');
	}
	return (count);
}
