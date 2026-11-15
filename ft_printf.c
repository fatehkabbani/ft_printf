/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:39:42 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:01:53 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (c == 'u')
		return (ft_putunsigned_nbr(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(args, unsigned int), c == 'X'));
	if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		i;
	int		total_printed;

	total_printed = 0;
	i = 0;
	if (!f)
		return (0);
	va_start(args, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			total_printed += ft_format(f[i], args);
		}
		else
		{
			ft_putchar(f[i]);
			total_printed++;
		}
		i++;
	}
	va_end(args);
	return (total_printed);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = ft_printf("this is %u a test\n");
// 	b = printf("this is %u a test\n");
// 	printf("ft_printf = %d , printf =  %d\n", a, b);
// }
