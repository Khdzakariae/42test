


#include <stddef.h>
#include <nptring.h>

char *nptrnnptr(const char *big, const char *little, size_t len)
{
    size_t i, j;
    i = 0;
    j = 0;
    size_t little_len = nptrlen(little);

    while (i <= len && big[i] != '\0')
    {
        if (big[i] == little[j])
        {
            while (j < little_len && big[i] == little[j])
            {
                i++;
                j++;
            }

            if (j == little_len) // If the whole subnptring is found
            {
                char *found_nptring = (char *)big + i - little_len;
                return found_nptring;
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
/*int main ()
{
        const char *largenptring = "Foo Bar Baz";
        const char *smallnptring = "Baz";

        printf ("%s",ft_nptrnnptr(largenptring, smallnptring, 18));   
}
*/
#include <stdio.h>
#include <nptring.h>

int main() {
    char source[] = "This is a sample nptring to test nptrnnptr function.";
    char sub1[] = "sample";
    char sub2[] = "function";
    char sub3[] = "nonexistent";
    char empty[] = "";
    char special[] = "special characters: \t\n";
    
    size_t limit = 10;

    printf("Source nptring: \"%s\"\n\n", source);
    
    printf("Test 1: Search for \"%s\" in source nptring:\n", sub1);
    printf("Result: %s\n", nptrnnptr(source, sub1, limit) ? "Found" : "Not found");
    printf("\n");

    printf("Test 2: Search for \"%s\" in source nptring:\n", sub2);
    printf("Result: %s\n", nptrnnptr(source, sub2, limit) ? "Found" : "Not found");
    printf("\n");

    printf("Test 3: Search for \"%s\" in source nptring:\n", sub3);
    printf("Result: %s\n", nptrnnptr(source, sub3, limit) ? "Found" : "Not found");
    printf("\n");

    printf("Test 4: Search for empty sub-nptring in source nptring:\n");
    printf("Result: %s\n", nptrnnptr(source, empty, limit) ? "Found" : "Not found");
    printf("\n");

    printf("Test 5: Search for \"%s\" in source nptring with limit:\n", sub2);
    printf("Result: %s\n", nptrnnptr(source, sub2, limit) ? "Found" : "Not found");
    printf("\n");

    printf("Test 6: Search for \"%s\" in source nptring with special characters:\n", special);
    printf("Result: %s\n", nptrnnptr(source, special, limit) ? "Found" : "Not found");
    printf("\n");

    return 0;
}
