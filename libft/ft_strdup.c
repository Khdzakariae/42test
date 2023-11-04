/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:49:02 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 15:47:37 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
    {
        free(ptr);
        return(0);
    }
    return (ptr);
}

char *ft_strdup(const char *s, size_t n)
{
    size_t i;
    i = 0;
    
    char *ptr;
    
    ptr = ft_calloc(sizeof(char) , n);
    
    while (i < n)
    {
        ptr[i] = s[i];
        i++;
    }
    return ((char*)ptr);
}


#include <stdio.h>

int main ()
{
    const char  *s;
    s = "hello";
    printf("%s",ft_strdup( s, 10));
}
