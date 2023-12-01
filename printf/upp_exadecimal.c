/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upp_exadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:03:08 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/01 21:48:22 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_upexa(unsigned int nb)
{
    int tmp;
    char *str ;
    str = "0123456789ABCDEF";
    if (nb == 0)
	{
		return;
	}
    tmp = nb % 16;
    ft_upexa(nb / 16);
    ft_putchar(str[tmp]);
}