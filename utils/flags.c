/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 22:39:28 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/08 07:39:27 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	flags(char c, va_list arguments)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += print_c(arguments);
	else if (c == 's')
		count += print_s(arguments);
	else if (c == 'p')
		count += print_p(arguments);
	else if (c == 'd' || c == 'i')
		count += print_d_i(arguments);
	else if (c == 'u')
		count += print_u(arguments);
	else if (c == 'x')
		count += print_x(arguments);
	else if (c == 'X')
		count += print_upcase_x(arguments);
	else if (c == '%')
		count += print_percent();
	return (count);
}
