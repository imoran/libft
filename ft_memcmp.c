/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 19:11:24 by imoran            #+#    #+#             */
/*   Updated: 2016/12/09 14:23:20 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char		*s3;
	const char		*s4;

	s3 = (const char *)s1;
	s4 = (const char *)s2;
	while (n--)
	{
		if (*s3 != *s4)
			return (*(unsigned char *)s3 - *(unsigned char *)s4);
		s3++;
		s4++;
	}
	return (0);
}
