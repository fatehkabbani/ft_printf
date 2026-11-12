/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 15:19:21 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/09 18:01:11 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;

	joined = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	ft_strlcpy(joined, s1, ft_strlen((char *)s1) + 1);
	ft_strlcat(joined, s2, ft_strlen((char *)s2) + ft_strlen((char *)s1) + 1);
	return (joined);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s", ft_strjoin("hello", "hello"));
// }