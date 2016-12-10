/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 15:59:44 by imoran            #+#    #+#             */
/*   Updated: 2016/12/09 16:00:23 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*result;
	char	*s2;
	int		i;

	if (!s)
		return (0);
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	s2 = (char *)s;
	i = 0;
	if ((!(s2)) || (!(result)))
		return (0);
	while (*s2)
	{
		result[i] = f(*s2);
		s2++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
