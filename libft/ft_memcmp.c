/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:38:54 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:45:10 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include"libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)

{
    size_t i ;
    i = 0;

    const unsigned char *ptr;
    const unsigned char *p;

    ptr = (const unsigned char*)s1;
    p = (const unsigned char*)s2;
    
    while (i < n)
    {
        if (ptr[i] != p[i])
        {
            return (ptr[i] - p[i]);
        }
        i++;
    }
    return(0);  
}

// #include <stdio.h>


// int main ()
// {
//     char *s1 = "hlllo";
//     char *s2 = "hello";
//     printf("%i",ft_memcmp(s1, s2 , 10));
    
// }
