/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:12:13 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/03 18:27:59 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, size_t n)
{
    size_t i ;
    unsigned char *ptr;
    unsigned char *p;
    
    p = (unsigned char*) src ;
    ptr = (unsigned char*) dest ;
    i = 0;

    if (src == '\0' && dest == '\0')
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