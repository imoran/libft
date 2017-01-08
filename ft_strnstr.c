/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 14:55:59 by imoran            #+#    #+#             */
/*   Updated: 2016/12/05 14:56:03 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	nlen;
	int		result;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	if (!(*l))
		return (b);
	nlen = ft_strlen(l);
	result = 0;
	if (nlen > len)
		return (0);
	while (nlen <= len && *b
		&& (result = ft_strncmp(b, l, nlen)))
	{
		len--;
		b++;
	}
	if (result)
		return (0);
	else
		return (b);
}
