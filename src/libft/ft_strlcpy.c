/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:08:03 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/04 21:05:24 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return ((size_t)ft_strlen((char *)src));
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((size_t)ft_strlen((char *)src));
}
// #include <stdio.h>

// int	main(void)
// {
// 	char dest[10];
// 	printf("%ld", ft_strlcpy(dest, "this is a test hopfuyll it wor find (;",
// 			12));
// 	printf("%s", dest);
// }