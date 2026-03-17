/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:12:12 by finarako          #+#    #+#             */
/*   Updated: 2026/02/19 16:16:28 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	forpointer(va_list arg)
{
	int				count;	
	unsigned long	not;

	count = 0;
	not = va_arg(arg, unsigned long);
	if (!not)
		count += ft_putstr("(nil)");
	else
	{
		count += ft_putstr("0x");
		count += ft_putnbr_hexa((unsigned long)not, "0123456789abcdef");
	}
	return (count);
}

int	ft_format(va_list arg, const char *str, int i)
{
	int	count;

	count = 0;
	if (str[i] == 'd' || str[i] == 'i')
		count += ft_putnbrbase(va_arg(arg, int), "0123456789");
	if (str[i] == 'c')
		count += ft_putchar(va_arg(arg, int));
	if (str[i] == 's')
		count += ft_putstr(va_arg(arg, char *));
	if (str[i] == 'u')
		count += ft_putnbr_unsigned(va_arg(arg, unsigned int), "0123456789");
	if (str[i] == '%')
		count += ft_putchar('%');
	if (str[i] == 'p')
		count += forpointer(arg);
	if (str[i] == 'x')
		count += ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789abcdef");
	if (str[i] == 'X')
		count += ft_putnbr_hexa(va_arg(arg, unsigned int), "0123456789ABCDEF");
	return (count);
}
