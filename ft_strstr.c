/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/04 23:35:38 by imoran            #+#    #+#             */
/*   Updated: 2016/12/04 23:35:52 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int		i;
	int		match;
	int		len;
	char	*b;
	char	*l;

	i = 0;
	match = 0;
	len = ft_strlen(little);
	b = (char *)big;
	l = (char *)little;
	if (len == 0)
		return (b);
	while (b[i])
	{
		while (l[match] == b[i + match])
		{
			if (match == len - 1)
				return (b + i);
			match++;
		}
		match = 0;
		i++;
	}
	return (0);
}
