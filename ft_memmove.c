/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 00:59:44 by imoran            #+#    #+#             */
/*   Updated: 2016/12/04 00:59:59 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
// /*This function copies src into dst.. */
//
//  /*If src1 is less than dst, just copy src from the end.
//  If src is greater than dst, just copy src from the beginning.*/
//
//  for (size_t l = 0; l < len; ++l) {
//      if (src + l == dst) || (src + l == dst + len) {
//        // they overlap, so now we can use comparison,
//        // and copy forwards or backwards as appropriate.
//        ...
//        return dst;
//      }
//  }
//  // No overlap, doesn't matter which direction we copy
//  return memcpy(dst, src, len);
//
//
// void    *ft_memmove(void *dst, const void *src, size_t len)
// {
//   int   i;
//   i = 0;
//
//   ft_memcpy(dst, src, len);
//   return (dst);
// }


// int main ()
// {
//    char dest1[] = "oldstring";
//    const char src1[]  = "newstringiscool";
//
//    printf("Before memmove dest1 = %s, src1 = %s\n", dest1, src1);
//    memmove(dest1, src1, 9);
//    printf("After memmove dest1 = %s, src1 = %s\n", dest1, src1);
//    printf("\n");
//    printf("\n");
//    char dest2[] = "oldstring";
//    const char src2[]  = "newstringiscool";
//
//    printf("Before ft_memmove dest2 = %s, src2 = %s\n", dest2, src2);
//    ft_memmove(dest2, src2, 9);
//    printf("After ft_memmove dest2 = %s, src2 = %s\n", dest2, src2);
//
//
//
//    return(0);
// }
