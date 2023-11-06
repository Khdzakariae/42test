/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:16:42 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/06 15:54:08 by zel-khad         ###   ########.fr       */
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

    // TODO: check if the start > sizeof(s) or  start - len > lenght of s  }} return NULL
    
    
    char *ptr = ft_calloc(len + 1, sizeof(char));
    if (ptr == NULL)
    {
        return NULL; 
    }
    
    unsigned int i = 0;
     
    while (s[start + i] != '\0' && i < len ) // when u check lenght before s[start + i]: 100% swgfault
    {
        ptr[i] = s[start + i];
        i++;
        //printf(".");
    }
    
    ptr[i] = '\0';

    return ptr;
}



int checkwords (char const *s ,char c)
{
    size_t i ;
    size_t words;
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
        else
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
    ptr =ft_calloc(smp, sizeof(char*));   
    while (s[i])
    {
        printf("%i \n",i);
        if(s[i] != c)
        {
            start = i;
            while (s[i] && s[i] != c)
            {
                i++;
            }
            end = i - j;
            ptr[j] = ft_substr(s ,start,end);
            j++ ;          
            i++;
            
            
        }
        //printf(".");
    }
    return(ptr);
}

int main()
{
    char const *s = "aebdegj";
    char **result = ft_split(s, 'e');

    for (int j = 0; result[j] != NULL; j++) {
        printf("%s\n", result[j]);
    }

    return (0);
}