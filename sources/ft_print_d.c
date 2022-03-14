/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:24:36 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/23 11:37:42 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_d(int d)
{
	int	i;

	i = 0;
	ft_putnbr_fd(d, 1);
	if (d == -2147483648)
		return (9);
	if (d < 0)
	{
		i++;
		d = -d;
	}
	while (d > 9)
	{
		d /= 10;
		i++;
	}
	return (i - 1);
}