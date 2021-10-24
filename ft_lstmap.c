/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malton <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:11:59 by malton            #+#    #+#             */
/*   Updated: 2021/10/21 19:24:21 by malton           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*trash;
	t_list	*l;

	(void)del;
	l = (void *)0;
	if (!lst || !f)
		return ((void *)0);
	while (lst)
	{
		trash = ft_lstnew((*f)(lst -> content));
		if (!trash)
		{
			ft_lstclear(&l, del);
			return ((void *)0);
		}
		ft_lstadd_back(&l, trash);
		lst = lst -> next;
	}
	return (l);
}
