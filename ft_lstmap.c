/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:28:34 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/10 10:05:20 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list *ls;

	new =NULL;
	if (!f || !del)
		return (NULL);
	while (lst)
	{
		ls = ft_lstnew((*f)(lst->content));
		if (!ls)
		{
			ft_lstclear(&new,(*del));
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new, ls);
		lst = lst -> next;
	}
	return (new);
}
