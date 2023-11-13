/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:49:02 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:46:43 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
    {
        return(NULL);
    }
    return (ptr);
}

char	*ft_strdup(const char *s)
{
    if (!s)
        return (NULL);
    size_t i;
    size_t len ;

    len = ft_strlen(s);
    i = 0;
    
    char *ptr;
    
    ptr = ft_calloc(len + 1 ,sizeof(char));
    
    while (i <= len) // handel segfault : when n > lenght of s
    {
        ptr[i] = s[i];
        i++;
    }
    return (ptr);
}


// #include <stdio.h>

// int main ()
// {
//     const char  *s;
//     s = "hello";
//     printf("%s",ft_strdup( s, 10));
// }
