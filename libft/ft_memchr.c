/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:46:54 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 19:40:24 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i ;
    i = 0;
    
    const unsigned char *ptr;
    ptr = s; // TODO: why cast by unsigned char >
    
    
    while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
        {
            return ((void*)(ptr + i));
        }
        i++;
    }
    return (NULL);
   
}

#include <stdio.h>

int main ()
{
    const char *s = "zakaria";
    
    printf("%s",(char*)ft_memchr(s,'r', 10));
    
}