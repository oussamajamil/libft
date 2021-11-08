/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:12:57 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/08 11:30:33 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ditecter(char *d, char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (s == d + i)
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *) dst;
	str2 = (char *) src;
	if (str2 == NULL && str1 == NULL)
		return (NULL);
	i = 0;
	if (ditecter(str1, str2, len) == 0)
	{
		ft_memcpy(dst, src, len);
	}
	else
	{
		while (i < len)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (str1);
}
