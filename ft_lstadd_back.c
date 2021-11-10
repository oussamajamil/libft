/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:31:41 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/09 18:06:33 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = *lst;
	if (!tmp)
	{
		*lst = new;
		return ;
	}
	while (tmp -> next)
	{
		tmp = tmp -> next;
	}
	tmp ->next =new;
}
