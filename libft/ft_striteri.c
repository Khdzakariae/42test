/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:59:19 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/12 11:23:22 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i ;

    i = 0;
    while (s[i])
    {
        f(i, s);
        i++;
    }
}

// void uppercase(unsigned int i, char *s)
// {	
// 	if (i == 0 && s[i] != ' ')
// 	{
// 		s[i] -= 32;
// 	}
// 	else if (s[i - 1] && s[i - 1] == ' ' && s[i] >= 'a' && s[i] <= 'z')
// 		s[i] -= 32;
// }

// #include <stdio.h>
// int main ()
// {
//     char str[] = "hello reda hbibna";
//     ft_striteri(str,uppercase);
//     printf("%s" ,str);
// }