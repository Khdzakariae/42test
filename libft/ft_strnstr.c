/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:51:13 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/01 15:21:30 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stddef.h>

char ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i , j ;
    i = 0;
    j = 0;
    while (i <= len)
    {
        if (big[i] == little[j])
        {
            while (little[j])
            {
                if (big[i] == little[j])
                {
                    j++;
                }
                    
            }
            
            return ((char*) little + j);
        }
        i++;  
    }
    return(NULL);
     
}

/*#include <stdio.h>
int main ()
{
        const char *largestring = "Foo Bar Baz";
        const char *smallstring = "Bar";
        char *ptr;

        ptr = ft_strnstr(largestring, smallstring, 8);
        printf ("%s",ptr);
    
}*/


