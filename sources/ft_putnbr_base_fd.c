/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:50:00 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/17 14:53:35 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_base_hexa_fd(unsigned int nbr, int mode, int fd)
{
	int		nbrf[50];
	int		i;
	char	*base;

	if (mode == 1)
		base = "0123456789abcdef";
	if (mode == 2)
		base = "0123456789ABCDEF";
	i = 0;
	if (nbr == 0)
		ft_putchar_fd('0', fd);
	while (nbr)
	{
		nbrf[i] = nbr % 16;
		nbr = nbr / 16;
		i++;
	}
	while (--i >= 0)
		ft_putchar_fd(base[nbrf[i]], fd);
}
