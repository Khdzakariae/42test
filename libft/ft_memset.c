/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:25:24 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/03 11:12:54 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    
    unsigned char *ptr;
    unsigned char p;
    
    p = (unsigned char)c;
    ptr = (unsigned char*)s;
    
    while (i < n)
    {
        ptr[i] = p;
        i++;
    }
    return((void*)s);
    
}

#include <stdio.h>
#include <string.h> 

int main() {
    char s[10];
    ft_memset(s, 'a', sizeof(char) * 15);
    printf("%s\n", s);
    return 0;
}
