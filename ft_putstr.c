/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:05:51 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:02:52 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	total_printed;

	total_printed = 0;
	i = 0;
	if (!s)
	{
		return (write(1, "(null)", 6));
	}
	while (s[i])
	{
		total_printed += ft_putchar(s[i]);
		i++;
	}
	return (total_printed);
}
