/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:25:53 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/11 21:55:19 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int nb , int fd)

{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
		ft_putnbr_fd(nb , fd);
	}
	else if (nb > 9)
	{
		ft_putnbr_fd(nb / 10 ,fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
		ft_putchar(nb + 48 ,fd);
}

int main ()
{
    int fd ;
    fd = open("zaki",O_RDWR | O_CREAT);
    ft_putnbr_fd(-2147483648, fd);
}