/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:16:05 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/07 16:47:03 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return (ptr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		 *ptr;
	unsigned int	i;

	i = 0;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s[start + i] != '\0' && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int  check(char const *s1, char const *set , int index)
{
    int i ;
    i = index;
    int j ;
    j = i - index;
    
    while (s1[i] && set[j])
    {
        if (s1[i] !=set[j])
            return(0);
  
        i++;
        j++;
    }
    return(1);  
}


char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end ;
    char *ptr;
    
    start = 0;
    end = ft_strlen(s1);
    
    if(check(s1 , set, start))
    {
        
        start = ft_strlen(set);
    }
    
    if (check(s1 , set , ft_strlen(s1) - ft_strlen(set)))
    {   
        
        end -= ft_strlen(set);
    }
    ptr = ft_substr(s1, start, end - start);
    return(ptr);
    
}

int main()
{
    char const *s1 = "mmohamedm";
    printf("%s\n", ft_strtrim(s1 , "m"));   
    return 0;
}
