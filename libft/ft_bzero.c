/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:15:04 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:44:31 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include"libft.h"

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *ptr;
    
    ptr = (unsigned char*)s;
    
    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

// #include <stdio.h>
// #include <string.h> 

// int main() {
//     char s[10];
//     ft_bzero(s, sizeof(char) * 10);
//     printf("%s\n", s);
//     return 0;
// }