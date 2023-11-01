/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:56:15 by zel-khad          #+#    #+#             */
/*   Updated: 2023/10/30 17:47:21 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t  ft_strlen(const char *s)
{
    size_t i ;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

#include <stdio.h>
# include <string.h>
int main ()
{
    // char *s = NULL;

    strlen(NULL);
    // printf("%zu",ft_strlen(s));
}