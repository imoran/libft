/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 22:54:19 by imoran            #+#    #+#             */
/*   Updated: 2016/12/02 22:54:22 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void  ft_bzero(void *s, size_t n)
{
  int i;
  char *s2;

  i = 0;
  s2 = s;
  while (s2[i] && n)
  {
    s2[i] = '0'
    n--;
    i++;
  }
}

int   main(void)
{

  return (0);
}
