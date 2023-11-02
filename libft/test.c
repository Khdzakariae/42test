


#include <stddef.h>
#include <bsd/string.h>


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

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i, j;
    i = 0;
    j = 0;
    size_t little_len = ft_strlen(little);

    while (i <= len && big[i] != '\0')
    {
        if (big[i] == little[j])
        {
            while (j < little_len && big[i] == little[j] && i < len)
            {
                i++;
                j++;
            }
            if (j == little_len)
            {
                char *found_string = (char *)big + i - little_len;
                return found_string;
            }

            j = 0;
        }
        i++;
    }
    return NULL;
}



#include <stdio.h>
int main ()
{
        const char *largestring = "Foo Bar Baz";
        const char *smallstring = "Bar";

        printf ("%s",ft_strnstr(largestring, smallstring, 5));   
}

