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

void  *ft_memset(void *b, int c, size_t len)
{
  int             i;
  char            *b1;
  unsigned char   myChar;

  i = 0;
  b1 = (char *)b;
  myChar = (unsigned char)c;
  while (len)
  {
    b1[i] = myChar;
    len--;
    i++;
  }
  return (b1);
}
