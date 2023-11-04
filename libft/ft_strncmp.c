/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:46:50 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 18:31:22 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <bsd/string.h>
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i ;
    i = 0;
    while (i <= n ) // TODO : segfault when n > s1 or s2 lenght
    {
        if (s1[i] != s2[i])
        {
            break;
        }
        i++;
    }
    return(s1[i] - s2[i]);
     
}

#include <stdio.h>

int main ()
{
    char *s1 = "hzllo";
    char *s2 = "hello";
    printf("%i",strncmp(s1,s2,5));
}