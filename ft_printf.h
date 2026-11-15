/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 16:01:57 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/15 16:01:58 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_printf(const char *f, ...);
int	ft_putstr(char *s);
int	ft_puthex(unsigned long long n, int upper_case);
int	ft_putnbr(int n);
int	ft_putptr(void *p);
int	ft_putunsigned_nbr(unsigned int n);
#endif