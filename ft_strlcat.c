/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:47:47 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/06 15:14:38 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	a;
	size_t	b;
	char	*str1;

	str1 = (char *)src;
	a = ft_strlen(str1);
	b = ft_strlen(dst);
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
	dst[i + b] = 0;
	return (a + b);
}
