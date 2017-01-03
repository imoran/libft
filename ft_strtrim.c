/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 00:36:22 by imoran            #+#    #+#             */
/*   Updated: 2016/12/10 00:37:22 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*result;
	int		i;
	int		start;
	int		end;

	if (!s)
		return (0);
	i = 0;
	end = ft_strlen(s) - 1;
	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	while (s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
		end--;
	if (start > end)
		return (ft_strdup(""));
	if (!result)
		return (NULL);
	while (start <= end)
		result[i++] = s[start++];
	result[i] = '\0';
	return (result);
}
