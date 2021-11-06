/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:59:20 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/06 15:30:45 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = dst;
	str2 = (char *)src;
	if (str2 == NULL && str1 == NULL)
		return (NULL);
	while (n > 0)
	{
		str1[n - 1] = str2[n - 1];
		n--;
	}
	return (dst);
}
