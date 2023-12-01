/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_exadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:37:44 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/01 21:52:44 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_lowexa(unsigned long long nb)
{
    unsigned long long tmp;
    char *str ;
    str = "0123456789abcdef";
    if (nb == 0)
	{
		return;
	}
    else
    {
        tmp = nb % 16;
        ft_lowexa(nb / 16);
        ft_putchar(str[tmp]);
    }
    
}