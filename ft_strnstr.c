/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:15:02 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/03 12:42:31 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (needle[0] == '\0')
    return ((char *)&haystack[0]);
    while (haystack[i])
    {
        j = 0;
        while ((haystack[i + j] == needle[j]) && i + j < len && needle[j])
        {
            if (needle[j + 1] == '\0')
            {
                return ((char *)&haystack[i]);
            }
            j++;
        } 
        if (i == len)
            break;
        i++;
    }
    return (NULL);
}

/*int main ()
{
    const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
    char *ptr;
    ptr = strnstr(largestring, smallstring,4);
    printf ("%s",ptr); 
}*/