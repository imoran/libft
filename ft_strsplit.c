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


// ft_strsplit
// Prototype
// char** ft_strsplit(charconst*s,charc);
// Description
// Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself)
// obtained by spliting s using the character c as a delimiter.
// If the allocation fails the function returns NULL.
// Example : ft_strsplit("*hello*fellow***students*", ’*’)
// returns the array ["hello", "fellow", "students"].
// Param. #1
// The string to split.
// Param. #2
// The delimiter character.
// Return value
// The array of “fresh” strings result of the split.
// Libc functions
// malloc(3), free(3)

#include "libft.h"

static int		ft_cnt_parts(const char *s, char c)
{
	int		cnt;
	int		in_substring;

	in_substring = 0;
	cnt = 0;
	while (*s)
	{
		if (in_substring == 1 && *s == c)
			in_substring = 0;
		if (in_substring == 0 && *s != c)
		{
			in_substring = 1;
			cnt++;
		}
		s++;
	}
	return (cnt);
}

static int	ft_wlen(const char *s, char c)
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

char	**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	index = 0;
	nb_word = ft_cnt_parts((const char *)s, c);
	t = (char **)malloc(sizeof(*t) * nb_word + 1);
	if (!t)
		return (0);
	if (!s)
		return (0);
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		t[index] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		if (t[index] == 0)
			return (0);
		s = s + ft_wlen(s, c);
		index++;
	}
	t[index] = 0;
	return (t);
}
