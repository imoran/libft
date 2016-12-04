/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 23:28:23 by imoran            #+#    #+#             */
/*   Updated: 2016/12/02 23:28:28 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void  *ft_memset(void *b, int c, size_t len)
{
  int             i;
  char            *b1;
  unsigned char   myChar;

  i = 0;
  b1 = b;
  myChar = (unsigned char)c;
  while (len)
  {
    b1[i] = myChar;
    len--;
    i++;
  }
  return (b1);
}

int main ()
{
   char str1[2];
   char str2[2];

  //  strcpy(str1,"This is string.h library function");
  //  puts(str1);
  //  strcpy(str2, "This is string.h library function");
  //  puts(str2);

  ft_memset(str2, '.', 7);

  //  memset(str1, '.' , 7);
  //  puts(str1);

   return(0);
}
