/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:17:04 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 20:55:58 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char *ft_strchr(const char *s, int c)
{
    int i ;
    i = 0;
    while (s[i])
    {
        if (s[i] == c) {
            return ((char*)s + i);
        }
        i++;
    }
    return (NULL);
   
}

#include <stdio.h>

int main ()
{
    const char *s = "zakaria";
    
    printf("%s",ft_strchr(s,'r'));
    
}