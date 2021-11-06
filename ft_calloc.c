/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:56:12 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/06 15:38:08 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*str;
	size_t	i;

	i = -1;
	str = malloc(size * count);
	if (!str)
		return (NULL);
	while (++i < count)
		str[i] = 0;
	return (str);
}
