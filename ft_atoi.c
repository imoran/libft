/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 21:41:23 by imoran            #+#    #+#             */
/*   Updated: 2016/12/02 21:42:02 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int   ft_atoi(const char *str)
{
  int i;
  int result;

  i = 0;
  result = 0;

  if (str[0] == '-')
    i++;
  while (str[i])
  {
    if (str[i] > 47 && str[i] < 58)
    {
      result = result * 10 + (str[i] - '0');
      if (!(str[i + 1] > 47 && str[i + 1] < 58))
        break;
    }
    else if (!(str[i] > 0 && str[i] <= 32))
        break;
    i++;
  }
  if (str[0] == '-')
    return (-result);
  return (result);
}

int   main(void)
{
  char str1[] = "   7 123 ";
  char str2[] = "   7 123 ";
  printf("%i", ft_atoi(str1));
  printf("\n");
  printf("%i", atoi(str2));
  return (0);
}
