<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:21:51 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/04 01:01:05 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ft_printf.h"

int	ft_putchar(char c, int flag)
{
	static int count = 1;
	
	if (flag == 1) {
		write(1, &c, 1);
		return (count ++, 0);
	}
	else if (flag == 2) {
		return (count = 0, 0);
    }
	return count;
}

static void interpreter_input(va_list *list, int current_char) {
    if (current_char == 's') 
    {
        ft_putstr(va_arg(*list, char *));
    }
    else if (current_char == 'p')
        ft_address(va_arg(*list , unsigned long long*));
    
    else if (current_char == 'x')
        ft_hexdecimal(va_arg(*list , unsigned int), false);

    else if(current_char == 'X')
        ft_hexdecimal(va_arg(*list , unsigned int), true);

    else if (current_char == 'd' || current_char == 'i')
        ft_putnbr(va_arg(*list , int));

    else if (current_char == 'u')
        ft_unsigned(va_arg(*list, unsigned int));
    
    else if (current_char == 'c')
        ft_putchar(va_arg(*list ,int), 1);
    else if (current_char == '%')
        ft_putchar('%', 1);

    
}

int ft_printf(const char* target, ...)
{
    int i;

    i = 0;
    
    if (!target || (target[i] == '%' && target[i + 1] == '\0'))
        return (-1);
    
    va_list list; 
    va_start(list, target);
    ft_putchar(0, 2);

    while (target[i]) 
    {
        if (target[i] == '%')
        {
            interpreter_input(&list, target[i + 1]);
            i ++;  
        }
        else
            ft_putchar(target[i], 1);
        i++;
    }
    va_end(list);
    return (ft_putchar(0, 0));
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:21:51 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/03 13:20:43 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "ft_printf.h"

int	ft_putchar(char c, int flag)
{
	static int count = 1;
	
	if (flag == 1) {
		write(1, &c, 1);
		return (count ++, 0);
	}
	else if (flag == 2) {
		return (count = 1, 0);
    }
	return count;
}

static void interpreter_input(va_list *list, int current_char) {
    if (current_char == 's') 
        ft_putstr(va_arg(*list, char *));
    
    else if (current_char == 'p')
        ft_address(va_arg(*list , unsigned long long *));
    
    else if (current_char == 'x')
        ft_hexdecimal(va_arg(*list , int), false);

    else if(current_char == 'X')
        ft_hexdecimal(va_arg(*list , int), true);

    else if (current_char == 'd' || current_char == 'i')
        ft_putnbr(va_arg(*list , int));

    else if (current_char == 'u')
        ft_unsigned(va_arg(*list, unsigned int));
    
    else if (current_char == 'c')
        ft_putchar(va_arg(*list ,int), 1);
    else if (current_char == '%')
        ft_putchar('%', 1);
}

int ft_printf(const char* target, ...)
{
    int i;

    if (!target || target[i] == '%' && target[i + 1] == '\0')
        return (-1);
    i = 0;
    va_list list; 
    va_start(list, target);
    ft_putchar(0, 2);

    while (target[i]) 
    {
        if (target[i] == '%')
        {
            interpreter_input(&list, target[i + 1]);
            i ++;  
        }
        else
            ft_putchar(target[i], 1);
        i++;
    }
    va_end(list);
    return (ft_putchar(0, 0));
>>>>>>> refs/remotes/origin/main
