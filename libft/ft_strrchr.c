/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:29:01 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/02 09:34:23 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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

char *ft_strrchr(const char *s, int c)
{
    int i;
    i = ft_strlen(s);
    while (i != 0)
    {
        if (s[i] == c)
        {
            return ((char*)s + i);
        }
        i--;
    }
    return(NULL);
}

#include <stdio.h>

int main ()
{
    const char *s = "zakaria";
    
    printf("%s",ft_strrchr(s,'r'));
    
}