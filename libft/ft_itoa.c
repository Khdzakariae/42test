/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:39:05 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/09 21:37:52 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>


void *ft_calloc(size_t nmemb, size_t size)
{
    // TODO: Max 
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return(0);
    return (ptr);
}
int  ft_intlen(int n)
{
    int tmp ;

    tmp = 0;
    if (n == 0)
        tmp = 1;
    if (n < 0)
        n = n * -1;
    if (n > 0)
    {
        while (n > 0)
        {
            n = n / 10;
            tmp++;
        }
    }
    return(tmp);

}

char *zaki(int n)
{
    int len;
    char *ptr;

    len = ft_intlen(n);
    
    
    n = n * - 1; 
     
    ptr = ft_calloc(len ,sizeof(char) + 2);
    ptr[len + 2] = '\0';
    while (n > 0)
    {
        ptr[len + 2]  = (n % 10) + 48;
        n = n / 10 ;
        len--;
        printf("%i \n",n);
    }
    ptr[0] = '-';
    return(ptr);
}

char *ft_itoa(int n)
{
    int len;
    char *ptr;
    
    len = ft_intlen(n);
    if (n == 0)
    {
        ptr = ft_calloc(2 , sizeof(char));
        ptr[0] = '0';
        ptr[1] = '\0';
    }
    else if (n < 0)
        ptr = zaki(n);
    else
        ptr = ft_calloc(len ,sizeof(char) + 1);
            ptr[len] = '\0';
        while (n > 0)
        {
            
            ptr[len - 1]  = (n % 10) + 48;
            n = n / 10 ;
            len --;
        }        
    return(ptr);
}

int main ()
{
    printf("%s",ft_itoa(-198));
}
