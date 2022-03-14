/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvilard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:07:04 by dvilard           #+#    #+#             */
/*   Updated: 2021/12/13 18:28:58 by dvilard          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_analyse_percent(const char*str, size_t i, va_list a);
int		ft_print_d(int d);
int		ft_print_p(void *ptr);
int		ft_print_percent(void);
int		ft_print_s(char *s);
int		ft_print_u(unsigned int d);
int		ft_print_x(unsigned int d);
int		ft_print_upx(unsigned int d);
void	ft_put_unsigned_nbr_fd(unsigned int n, int fd);
void	ft_putadress_fd(void *ptr, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_base_hexa_fd(unsigned int nbr, int mode, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *tab);
size_t	ft_print_c(char c);

#endif
