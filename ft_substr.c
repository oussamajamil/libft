/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:33:01 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/08 13:37:22 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char *str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s) ||len == 0)
	{
		str = malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	str =malloc (sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
//error dans char *str = "i just want this part #############";size_t size = 100;
