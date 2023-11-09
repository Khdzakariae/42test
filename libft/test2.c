


#include <stdio.h>
#include <stddef.h>

int  ft_intlen(int n)
{
    int tmp ;

    tmp = 0;
    if (n == 0)
        tmp = 1;
    if (n < 0)
        n = n * -1;
    if (n > 0)
    {
        while (n > 0)
        {
            n = n / 10;
            tmp++;
        }
    }
    return(tmp);

}


int main ()
{
    printf("%i",ft_intlen(-528));
}