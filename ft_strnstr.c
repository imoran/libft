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
	size_t	little_len;
	int		result;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	if (!(*l))
		return (b);
	little_len = ft_strlen(l);
	result = 0;
	if (little_len > len)
		return (0);
	while (little_len <= len && *b
		&& (result = ft_strncmp(b, l, little_len)))
	{
		len--;
		b++;
	}
	if (result)
		return (0);
	else
		return (b);
}
