/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 21:56:17 by imoran            #+#    #+#             */
/*   Updated: 2016/12/09 21:56:25 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	i;

	if ((!len || !s) || !s[start])
		return (0);
	result = (char *)malloc(sizeof(char) * len + 1);
	i = 0;
	if (!result)
		return (0);
	while (len--)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
