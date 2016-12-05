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
  int          i;
  char        *d;
  const char  *s;

  i = 0;
  d = (char *)dst;
  s = (const char *)src;
  while (n)
  {
    d[i] = s[i];
    i++;
    n--;
  }
  return (dst);
}
