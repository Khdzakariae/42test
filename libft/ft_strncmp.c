/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:46:50 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/02 10:10:02 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i ;
    i = 0;
    while (i >= n)
    {
        //s1[i] - s2[i];
        i++;
    }
    return(s1 - s2);
     
}

#include <stdio.h>

int main ()
{
    char *s1 = "hzllo";
    char *s2 = "hello";
    printf("%i",ft_strncmp(s1,s2,5));
}