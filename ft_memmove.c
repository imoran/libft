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
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (d == s || !len)
		return (dst);
	if (s > d)
	{
		while (len--)
			*d++ = *s++;
		return (dst);
	}
	d += len;
	s += len;
	while (len--)
		*--d = *--s;
	return (dst);
}
