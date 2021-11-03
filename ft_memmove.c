/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:12:57 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/02 11:25:34 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str;
	char	*s;
	size_t	i;

	str = dst;
	i = 0;
	s = (char *)src;
	while (i < len && s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
