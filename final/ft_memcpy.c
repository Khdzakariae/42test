/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:56:12 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 14:58:03 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stddef.h>
#include"libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i ;
    unsigned char *ptr;
    const char *p;
    
    p =   src ;
    ptr = dest ;
    i = 0;

    if (!p && !ptr)
        return (NULL);
    
    while (i < n)
   {
        ptr[i] = p[i];
        i++;
   }
    return(dest);
    
}
// #include <stdio.h>

// int main ()
// {
//     int source[] = {1, 2, 3};
//     int destination[20];
//     ft_memcpy(destination, source, 3*4);
    
//     for (int i = 0; i < 3; i++)
//     {
//             printf("Destination: %i\n", destination[i]);

//     }
// }
