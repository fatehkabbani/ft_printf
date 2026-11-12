/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 18:15:55 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/09 17:49:54 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elem, size_t elem_size)
{
	void	*p;
	size_t	total_size;

	if (elem != 0 && (elem_size > SIZE_MAX / elem))
		return (NULL);
	total_size = elem * elem_size;
	if (total_size == 0)
		total_size = 1;
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_bzero(p, total_size);
	return (p);
}
