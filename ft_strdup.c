/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:30:43 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/03 12:42:31 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_lenght (const char *s1)
{
    int i;

    i = 0;
    while (s1[i])
        i++;
    return (i);
}
char *ft_strdup(const char *s1)
{
    int i;
    int l;
    char *str;

    i = 0;
    l = ft_lenght(s1);
    str = malloc (sizeof(char) *(l + 1));
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}