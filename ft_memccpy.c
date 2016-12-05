/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 23:29:14 by imoran            #+#    #+#             */
/*   Updated: 2016/12/03 23:29:30 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//
#include "libft.h"

  void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
  {
      char                  *d;
      char                  *s;

      d = (char *)dst;
      s = (char *)src;

      // if (!n)
      //   return (0);
      while (--n)
      {
        if ((*d++ = *s++) == c)
          return (dst);
      }
      return (0);
  }
