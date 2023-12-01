/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   void.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:39:20 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/01 21:52:29 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_point(unsigned long long *str)
{
    if(!str)
        ft_putstr("(nil)");
    else
    {
        ft_putstr("0x");
        ft_lowexa((unsigned long long)str);
    }
}