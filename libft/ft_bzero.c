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
