/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 14:31:48 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/11 12:58:15 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*cpy;
	size_t	i;
	size_t	j;

	if ((size_t)start >= ft_strlen((char *)s))
		len = 0;
	else if ((size_t)len > ft_strlen((char *)s) - start)
		len = ft_strlen((char *)s) - start;
	j = 0;
	i = start;
	cpy = malloc(len + 1);
	if (!cpy)
		return (0);
	while (j < len && s[i])
	{
		cpy[j] = s[i];
		i++;
		j++;
	}
	cpy[j] = '\0';
	return (cpy);
}
// int	main(void)
// {
// 	char *str = ft_substr("this is a test", 1000, 1);
// 	free(str);
// }