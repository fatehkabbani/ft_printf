/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:31:28 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:03:23 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, int upper_case)
{
	char	*base;
	int		total_printed;

	base = "0123456789abcdef";
	if (upper_case)
		base = "0123456789ABCDEF";
	total_printed = 0;
	if (n >= 16)
		total_printed += ft_puthex(n / 16, upper_case);
	total_printed += ft_putchar(base[n % 16]);
	return (total_printed);
}
