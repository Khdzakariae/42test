/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:56:43 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 21:01:21 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
    {
        return(0);
    }
    return (ptr);
}


/*
    TODO:
        get depth undersatnfding of allocation memory HEAP | STACK | TEXT | GLOBAL | STATIC 
        
        why we need allocation? we can use stack ! 
*/

char *ft_substr(char const *s, unsigned int start, size_t len)
{

    // TODO: check if the start > sizeof(s) or  start - len > lenght of s  }} return NULL
    
    
    char *ptr = ft_calloc(len + 1, sizeof(char));
    if (ptr == NULL)
    {
        return NULL; 
    }
    
    unsigned int i = 0;
     
     puts("i");
    while (s[start + i] != '\0' && i < len ) // when u check lenght before s[start + i]: 100% swgfault
    {
        ptr[i] = s[start + i];
        i++;
    }
    
    ptr[i] = '\0';

    return ptr;
}

# include <stdio.h>

int main ()
{
    const char  *s;
    s = "hello";
    (void)s;
    printf("%s",ft_substr(NULL, 555,600));
}