/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 14:12:20 by finarako          #+#    #+#             */
/*   Updated: 2026/02/19 16:18:34 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		c;

	if (!str)
		return (-1);
	va_start(arg, str);
	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			c += ft_format(arg, str, i);
		}
		else
			c += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (c);
}
