/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 22:07:53 by imoran            #+#    #+#             */
/*   Updated: 2016/12/05 22:08:33 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		tmp;
	int		neg;

	len = 0;
	tmp = n;
	neg = 0;
	if (n == 0)
	{
		result = (char *)malloc(2);
		result[0] = '0';
		return (result);
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		len++;
		neg = 1;
	}
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len] = '\0';
	while (len >= 0)
	{
		len--;
		if (len == 0 && neg)
			result[len] = '-';
		else
			result[len] = n % 10 + '0';
		n /= 10;
	}
	return (result);
}

// //
// int		main(void)
// {
// 	int num = -0;
// 	printf("%s\n", ft_itoa(num));
// 	// printf("%d", itoa(num));
// }
