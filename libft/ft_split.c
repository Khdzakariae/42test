/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:16:42 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/06 17:30:52 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    // TODO: Max 
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
        return(0);
    return (ptr);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{    
    char *ptr = ft_calloc(len + 1, sizeof(char));
    if (ptr == NULL)
    {
        return NULL; 
    }
    
    unsigned int i = 0;
     
    while (s[start + i] != '\0' && i < len ) 
    {
        ptr[i] = s[start + i];
        i++;
    }
    
    ptr[i] = '\0';

    return ptr;
}

int checkwords (char const *s ,char c)
{
    size_t i ;
    int words;
    
    i = 0;
    words = 0;

        while (s[i])
        {
            if(s[i] != c)
            {
                while (s[i] && s[i] != c)
                {
                  i++;
                }
                words++;
            }
            i++;
        }
    return(words);
}


char **ft_split(char const *s, char c)
{
    int smp;
    int start;
    int end;
    int  i ;
    int j ;
    char **ptr;
    
    j = 0;
    end = 0;
    start = 0;
    i = 0;
    
    smp = checkwords(s ,c);
    ptr =ft_calloc(smp +1, sizeof(char*));   
    while (s[i])
    {
        if(s[i] != c)
        {
            start = i;
            while (s[i] && s[i] != c)
            {
                i++;
            }
            end = i;
            ptr[j] = ft_substr(s ,start,end - start);
            j++ ;          
            i++;  
        }
        i++;
    }
    return(ptr);
}

int main()
{
    char const *s = " gav jlhgjbk kge  gjm";
    char **result = ft_split(s, ' ');

    for (int j = 0; result[j] != NULL; j++) {
        printf("%s\n", result[j]);
    }

    return (0);
}