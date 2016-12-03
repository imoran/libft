
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 17:38:52 by imoran            #+#    #+#             */
/*   Updated: 2016/11/29 16:44:12 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return s1;
}

// int		main(void)
// {
// 	char s1[] = "Isis";
// 	char s2[] = "Moran";
// 	//printf("%s", ft_strcat(s1, s2));
// 	printf("%s", strcat(s1, s2));
// 	return 0;
// }
