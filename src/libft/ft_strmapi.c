/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:39:48 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/11 01:12:17 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen((char *)s) + 1);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	idk_but_everything_is_z_now(unsigned int i, char c)
// {
// 	(void)i;
// 	(void)c;
// 	return ('z');
// }
// int	main(void)
// {
// 	printf("%s", ft_strmapi("this is a test", idk_but_everything_is_z_now));
// }