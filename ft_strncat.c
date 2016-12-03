/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 18:45:49 by imoran            #+#    #+#             */
/*   Updated: 2016/12/02 13:02:57 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[i] && n)
	{
		s1[i + j] = s2[j];
		j++;
		n--;
	}
	s1[i + j] = '\0';
	return (s1);
}

// int		main(void)
// {
// 	char string1[10] = "Isis";
// 	char string2[] = "Moran";
//
// 	char string2[10] = "Isis";
// 	char string3[]
//
// 	printf("%s", ft_strncat(s1, s2, 1));
// 	printf("\n");
// 	printf("%s", strncat(s1, s2, 1));
// 	return (0);
// }
//
