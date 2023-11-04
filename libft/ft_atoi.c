/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:04:37 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 20:54:52 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>


// overflow
int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1; 
    int i = 0;

    if (str[i] == '-') 
    {
        sign = -1;
        i++;
    } 
    else if (str[i] == '+') 
    {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return result * sign;
}
#include <stdio.h>


 int main ()
 {
        printf("%i",atoi("+489"));
 }