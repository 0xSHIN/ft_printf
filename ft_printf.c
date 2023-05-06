/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:55:37 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/06 15:49:36 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils/ft_printf.h"

void print_hex(uintptr_t n)
{
    if (n >= 16)
    {
        print_hex(n / 16);
    }
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int	ft_printf(const char *str, ...)
{
	char *casted_str;
	va_list	arguments;
	int i = 0;
	char c;

	int len_str = strlen(str);
	casted_str = (char *)str;
	va_start(arguments, str);
	char *s;
	uintptr_t hex_arg;
	int	x;
	int	d;
	int	i_num;
	c = 0;
	while (i < len_str)
	{
		if (casted_str[i] == '%' && casted_str[i + 1] != '\0')
		{
			if (casted_str[i + 1] == 'c')
			{
				c = (char)va_arg(arguments, int);
				write(1, &c, 1);
			}
			if (casted_str[i + 1] == 's')
			{
				s = va_arg(arguments, char *);
				ft_putstr(s);
			}
			if (casted_str[i + 1] == 'p')
			{
				hex_arg = (uintptr_t)va_arg(arguments, unsigned long);
				write(1, "0x", 2);
				print_hex(hex_arg);
			}
			if (casted_str[i + 1] == 'd')
			{
				d = va_arg(arguments, int);
				ft_putnbr_fd(d, 1);
			}
			if (casted_str[i + 1] == 'i')
			{
				i_num = va_arg(arguments, int);
				ft_putnbr_fd(i_num, 1);
			}
			if (casted_str[i + 1] == 'X')
			{
				x = va_arg(arguments, int);
				ft_putnbr_base(x, "0123456789ABCDEF");
			}
			if (casted_str[i + 1] == 'x')
			{
				x = va_arg(arguments, int);
				ft_putnbr_base(x, "0123456789abcdef");
			}	
			if (casted_str[i + 1] == '%')
				write(1, "%", 1);
			i += 2;
		}
		write(1, &casted_str[i], 1);
		i++;
	}
}

int main()
{
	int x = 50;
	int *ptr = &x;
	ft_printf("ft_printf: %p\n", ptr);
	printf("printf: %p\n", ptr);
}
