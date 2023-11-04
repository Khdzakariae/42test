#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;
    ptr = malloc(nmemb * size);
    if (!ptr)
    {
        free(ptr);
        return(0);
    }
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
    
    while (i < len && s[start + i] != '\0')
    {
        ptr[i] = s[start + i];
        i++;
    }
    
    ptr[i] = '\0';

    return ptr;
}

int main ()
{
    const char  *s;
    s = "hello";
    printf("%s",ft_substr(s, 2,6));
}