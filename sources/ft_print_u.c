/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 10:53:11 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/23 15:06:01 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_u(unsigned int d)
{
	unsigned int	u;
	int				i;

	i = 0;
	u = (unsigned int )d;
	ft_put_unsigned_nbr_fd(u, 1);
	if (d < 0)
		d = -d;
	while (d > 9)
	{
		d /= 10;
		i++;
	}
	return (i - 1);
}
