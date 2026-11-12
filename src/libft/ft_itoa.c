/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 03:21:32 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/11 01:11:47 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_zeros(int x)
{
	int	i;

	i = 1;
	if (x < 0)
		i++;
	while (x <= -10 || x >= 10)
	{
		x /= 10;
		i++;
	}
	return (i);
}

static int	ft_abs(int n)
{
	long	num;

	num = (long)n;
	if (num < 0)
		return (num * -1);
	return (num);
}

static char	*ft_flip(int len, char *res)
{
	int		i;
	char	temp;

	i = 0;
	while (i <= (len / 2 - 1))
	{
		temp = res[i];
		res[i] = res[len - i - 1];
		res[len - i - 1] = temp;
		i++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*res;
	int		the_zees;
	int		num;

	the_zees = count_zeros(n);
	num = ft_abs(n);
	i = 0;
	res = malloc(the_zees + 1);
	while (i < the_zees - (n < 0))
	{
		res[i] = ft_abs(num % 10) + 48;
		num = ft_abs(num / 10);
		i++;
	}
	if (n < 0)
	{
		res[i] = '-';
		i++;
	}
	res = ft_flip(the_zees, res);
	res[i] = '\0';
	return (res);
}
// #include <limits.h>

// int	main(void)
// {
// 	char *str;
// 	str = ft_itoa(312);
// 	printf("%s\n", str);
// 	free(str);
// 	// printf("%d", count_zeros(-3132));
// }