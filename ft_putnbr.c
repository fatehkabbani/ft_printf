/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:33:05 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:03:57 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	long	nb;
	int		total_printed;

	nb = n;
	total_printed = 0;
	if (nb < 0)
	{
		total_printed += ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
		total_printed += ft_putnbr(nb / 10);
	total_printed += ft_putchar(nb % 10 + 48);
	return (total_printed);
}
