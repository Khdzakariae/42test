#include <stdio.h>


int main ()
{
    int a = 5;
    int b = 2;

    double c ;
    c =  (double) a / b;



    printf("%d / %d  = %d \n" ,a , b,a/b );
    printf("%d / %d  = %f \n" ,a , c);
    return (0);
}