/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-khad <zel-khad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:11:04 by zel-khad          #+#    #+#             */
/*   Updated: 2023/11/01 11:23:08 by zel-khad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>


size_t  ft_strlen(const char *s)
{
    size_t i ;
    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

size_t  strlcat(char *dst, const char *src, size_t size)
{
    size_t i ;
    size_t len;
    size_t j;
    len = ft_strlen(src) + ft_strlen(dst);
    i = ft_strlen(dst) -1;
    j = 0;
    if (size == 0 || size < i)
        return(ft_strlen(src) + size);
    while (i <= size && src[j])
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (len);
    
}

/*int main ()
{
    char *src = "zaki";
    char dst[14] = "elhadr";
    strlcat(dst,src,10);
    printf ("%s",dst);
    
}*/

/*#include <stdio.h>
#include <string.h>

// Your ft_strlen and strlcat functions here

int main() {
    // Test cases for different destination sizes
    char dst1[20] = "Hello";
    const char *src1 = " World!";
    size_t dstsize1 = 20;
    printf("Result 1: %zu\n", strlcat(dst1, src1, dstsize1));
    printf("Concatenated string 1: %s\n", dst1);

    char dst2[10] = "Hello";
    const char *src2 = " World!";
    size_t dstsize2 = 5;
    printf("Result 2: %zu\n", strlcat(dst2, src2, dstsize2));
    printf("Concatenated string 2: %s\n", dst2);

    char dst3[20] = "Hello";
    const char *src3 = " World!";
    size_t dstsize3 = 11;
    printf("Result 3: %zu\n", strlcat(dst3, src3, dstsize3));
    printf("Concatenated string 3: %s\n", dst3);

    char dst4[10] = "Hello";
    const char *src4 = " World!";
    size_t dstsize4 = 10;
    printf("Result 4: %zu\n", strlcat(dst4, src4, dstsize4));
    printf("Concatenated string 4: %s\n", dst4);

    // Test cases for different dst and src combinations
    char dst5[20] = "";
    const char *src5 = " World!";
    size_t dstsize5 = 20;
    printf("Result 5: %zu\n", strlcat(dst5, src5, dstsize5));
    printf("Concatenated string 5: %s\n", dst5);

    char dst6[20] = "Hello";
    const char *src6 = "";
    size_t dstsize6 = 20;
    printf("Result 6: %zu\n", strlcat(dst6, src6, dstsize6));
    printf("Concatenated string 6: %s\n", dst6);

    // Test cases for boundary cases
    char dst7[20] = "Hello";
    const char *src7 = " World!";
    size_t dstsize7 = 4294967295; // maximum possible dstsize
    printf("Result 7: %zu\n", strlcat(dst7, src7, dstsize7));
    printf("Concatenated string 7: %s\n", dst7);

    char dst8[20] = "Hello";
    const char *src8 = " World!";
    size_t dstsize8 = 0;
    printf("Result 8: %zu\n", strlcat(dst8, src8, dstsize8));
    printf("Concatenated string 8: %s\n", dst8);

    return 0;
}
*/
