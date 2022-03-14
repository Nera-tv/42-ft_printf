/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_majx.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:43:17 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/23 12:55:03 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_upx(unsigned int d)
{
	int	i;

	ft_putnbr_base_hexa_fd(d, 2, 1);
	i = 0;
	if (d == 0)
		return (-1);
	while (d)
	{
		d = d / 16;
		i++;
	}
	return (i - 2);
}

int	ft_print_x(unsigned int d)
{
	int	i;

	ft_putnbr_base_hexa_fd(d, 1, 1);
	i = 0;
	if (d == 0)
		return (-1);
	while (d)
	{
		d = d / 16;
		i++;
	}
	return (i - 2);
}
