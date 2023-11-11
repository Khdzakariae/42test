/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:46 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/11 11:56:34 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

char ft_tolower( unsigned int v, char c )
{
    (void)v;
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    } 
    return(c);
}

void *ft_calloc(size_t nmemb, size_t size)
{
    // TODO: Max 
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return(NULL);
    return (ptr);
}
unsigned int  ft_strlen(const char *s)
{
    unsigned int  i ;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i ;
    unsigned int len;
    char *ptr;
    len = ft_strlen(s);
     ptr = ft_calloc(len ,sizeof(char) + 1);

    i = 0;
    while (s[i])
    {
        ptr[i] = f(i , s[i]);
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}

#include <stdio.h>

int main ()
{
    char const *s = "HALLO";
    printf("%s",ft_strmapi(s, &ft_tolower));
}