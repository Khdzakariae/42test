/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:39:05 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:44:58 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

 int ft_intlen(long n)
{
    int tmp = 0;

    if (n == 0)
        return 1;
    if (n < 0)
    {
        tmp++;
        n = n * -1;
    }
    while (n)
    {
        n = n / 10;
        tmp++;
    }
    return tmp;
}

char *ft_itoa(int n)
{
    int   len;
    char *ptr;
    long  nb;

    nb = n;
    len = ft_intlen(nb);
    ptr = (char *)malloc(len + 1);
    if (!ptr)
        return NULL;
    ptr[len--] = '\0';
    if (nb == 0)
        ptr[0] = 48;
    else if (nb < 0)
    {
        ptr[0] = '-';
        nb = nb * -1;
    }
    while (nb != 0)
    {
        ptr[len] = (nb % 10) + '0';
        nb = nb / 10;
        len--;
    }
    return ptr;
}
