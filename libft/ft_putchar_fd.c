/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:09:47 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:46:05 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <unistd.h>
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
    write(fd , &c , 1);
}

// int main ()
// {
//     int fd;
//     fd = open("zaki", O_CREAT | O_RDWR);
//     ft_putchar_fd('a' , fd);
// }