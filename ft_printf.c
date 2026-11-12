/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 13:39:42 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/12 18:49:01 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libftprintf.h"
#include "ft_printf.h"
#include "src/libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const char *f, ...)
{
	va_list	args;
	int		i;
	int		total_printed;

	total_printed = 0;
	i = 0;
	va_start(args, f);
	while (f[i])
	{
		if (f[i] == '%')
		{
			i++;
			if (f[i] == 's')
				total_printed = ft_putstr(va_arg(args, char *));
			if (f[i] == 'c')
				total_printed = ft_putchar(va_arg(args, int));
		}
		else
		{
			ft_putchar(f[i]);
		}
		i++;
	}
	va_end(args);
	return (0);
}
int	main(void)
{
	// ft_printf("this is %d %s %d a test %d", 24);
	// ft_printf("this is a test %s23 %c", "yup a test" , 500);
	// printf("this is a test %c %s" , 500 , "yup a test");
}