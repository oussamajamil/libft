/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 17:19:28 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/09 17:46:46 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	void	*content;
	
	if(!lst)
		return ;
	content = lst->content;
	while(lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
