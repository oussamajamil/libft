/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:56:12 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/03 16:05:15 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *ft_calloc(size_t count, size_t size)
{
    size_t    *str;
    size_t  i;

    i = 0;
    str = malloc(sizeof(size) * count);
    if (!str)
        return (NULL);
    while (i < count)
    {
        str[i] = 0;
        i++;
    }
    return (str);
}
