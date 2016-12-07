/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 00:59:44 by imoran            #+#    #+#             */
/*   Updated: 2016/12/04 00:59:59 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	char	tmp[len];
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;

	i = 0;
	while (i < len)
	{
		tmp[i] = s[i];
		i++;
	}

	i = 0;
	while (i < len)
	{
		d[i] = tmp[i];
		i++;
	}
	return (dst);
}







// char	tmp[len];
// size_t	i;
//
//
// i = 0;
// // while (i < len)
// // {
// // 	tmp[i] = s[i];
// // 	i++;
// 	ft_memcpy(tmp, s, len);
// // }
//
// i = 0;
// // while (i < len)
// // {
// // 	d[i] = tmp[i];
// // 	i++;
// 	ft_memcpy(d, tmp, len);
// // }
// return (dst);
