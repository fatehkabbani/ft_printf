/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:39:23 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/08 18:35:33 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*s2;
	int		i;

	i = 0;
	s2 = malloc(ft_strlen((char *)s) + 1);
	if (!s2)
		return (0);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
// int	main(void)
// {
// 	char *str = "this is a test";
// 	char *s2;
// 	s2 = ft_strdup(str);
// 	// printf("%s\n", s2);
// 	free(s2);
// }