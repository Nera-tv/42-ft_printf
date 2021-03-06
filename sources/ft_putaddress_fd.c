/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <dvilard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:26:30 by dvilard           #+#    #+#             */
/*   Updated: 2022/03/02 15:31:52 by dvilard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putadress_fd(void *ptr, int fd)
{
	unsigned long	adr;
	char const		*base;
	int				i;
	int				nbrf[50];

	adr = (unsigned long)ptr;
	base = "0123456789abcdef";
	ft_putstr_fd("0x", fd); 
	i = 0;
	if (adr == 0)
		ft_putchar_fd('0', fd);
	while (adr)
	{
		nbrf[i] = adr % 16;
		adr = adr / 16;
		i++;
	}
	while (--i >= 0)
		ft_putchar_fd(base[nbrf[i]], fd);
}
