/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:33:34 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:04:06 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int	total_printed;

	if (!p)
		return (write(1, "(nil)", 5));
	total_printed = write(1, "0x", 2);
	total_printed += ft_puthex((unsigned long long)p, 0);
	return (total_printed);
}
