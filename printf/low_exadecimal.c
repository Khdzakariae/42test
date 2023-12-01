/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_exadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 10:37:44 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/01 14:27:35 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_lowexa(int nb)
{
    int tmp;
    char *str ;
    str = "123456789abcdef";
    if (nb == 0)
	{
		return;
	}
    tmp = nb % 16;
    ft_lowexa(nb / 16);
    ft_putchar(str[tmp - 1]);
}