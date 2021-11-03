/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:33:01 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/03 11:51:20 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *str;
    size_t  i;

    i = 0;
    str = malloc (sizeof(char) * len + 1);
    if (!str)
    return (NULL);
    if (len > 0)
    {
        while (s[start + i] && i < len)
        {
            str[i] = s[start + i];
            i++;
        }
        str[i] = '\0';
        return (str);
    }
    return (NULL);
}

int main ()
{
    printf ("%s",ft_substr("oussama",0,4));
    return (0);
}