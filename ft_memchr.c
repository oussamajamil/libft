/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:45:58 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/03 09:31:03 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	char			*str;

	str = (char *)s;
	a = (unsigned char) c;
	while (n > 0)
	{
		if (*str == a)
			return (str);
		str++;
		n--;
	}
	return (NULL);
}
