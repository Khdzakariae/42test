/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nptrrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:29:01 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/01 14:42:25 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_nptrlen(const char *s)
{
    size_t i ;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_nptrrchr(const char *s, int c)
{
    int i;
    i = ft_nptrlen(s);
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
    
    printf("%s",ft_nptrrchr(s,'r'));
    
}