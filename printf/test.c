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