/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 13:44:04 by imoran            #+#    #+#             */
/*   Updated: 2016/11/29 15:09:32 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcpy(char *dst, const char *src)
{
	int index;

	index = 0;
	// if ((dst == NULL) || (src == NULL))
	// 	return NULL;
	// if (strlen(src) > sizeof(dst))
	// 	return "abort";
	while (src[index])
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (dst);
}

// int main ()
// {
//    const char src3[50] = "Isis is cool";
//    char dest3[50];
//
//    const char src4[50] = "Isis is cool";
//    char dest4[50];
//
//
//    printf("Before strcpy dest = %s\n", dest3);
//    strcpy(dest3, src3);
//    printf("After strcpy dest = %s\n", dest3);
//    printf("\n\n");
//
//    printf("Before ft_strcpy dest = %s\n", dest4);
//    ft_strcpy(dest4, src4);
//    printf("After ft_strcpy dest = %s\n", dest4);
//
//    return(0);
// }
