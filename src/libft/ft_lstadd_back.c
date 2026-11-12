/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 21:16:47 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/10 11:30:04 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (lst || new)
	{
		if (!*lst)
			*lst = new;
		else
		{
			temp = *lst;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new;
		}
	}
}
