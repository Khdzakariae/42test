#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void *ft_calloc(size_t nmemb, size_t size)
{
    if (nmemb > 0 && SIZE_MAX / nmemb < size)
        return NULL;

    void *ptr = malloc(nmemb * size);
    if (!ptr)
        return NULL;

    return ptr;
}

int ft_intlen(long n)
{
    int tmp = 0;
    if (n == 0)
        tmp = 1;
    if (n < 0)
    {
        tmp++;
        n = n * -1;
    }
    while (n > 0)
    {
        n = n / 10;
        tmp++;
    }
    return tmp;
}

char *ft_itoa(int nb)
{
    int len;
    char *ptr;
    long n = nb; 

    len = ft_intlen(n);
    ptr = (char *)ft_calloc(len + 1, sizeof(char));

    if (!ptr)
        return NULL;

    ptr[len--] = '\0';
    while (n > 0)
    {
        ptr[len] = (n % 10) + '0';
        n = n / 10;
        len--;
    }

    return ptr;
}

int main()
{
    char *result = ft_itoa(2147483648);
    printf("%s\n", result);
}

