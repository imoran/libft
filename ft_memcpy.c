/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 15:51:44 by imoran            #+#    #+#             */
/*   Updated: 2016/12/03 15:52:05 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
  char  *d;
  char  *s;
  int    i;

  d = dst;
  s = src;
  i = 0;
  while (n)
  {
    d[i] = s[i];
    i++;
    n--;
  }
  return (d);
}

int main ()
{
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];

   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
