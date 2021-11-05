/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:41:06 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/04 18:28:36 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    char *p1;
    char *p2;

    p1 = (char *)s1;
    p2 = (char *)s2;
    if(p1[0] == 0 || p2[0] == 0)
        return 0;
    i = 0;
    while (i < n - 1 && p1[i] == p2[i])
        i++;
    return ((unsigned char)p1[i] - (unsigned char)p2[i]);
}