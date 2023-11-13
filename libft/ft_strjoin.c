/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 13:42:49 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:46:56 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "libft.h"


void *ft_calloc(size_t nmemb, size_t size)
{
    // TODO: Max 
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return(0);
    return (ptr);
}

size_t  ft_strlen(const char *s)
{
    size_t i ;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{  
    int len ;
    char *ptr;
    int len1;
    int i ;
    
    len = ft_strlen(s1) + ft_strlen(s2);
    ptr = ft_calloc(sizeof(char) , len);
    i = 0;
    len1 = ft_strlen(s1);
    
    while (s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
        
    }
    while (s2[i - len1])
    {
        ptr[i] = s2[i - len1];
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}



// int main ()
// {
//     char const *s1 = "hallo";
//     char const *s2 = "zaki";
//     printf("%s",ft_strjoin(s1 ,s2));
// }