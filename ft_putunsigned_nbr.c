/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned_nbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:32:50 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:03:37 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned_nbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_putunsigned_nbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}
