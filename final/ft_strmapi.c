/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:59:46 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:34:06 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i ;
    unsigned int len;
    char *ptr;
    
    if (!s || !f)
        return NULL;
    len = ft_strlen(s);
    ptr = ft_calloc(len + 1, sizeof(char));
    if (!ptr)
        return NULL;
    i = 0;
    while (s[i])
    {
        ptr[i] = f(i , s[i]);
        i++;
    }
    ptr[i] = '\0';
    return(ptr);
}

// #include <stdio.h>

// int main ()
// {
//     char const *s = "HALLO";
//     printf("%s",ft_strmapi(s, &ft_tolower));
// }