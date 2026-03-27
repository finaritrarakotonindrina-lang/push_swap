/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:30:00 by finarako          #+#    #+#             */
/*   Updated: 2026/02/22 14:58:55 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa(unsigned long n, char *base)
{
	int		count;

	count = 0;
	if (n >= 16)
	{
		count += ft_putnbr_hexa(n / 16, base);
		count += ft_putnbr_hexa(n % 16, base);
	}
	else
		count = count + ft_putchar(base[n % 16]);
	return (count);
}
