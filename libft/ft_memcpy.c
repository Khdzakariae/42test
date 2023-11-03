/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:56:12 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/03 13:21:39 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
void *memcpy(void *dest, const void *src, size_t n)
{
    size_t i ;
    unsigned char *ptr;
    unsigned char *p;
    
    p = (unsigned char*) src ;
    ptr = (unsigned char*) dest ;
    i = 0;
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
    memcpy(destination, source, 3*4);
    
    for (int i = 0; i < 3; i++)
    {
            printf("Destination: %i\n", destination[i]);

    }
}