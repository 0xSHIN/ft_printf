/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 07:33:37 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/08 07:41:20 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_countnbr(long long int nb)
{
	int	count;

	count = 0;
	if (nb < 0)
	{
		nb *= -1;
		count++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
			nb /= 10;
			count++;
	}
	return (count);
}

int	ft_counthex(unsigned long long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
			nb /= 16;
			count++;
	}
	return (count);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
