/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyildiz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:44:28 by alyildiz          #+#    #+#             */
/*   Updated: 2023/05/06 14:30:27 by alyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_base(unsigned long long int nb, char *base)
{
    if (nb >= 16)
    {
        ft_putnbr_base(nb / 16, base);
        write(1, &base[nb % 16], 1);
    }
    else
        write(1, &base[nb], 1);
}
