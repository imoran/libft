/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 21:41:23 by imoran            #+#    #+#             */
/*   Updated: 2016/12/02 21:42:02 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_check(int *result, const char *str)
{
	int i;
	int neg;
	int pos;

	neg = 0;
	pos = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && (str[i + 1] > 47 && str[i + 1] < 58))
			neg = 1;
		if (str[i] == '+' && (str[i + 1] > 47 && str[i + 1] < 58))
			pos = 1;
		if (str[i] > 47 && str[i] < 58)
		{
			*result = *result * 10 + (str[i] - '0');
			if (!(str[i + 1] > 47 && str[i + 1] < 58))
				break ;
		}
		else if (!(ft_isspace(str[i])) && (!neg && !pos))
			break ;
		i++;
	}
	if (neg)
		*result = -*result;
}

int				ft_atoi(const char *str)
{
	int result;

	result = 0;
	ft_check(&result, str);
	return (result);
}
