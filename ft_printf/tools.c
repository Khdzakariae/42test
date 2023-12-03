/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:22:16 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/03 10:22:17 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "tools.h"

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0', 1);
}

void	ft_putstr(char *s)
{
    int len;

	if (!s)
		return (ft_putstr("(null)"));
    len = 0;
	while (s[len] != '\0')
	{
		ft_putchar(s[len], 1);
		len++;
	}
}

void	ft_hexdecimal(unsigned long long nb, bool mode)
{
    int tmp;
    if (nb == 0)
		return;
    tmp = nb % 16;
    ft_hexdecimal(nb / 16, mode);
    if (mode == true)
        ft_putchar(U_HEX[tmp], 1);
    else
        ft_putchar(L_HEX[tmp], 1);
}

void	ft_unsigned(unsigned int nb)
{
    if (nb > 9)
	{
		ft_unsigned(nb / 10);
		ft_unsigned(nb % 10);
	}
	else
		ft_putchar(nb + '0', 1);
}

void    ft_address(unsigned long long *address)
{
    if(!address)
        ft_putstr("0x0");
    else
    {
        ft_putstr("0x");
        ft_hexdecimal((unsigned long long)address, false);
    }
}