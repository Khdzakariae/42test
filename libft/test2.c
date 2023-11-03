#include <stddef.h>
#include <string.h>

int memcmp(const void *s1, const void *s2, size_t n) {
    size_t i = 0;
    const unsigned char *ptr = (const unsigned char*)s1;
    const unsigned char *p = (const unsigned char*)s2;

    while (i < n) {
        if (ptr[i] != p[i]) {
            return ptr[i] - p[i];
        }
        i++;
    }
    return 0;  // The strings are equal up to n bytes
}

#include <stdio.h>


int main ()
{
    char *s1 = "hlllo";
    char *s2 = "hello";
    printf("%i",memcmp(s1, s2 , 10));
    
}
