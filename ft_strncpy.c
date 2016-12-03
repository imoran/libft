/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 16:55:18 by imoran            #+#    #+#             */
/*   Updated: 2016/11/28 16:56:04 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	int		index;

	index = 0;
	if ((dst == NULL) || (src == NULL))
		return NULL;
	if (strlen(src) > sizeof(dst))
		return "abort";
	while (len && srcs[index])
	{
		dst[index] = src[index];
		len--;
		index++;
	}
	dst[index] = '\0';
	return dst;
}

// int		main(void)
// {
// 	char src[] = "Isis";
// 	char dst[5];
//
// 	printf("%s", ft_strncpy(dst, src, 10));
// 	//printf("%s", strncpy(dst, src, 10));
// 	return 0;
// }
