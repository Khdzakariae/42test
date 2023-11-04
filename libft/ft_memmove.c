/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:12:13 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 12:11:58 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>


void *cheack(void *dest, const void *src, size_t n)
{
        size_t i;
        unsigned char *ptr;
        unsigned char *p;

        p = (unsigned char*) src ;
        ptr = (unsigned char*) dest ;
        i = 0;
        
        while (i++ < n)
        {
            ptr[i] = p[i];
        }
        ptr[i]= '\0';
        return((void*)dest);
}
void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *ptr;
    unsigned char *p;

    p = (unsigned char*) src ;
    ptr = (unsigned char*) dest ;
    
    if (!p  && !ptr)
    {
        return (0);
    }
    else if (dest > src)
    {
        while (n-- > 0)
        {
            ptr[n] =  p[n];
        }
    }
    else
        cheack(dest , src, n);
    return ((void*)dest);
}
#include <stdio.h>

int main()
{
    char source[] = "my friend";
    printf("%s\n", source);
    printf("Expected string: myriend\n");
    printf("%s\n", (char *)ft_memmove(source + 2, source, 2));
}