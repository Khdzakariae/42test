/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:04:37 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:44:04 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>
#include"libft.h"

// overflow
int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1; 
    int i = 0;
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;
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

//  int main ()
//  {
//         printf("%i",atoi("    +489"));
//  }
