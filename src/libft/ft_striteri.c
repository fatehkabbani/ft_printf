/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 14:58:31 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/08 15:05:27 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void	idk_but_everything_is_z_now(unsigned int i, char *c)
// {
// 	(void)i;
// 	*c = 'z';
// }
// int	main(void)
// {
// 	char str[] = "this is a test hopfully it works fine
// beceause it started be annoying tbh and i don't want
//  to spend another second trying to figure out why its not working ):<<<<<";
// 	ft_striteri(str, idk_but_everything_is_z_now);
// 	printf("%s", str);
// }