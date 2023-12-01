

#include "printf.h"

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
            else if(format[i] == 'p')
                ft_point(va_arg(list , unsigned int *));
            else if(format[i] == 'x')
                ft_lowexa(va_arg(list , int));
            else if(format[i] == 'X')
                ft_upexa(va_arg(list , int));
            else if (format[i] == 'd')
                ft_upexa(va_arg(list , int));
            else if (format[i] == 'i')
                ft_putnbr(va_arg(list, int));
            else if (format[i] == 'u')
                ft_putnbr(va_arg(list, int));
            else if (format[i] == 'c')
                ft_putchar(va_arg(list ,int));   
        }
        else
            ft_putchar(format[i]);
        i++;
    }
    va_end(list);
}

int main() 
{
    ft_printf("%i \n",'k');
    printf("%i \",'k');
    return 0;
} 
