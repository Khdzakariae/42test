/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: useraccount <useraccount@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:22:07 by zel-khad          #+#    #+#             */
/*   Updated: 2023/12/04 01:59:52 by useraccount      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int main ()
{
    int i ;
    int x;
puts("\n ⏳⏳test aybda hbibi⏳⏳");
puts("_________intiger__________") ;
    i = ft_printf("%i", -456);
puts("\n");
    x = printf("%i", -456);
puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("_________lowercase__________");
    i = ft_printf("%x",  "lk");
    puts("\n");
    x = printf("%x",  "lk");
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n_________________________");
puts("_________uppercase__________");
    i = ft_printf("%X", "lk");
    puts("\n");
    x = printf("%X", "lk");
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("_________string__________");
    i = ft_printf("%s","hello" );
    puts("\n");
    x = printf("%s", "hello"  );
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("__________degit__________");
    i = ft_printf("%d", "");
    puts("\n");
    x = printf("%d", "");
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("__________pointer__________");
    i = ft_printf("%p", "lk");
    puts("\n");
    x = printf("%p", "lk");
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("__________unsigned__________");
    i = ft_printf("%u", 456);
    puts("\n");
    x = printf("%u", 456);
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("____________%%____________");
    i = ft_printf("%%", "hello");
    puts("\n");
    x = printf("%%", "hello");
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
puts("\n-------------------------");
puts("____________%____________");
    i = ft_printf("%", "hello");
    puts("\n");
    x = printf("%", "hello");
    puts("\n");
    printf("the lent is |%i|  ", i);
     puts("");
    printf("ori lent is {%i} ", x);
    puts("\n ✅✅test sala hbibi ✅✅");
}
