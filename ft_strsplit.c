/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 18:57:12 by imoran            #+#    #+#             */
/*   Updated: 2016/12/10 18:57:40 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_substring(const char *s, char c)
{
	int		count;
	int		sub;

	sub = 0;
	count = 0;
	while (*s)
	{
		if (sub == 1 && *s == c)
			sub = 0;
		if (sub == 0 && *s != c)
		{
			sub = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int	ft_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s)
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		num_words;
	int		index;

	if (!s)
		return (0);
	index = 0;
	num_words = ft_substring((const char *)s, c);
	str = (char **)malloc(sizeof(*str) * num_words + 1);
	if (!str)
		return (0);
	while (num_words--)
	{
		while (*s == c && *s)
			s++;
		str[index] = ft_strsub((const char *)s, 0, ft_len((const char *)s, c));
		s += ft_len(s, c);
		index++;
	}
	str[index] = 0;
	return (str);
}
