/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:16:55 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 14:49:21 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *ptr;
    
    ptr = (unsigned char*)s;
    
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
    {
        free(ptr);
        return(0);
    }
        ft_bzero(ptr, size * nmemb);
    return (ptr);
}

#include <stdio.h>

int main ()
{
    char  *ptr;
    ptr = ft_calloc(10 , 1);
    for (size_t i = 0; i < 10; i++)
    {
        printf("%i \n", ptr[i]);
    }
    
}