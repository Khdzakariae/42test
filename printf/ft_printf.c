
#include "printf.h"
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>


// void	ft_putstr(char *s)
// {
// 	int	i;

// 	if (!s)
// 		return ;
// 	i = 0;
// 	while (s[i] != '\0')
// 	{
// 		write(1, &s[i], 1);
// 		i++;
// 	}
// }


void ft_printf(const char *format, ...) 
{
    va_list list; 
    va_start(list, format);
    int i = 0;

    while (format[i] != '\0') 
    {
        if(format[i++] == '%')
        {
            if (format[i] == 's') 
                ft_putstr(va_arg(list, char *));
            else if (format[i] == 'd')
                ft_putnbr(va_arg(list, int));
            else if (format[i] == 'u')
                ft_putnbr(va_arg(list, int));
            else 
                ft_putchar(format[i]);
        }
        else
            ft_putchar(format[i]);
        i++;
    }
    va_end(list);
}

int main() {
    ft_printf("%d",-456);
    return 0;
} 
