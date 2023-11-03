#include <stddef.h>

void *memchr(const void *s, int c, size_t n) {
    const unsigned char *ptr = (const unsigned char *)s;
    
    for (size_t i = 0; i < n; i++) {
        if (ptr[i] == (unsigned char)c) {
            return (void *)(ptr + i);
        }
    }
    
    return NULL;
}

#include <stdio.h>

int main ()
{
    const char *s = "zakaria";
    
    printf("%p",memchr(s,'r', 10));
    
}