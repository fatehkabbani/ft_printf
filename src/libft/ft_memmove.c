/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:42:19 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/04 12:07:37 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n > 0)
		{
			((unsigned char *)dest)[n - 1] = ((unsigned char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// int main()
// {
//   char src[8] = "abcde";
//   char src1[8] = "abcde";
//   int size = 5;
//   // printf("%s\n", src + 2);
//   printf("%s | \n",ft_memmove(src + 3, src, size));
//   printf("%s |\n",ft_memmove(src1+ 3, src1, size));
//   // printf("%s\n", src);

// }
