/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:45:29 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/07 18:02:59 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(long n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		count;
	long	cp;
	char	*str;

	cp = n;
	count = ft_count(n);
	str = malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	if(n == 0){
		str[0] = '0';
		str[1] = 0;
    }
	if (cp < 0)
	{
		str[0] = '-';
		cp *= -1;
	}
	str[count] = 0;
	while (count - 1 >= 0 && str[count - 1] != '-')
	{
		str[count-- - 1] = '0' + (cp % 10);
		cp /= 10;
	}
	return (str);
}
