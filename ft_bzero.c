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


void  ft_bzero(void *s, size_t n)
{
  ft_memset(s, '\0', n);
}

// int   main(void)
// {
//   char str1[5] = "Isis";
//   char str2[5] = "Isis";
//   printf("\n str1 %s\n", str1);
//   printf("\n str2 %s\n\n\n", str2);
//   ft_bzero(str1, 2);
//   bzero(str2, 2);
//   printf("\nstr1 %s\n", str1);
//   printf("\nstr2%s\n", str2);
//
//   return (0);
// }
