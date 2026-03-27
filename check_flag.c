/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_flag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: finarako <finarako@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:37:10 by finarako          #+#    #+#             */
/*   Updated: 2026/03/26 18:57:33 by finarako         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push.h"

int check_flag(char *argv)
{
	if (ft_strcmp("--simple",argv)== 0)
		return (1);
	else if (ft_strcmp("--medium",argv)== 0)
		return (1);
	else if (ft_strcmp("--complex",argv)== 0)
		return (1);
	else if (ft_strcmp("--adaptive",argv)== 0)
		return (1);
	else if (ft_strcmp("--bench",argv)== 0)
		return (1);
	return (0);
}
