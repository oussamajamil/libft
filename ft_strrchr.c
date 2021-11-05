/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamil <ojamil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:52:40 by ojamil            #+#    #+#             */
/*   Updated: 2021/11/04 10:50:45 by ojamil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strrchr(const char *s, int c)
{
    int             i;
    unsigned char   ch;
    int             j;

    ch = (unsigned char)c;
    i = 0;
    j = 0;
    while (1){
        if(s[i] == ch)
            j = i;
        if(s[i] == 0)
          break;
        i++;
    }
    
    s += j;
    if(s[0] == ch)
        return ((char *) s);
    return 0;
}

/*int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/