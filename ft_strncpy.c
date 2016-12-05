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

char	*ft_strncpy(char *dst, char *src, size_t len)
{
	int		index;

	index = 0;
	while (len && src[index])
	{
		dst[index] = src[index];
		index++;
		len--;
	}
	while (len)
	{
		dst[index] = '\0';
		index++;
		len--;
	}
	return (dst);
}
