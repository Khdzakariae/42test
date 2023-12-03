/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:22:24 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/03 20:46:46 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TOOLS_H
#define TOOLS_H

#define L_HEX "0123456789abcdef"
#define U_HEX "0123456789ABCDEF"

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void	ft_putnbr(int);
void	ft_putstr(char *);
int	    ft_putchar(char, int);
void	ft_unsigned(unsigned int);
void	ft_hexdecimal( unsigned int, bool);
void    ft_address(unsigned long long *);

#endif
