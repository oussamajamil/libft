/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:45:58 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/04 10:48:35 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*str;

	str = (char *)s;
	while (n > 0)
	{
		if (*str == c)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
