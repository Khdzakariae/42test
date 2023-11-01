/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 22:04:37 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/01 22:29:38 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

int atoi(const char *nptr) {
    int result = 0;
    int sign = 1; 
    int i = 0;

    if (nptr[i] == '-') 
    {
        sign = -1;
        i++;
    } 
    else if (nptr[i] == '+') 
    {
        i++;
    }

    while (nptr[i] >= '0' && nptr[i] <= '9') {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }

    return result * sign;
}
#include <stdio.h>


 int main ()
 {
        printf("%i",atoi("-489"));
 }