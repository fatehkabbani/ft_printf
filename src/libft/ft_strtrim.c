/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:11:33 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/09 20:06:10 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen((char *)s1) - 1;
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	while (j >= 0 && ft_isset(s1[j], set))
		j--;
	trimmed = ft_substr(s1, (unsigned int)i, (size_t)j + 1 - i);
	return (trimmed);
}
