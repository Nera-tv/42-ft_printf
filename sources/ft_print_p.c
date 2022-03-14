/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:01:20 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/23 14:53:01 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_p(void *ptr)
{
	unsigned long	adr;
	int				i;

	ft_putadress_fd(ptr, 1);
	adr = (unsigned long)ptr;
	i = 0;
	if (adr == 0)
		return (1);
	while (adr > 0)
	{
		adr /= 16;
		i++;
	}
	return (i);
}
