


#include <stddef.h>
#include <string.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i, j;
    i = 0;
    j = 0;
    size_t little_len = strlen(little);

    while (i <= len && big[i] != '\0')
    {
        if (big[i] == little[j])
        {
            while (j < little_len && big[i] == little[j])
            {
                i++;
                j++;
            }

            if (j == little_len) // If the whole substring is found
            {
                char *found_string = (char *)big + i - little_len;
                return found_string;
            }

            j = 0; // Reset j for the next potential match
        }
        else
        {
            i++;
        }
    }

    return NULL;
}



#include <stdio.h>
int main ()
{
        const char *largestring = "Foo Bar Baz";
        const char *smallstring = "Baz";

        printf ("%s",ft_strnstr(largestring, smallstring, 18));   
}
