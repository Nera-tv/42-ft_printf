/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:38:29 by dvilard           #+#    #+#             */
/*   Updated: 2021/11/17 13:38:29 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	char	i;

	i = n % 10 + '0';
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(i, fd);
}
