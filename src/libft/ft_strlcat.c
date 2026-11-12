/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:08:34 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/11 01:12:13 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t count)
{
	int	len;
	int	i;

	if (!dest && !src)
		return (0);
	len = ft_strlen(dest);
	i = 0;
	if (count <= (size_t)len)
		return (count + ft_strlen((char *)src));
	while (src[i] && (size_t)(len + i + 1) < count)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + ft_strlen((char *)src));
}
// int	main(void)
// {
// 	char dest[20] = "";
// 	char dest1[20] = "";
// 	printf("Result: %d\n", strlcat(dest, "hello", sizeof(dest)));
// 	printf("Result: %d\n", ft_strlcat(dest1, "hello", sizeof(dest1)));
// 	printf("Destination: %s\n", dest);
// 	printf("Destination: %s\n", dest1);
// }