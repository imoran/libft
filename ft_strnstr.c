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
	int		i;
	int		match;
	int		little_length;
	char	*b;
	char	*l;

	i = 0;
	match = 0;
	little_length = ft_strlen(little);
	b = (char *)big;
	l = (char *)little;
	if (little_length == 0)
		return (b);
	while (b[i] && len--)
	{
		while (l[match] == b[i])
		{
			if (match == little_length - 1)
				return (b + (i - match));
			match++;
			i++;
		}
		match = 0;
		i++;
	}
	return (0);
}
