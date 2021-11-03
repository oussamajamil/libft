/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:59:20 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/03 15:41:19 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*str1;
	char	*str2;
	
	str1 = dst;
	str2 = (char *)src;
	while (n > 0)
	{
		str1[n - 1] = str2[n - 1];
		n--;
	}
	return (dst);
}
/*int main ()
{
	char str1[15]="ABCDEF";
    char str2[15]="123456";

	printf("%s",ft_memcpy(str1+5, str2+2, 4));

}*/
