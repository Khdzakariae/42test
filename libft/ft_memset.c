/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:25:24 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/13 21:12:24 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include"libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*ptr;
	unsigned char	p;

	i = 0;
	p = (unsigned char) c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = p;
		i++;
	}
	return ((void *) s);
}

/*
TODO:
get more knowledge about bytes {int char}
and how work at memory 
depht understanding of mem concepts !
*/

// #include <stdio.h>
// #include <string.h> 

// int main() 
// {
//     int t[10];
//     ft_memset(t, 2, 10);
//     for (size_t i = 0; i < 10; i++)
//     {
//         printf("%i", t[i]);
//     }

//     return 0;
// }
