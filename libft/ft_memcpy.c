/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:56:12 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 12:12:28 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i ;
    unsigned char *ptr;
    unsigned char *p;
    
    p = (unsigned char*) src ;
    ptr = (unsigned char*) dest ;
    i = 0;
    
    if (!p && !ptr)
    {
        return (0);
    }
    
    while (i < n)
    {
        ptr[i] = p[i];
        i++;
    }
    ptr[i]= '\0';
    return((void*)dest);
    
}
#include <stdio.h>

int main ()
{
    int source[] = {1, 2, 3};
    int destination[20];
    ft_memcpy(destination, source, 3*4);
    
    for (int i = 0; i < 3; i++)
    {
            printf("Destination: %i\n", destination[i]);

    }
}