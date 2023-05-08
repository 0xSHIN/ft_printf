/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:57:52 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/08 07:38:08 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdio.h>
# include	<stdarg.h>
# include	<stddef.h>
# include	<stdint.h>
# include	<string.h>
# include   <stdlib.h>
# include	<unistd.h>

int		ft_printf(const char *str, ...);
int		check(char c);
int		print_c(va_list arguments);
int		print_p(va_list arguments);
size_t	ft_strlen(char *str);
int		flags(char c, va_list arguments);
int		ft_counthex(unsigned long long int nb);
void	ft_putnbr_base(unsigned long long nb, char *base);
void	ft_putchar(char c);
void	ft_putnbr(int n);
int		print_d_i(va_list arguments);
int		ft_countnbr(long long int nb);
int		print_u(va_list arguments);
int		print_x(va_list arguments);
int		print_upcase_x(va_list arguments);
int		print_percent(void);
int		print_s(va_list arguments);
void	ft_unsigned_putnbr(unsigned int n);
void	ft_putstr(char *str);

#endif
