/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   upp_exadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 14:03:08 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/01 14:09:29 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_upexa(int nb)
{
    int tmp;
    char *str ;
    str = "123456789ABCDEF";
    if (nb == 0)
	{
		return;
	}
    tmp = nb % 16;
    ft_upexa(nb / 16);
    ft_putchar(str[tmp - 1]);
}