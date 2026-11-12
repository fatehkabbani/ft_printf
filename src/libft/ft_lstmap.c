/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakabban <fakabban@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:33:14 by fakabban          #+#    #+#             */
/*   Updated: 2026/11/11 01:11:26 by fakabban         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*res;

	if (!lst || !f || !del)
		return (NULL);
	n_lst = NULL;
	while (lst)
	{
		res = ft_lstnew(f(lst->content));
		if (!res)
		{
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, res);
		lst = lst->next;
	}
	return (n_lst);
}
// static void	*ft_lst_add_1(void *data)
// {
// 	return ((void *)data + 1);
// }
// int	main(void)
// {
// 	t_list *lst = ft_lstnew((void *)1);
// 	t_list *new_lst = ft_lstmap(lst, ft_lst_add_1, free);
// 	printf("%d\n", new_lst->content);
// }