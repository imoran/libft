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

static void	is_neg(int *n, int *len, int *neg)
{
	if (*n < 0)
	{
		*n *= -1;
		*len += 1;
		*neg = 1;
	}
}

static void	copy_result(int *n, int *len, int *neg, char *result)
{
	while (*len >= 0)
	{
		*len -= 1;
		if (*len == 0 && *neg)
			result[*len] = '-';
		else
			result[*len] = *n % 10 + '0';
		*n /= 10;
	}
}

char		*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		tmp;
	int		neg;

	len = 0;
	tmp = n;
	neg = 0;
	if (n == 0)
		len++;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_neg(&n, &len, &neg);
	while (tmp)
	{
		tmp /= 10;
		len++;
	}
	result = (char *)malloc(len + 1);
	if (!result)
		return (0);
	result[len] = '\0';
	copy_result(&n, &len, &neg, result);
	return (result);
}
