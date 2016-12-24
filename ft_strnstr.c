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
#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*b;
	char	*l;


	i = 0;
	b = (char *)big;
	l = (char *)little;
	if (!(*l))
		return (b);
	while (len && *b)
	{
		if (*b == l[i])
			i++;
		else
			i = 0;
		if (l[i] == '\0')
			return (b - i + 1);
		b++;
		len--;
	}
	return (NULL);
}

// int		main()
// {
// 	char	buf2[] = "ozarabozaraboze123";
// 	printf("%s\n", ft_strnstr(buf2, "ozaraboze", 15));
// 	printf("%s\n", strnstr(buf2, "ozaraboze", 15));
//
// }
