/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 16:19:00 by finarako          #+#    #+#             */
/*   Updated: 2026/02/19 16:26:26 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_printf(const char *str, ...)__attribute__((format(printf, 1, 2)));
int	ft_putnbrbase(int n, char *base);
int	ft_putstr(char *s);
int	ft_format(va_list arg, const char *str, int i);
int	ft_putnbr_unsigned(unsigned int n, char *base);
int	ft_putnbr_hexa(unsigned long n, char *base);
#endif