/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:22:07 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/03 11:21:59 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"


// int main() 
// {


//     int y_len = ft_printf("hello %d %s %i %p mamamiya 😩 O", -2003, NULL, 200000003, NULL);
//     puts("");
//      y_len += ft_printf("hello %d %s %i %p mamamiya 😩 O", -2003, NULL, 200000003, NULL);

//     puts("");

//     int x_len =    printf("hello %d %s %i %p mamamiya 😩 O", -2003, NULL, 200000003, NULL);
//     puts("");
//     x_len  +=    printf("hello %d %s %i %p mamamiya 😩 O", -2003, NULL, 200000003, NULL);

//     puts("");




//     printf("our len : |%d|\n", y_len);
//     printf("her len : |%d|\n", x_len);

// }

int main()
{
    int num = ft_printf("%%s%", "hello");
    printf("\nthe to is %i\n", num);
}