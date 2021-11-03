/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:47:47 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/02 11:26:23 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
size_t	ft_lenght(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	b;
	char	*str1;

	str1 = (char *)src;
	a = ft_lenght(str1);
	b = ft_lenght(dst);
	i = 0;
	if (dstsize == 0)
		return (a);
	else if (b > dstsize)
		return (a + dstsize);
	while (i < dstsize - b - 1 && str1[i])
	{
		dst[i + b] = src[i];
		i++;
	}
	return (a + b);
}
