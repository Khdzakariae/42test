/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:38:54 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/03 15:36:24 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int memcmp(const void *s1, const void *s2, size_t n)

{
    size_t i ;
    i = 0;

    unsigned char *ptr;
    unsigned char *p;

    ptr = (unsigned char*)s1;
    p = (unsigned char*)s2;
    
    while (i <= n)
    {
        if (ptr[i] != p[i])
        {
            return (ptr[i] - p[i]);
        }
        i++;
    }
    return(0);  
}

#include <stdio.h>


int main ()
{
    char *s1 = "hlllo";
    char *s2 = "hello";
    printf("%i",memcmp(s1, s2 , 10));
    
}