/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 16:35:12 by imoran            #+#    #+#             */
/*   Updated: 2016/12/09 16:35:50 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	char			*s2;
	unsigned int	i;
	unsigned int	j;

	if (!s)
		return (0);
	result = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	s2 = (char *)s;
	i = 0;
	j = 0;
	if ((!(s2)) || (!(result)))
		return (0);
	while (*s2)
	{
		result[i] = f(j, *s2);
		s2++;
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
