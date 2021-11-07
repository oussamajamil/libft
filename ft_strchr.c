/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 17:57:54 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/07 16:52:50 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>


char	*ft_strchr(const char *s, int c)
{
	int i;
	char *str;

	i = 0;
	str =(char *)s;

	while (str[i] != (char)c && str[i])
		i++;
	if (str[i] ==(char)c)
		return (&str[i]);
	return (NULL);
}
