/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:06:53 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/10 11:29:40 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;
	int	j;

	i = ft_lstsize(lst) - 1;
	j = 0;
	while (j < i)
	{
		lst = lst->next;
		j++;
	}
	return (lst);
}
