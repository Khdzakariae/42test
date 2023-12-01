
#ifndef FT_PRINTF_H_
#define FT_PRINTF_H_

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_lowexa(unsigned long long nb);
void	ft_upexa(unsigned int nb);
void    ft_point(unsigned long long *str);


#endif