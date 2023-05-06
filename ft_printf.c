/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 11:55:37 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/06 12:06:25 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./utils/ft_printf.h"

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
	void *p;
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
				p = va_arg(arguments, void *);
				ft_putstr(p);	
			}
			if (casted_str[i + 1] == '%')
				write(1, '%', 1);
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
	ft_printf("test %p", ptr);
}
