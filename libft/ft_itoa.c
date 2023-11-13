/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:39:05 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/13 17:08:54 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include"libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return(NULL);
    return (ptr);
}

int  ft_intlen(int long n)
{
    int long  tmp ;

    tmp = 0;
    if (n == 0)
        tmp = 1;
    if (n < 0)
    {
        tmp ++;
        n = n * -1;
    }
    if (n > 0)
    {
        while (n > 0)
        {
            n = n / 10;
            tmp++;
        }
    }
    return(tmp);

}

char *ft_itoa(int nb)
{
    printf("i");
    int len;
    char *ptr;
    long n ;
    n = nb;
    len = ft_intlen(n);
    printf("%i", len);
    ptr = ft_calloc(len + 1 , sizeof(char));
    ptr[len--] = '\0';
        while (n >= 0)
        {
            ptr[len]  = (n % 10) + 48;
            n = n / 10 ;
            len--;
        }

    return(ptr);
}

int main ()
{
    printf("%s",ft_itoa(214));
}