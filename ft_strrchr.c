/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:52:40 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/02 12:01:49 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
    int             i;
	unsigned char   ch;
	int             j;

	ch = (unsigned char)c;
	i = 0;
	j = 0;
	while (s[i]){
        if(s[i] == ch)
            j = i;
        i++;
    }
    s += j;
	return ((char *) s);
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/