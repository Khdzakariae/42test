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
#include <stdint.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    if (nmemb > 0 && SIZE_MAX / nmemb < size)
        return NULL;

    void *ptr = malloc(nmemb * size);
    if (!ptr)
        return NULL;

    return ptr;
}

int ft_intlen(int n)
{
    int tmp = 0;
    if (n == 0)
        tmp = 1;
    if (n < 0)
    {
        tmp++;
        n = n * -1;
    }
    while (n > 0)
    {
        n = n / 10;
        tmp++;
    }
    return tmp;
}

char *ft_itoa(int nb)
{
    if (nb == 0)
    {
        char *zero_str = (char *)ft_calloc(2, sizeof(char));
            zero_str[0] = '0';
            zero_str[1] = '\0';
        return zero_str;
    }
    int len;
    char *ptr;
    long n = nb;

    len = ft_intlen(n);
    ptr = (char *)ft_calloc(len + (n > 0), sizeof(char));
    if (!ptr)
        return NULL;

    if (n < 0)
    {
        ptr[0] = '-';
        n = -n;
    }

    ptr[len--] = '\0';
    while (n > 0)
    {
        ptr[len] = (n % 10) + '0';
        n = n / 10;
        len--;
    }

    return ptr;
}
/*
int main()
{
        printf("%s",ft_itoa(0));
}*/

int main ()
{
    printf("%s",ft_itoa(214));
}
