



#include <stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i, j;
    i = 0;
    j = 0;

    while (i < len && big[i] != '\0') {
        if (big[i] == little[j]) {
            while (little[j] != '\0' && big[i + j] == little[j]) 
            {
                j++;
            }

            if (little[j] == '\0') {
                return (char *)little + i;
            }
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

        printf ("%p",ft_strnstr(largestring, smallstring, 9));   
}