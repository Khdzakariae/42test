// #include <string.h>
// #include <stdlib.h>
// #include <stdarg.h>

// int add(int len , ...)
// {
//     va_list list;
//     int res = 0;
//     int tmp = 0;
//     va_start(list,len);
//     for (int i = 0; i < len; i++)
//     {
//         tmp = va_arg(list,int);
//         res += tmp ;
//     }
//     return res ;
// }
// #include <stdio.h>

// void tprint(int len , ...)
// {
//     va_list list;
//     char *tmp;
//     va_start(list,len);
//     for (int i = 0; i < len; i++)
//     {
//         tmp = va_arg(list, char *);
//         printf("%s", tmp);
//     }   
// }



// int main()
// {
//    tprint(2, "hello", "zaki");
// }

// #include <stdio.h>
// #include <stdarg.h>

// // int sum(int count, ...)
// // {
// //     int s = 0;
// //     va_list args;
// //     va_start(args, count);
// //     for (int i = 0; i < count; i++)
// //     {
// //         int x = va_arg(args, int);
// //         s += x;
// //     }
// //     va_end(args);
// //     return s;
// // }

// int sum2 (int a, ...)
// {
//     va_list args;
//     va_start(args , a);
//     int s = a;
//     int i;
//     int x = va_arg(args , int);
//     while (x != 0x0)
//     {
//         s+= x;
//         x = va_arg(args ,int);
//     }
//     va_end(args);
//     return s;
    
// }
// int main (int ac , char *av[])
// {
//     printf("sum is ... ⏳: |%d|\n", sum2(5, 1 , 2 , 3, 5 , 7, 0x0));
// }


// #include <stdarg.h>
// #include <stdio.h>

// double average(int count, ...) {
//     va_list ap;
//     int j;
//     double sum = 0;

//     va_start(ap, count); /* Before C23: Requires the last fixed parameter (to get the address) */
//     for (j = 0; j < count; j++) {
//         sum += va_arg(ap, int); /* Increments ap to the next argument. */
//     }
//     va_end(ap);

//     return sum / count;
// }

// int main(int argc, char const *argv[]) {
//     printf("%f\n", average(3, 1, 2, 3));
//     return 0;
// }