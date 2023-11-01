/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nptrlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:05:08 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/01 13:05:09 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>



size_t  ft_nptrlen(const char *s)
{
    size_t i ;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t  ft_nptrlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    i = 0 ;
    if (size == 0 || size < i)
        return(ft_nptrlen(src));
    while (i <= size - 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(ft_nptrlen(src));
}

/*int main ()
{
    char *src = "zaki";
    char dst[10];
    ft_nptrlcpy(dst,src,15);
    printf ("%s %s",dst , src);
    
}*/
int main() {
    // Test cases for different destination sizes
    char dst1[20] = "Hello";
    const char *src1 = " World!";
    size_t dstsize1 = 20;
    printf("Result 1: %zu\n", ft_nptrlcpy(dst1, src1, dstsize1));
    printf("Copied nptring 1: %s\n", dst1);

    char dst2[10] = "Hello";
    const char *src2 = " World!";
    size_t dstsize2 = 5;
    printf("Result 2: %zu\n", ft_nptrlcpy(dst2, src2, dstsize2));
    printf("Copied nptring 2: %s\n", dst2);

    char dst3[20] = "Hello";
    const char *src3 = " World!";
    size_t dstsize3 = 11;
    printf("Result 3: %zu\n", ft_nptrlcpy(dst3, src3, dstsize3));
    printf("Copied nptring 3: %s\n", dst3);

    char dst4[10] = "Hello";
    const char *src4 = " World!";
    size_t dstsize4 = 10;
    printf("Result 4: %zu\n", ft_nptrlcpy(dst4, src4, dstsize4));
    printf("Copied nptring 4: %s\n", dst4);

    // Test cases for different dst and src combinations
    char dst5[20] = "";
    const char *src5 = " World!";
    size_t dstsize5 = 20;
    printf("Result 5: %zu\n", ft_nptrlcpy(dst5, src5, dstsize5));
    printf("Copied nptring 5: %s\n", dst5);

    char dst6[20] = "Hello";
    const char *src6 = "";
    size_t dstsize6 = 20;
    printf("Result 6: %zu\n", ft_nptrlcpy(dst6, src6, dstsize6));
    printf("Copied nptring 6: %s\n", dst6);

    // Test cases for boundary cases
    char dst7[20] = "Hello";
    const char *src7 = " World!";
    size_t dstsize7 = 4294967295; // maximum possible dstsize
    printf("Result 7: %zu\n", ft_nptrlcpy(dst7, src7, dstsize7));
    printf("Copied nptring 7: %s\n", dst7);

    char dst8[20] = "Hello";
    const char *src8 = " World!";
    size_t dstsize8 = 0;
    printf("Result 8: %zu\n", ft_nptrlcpy(dst8, src8, dstsize8));
    printf("Copied nptring 8: %s\n", dst8);

    return 0;
}