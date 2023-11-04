/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:03:30 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/04 18:41:05 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// why tolower and ctype fucnton use int as parametre
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c += 32;
    } 
    return(c);
}

#include <stdio.h>

int main ()
{
    int c = 'z';
    printf("%c",ft_tolower(c));
}
