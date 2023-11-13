/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:16:55 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/13 11:51:52 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdlib.h>
#include"libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    if (nmemb > SIZE_MAX/size)
	    return (NULL);
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return(0);
    ft_bzero(ptr,nmemb * size);
    return (ptr);
}

// #include <stdio.h>

// int main ()
// {
//     char  *ptr;
//     ptr = ft_calloc(90111111 , 9999991);
//     for (size_t i = 0; i < 10; i++)
//     {
//         printf("%i \n", ptr[i]);
//     }
    
// }
