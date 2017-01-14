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

static void		ft_check(size_t *result, const char *str)
{
	int i;
	int neg;
	int pos;

	neg = 0;
	pos = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && (ft_isdigit(str[i + 1])))
			neg = 1;
		if (str[i] == '+' && (ft_isdigit(str[i + 1])))
			pos = 1;
		if (ft_isdigit(str[i]))
		{
			*result = *result * 10 + (str[i] - '0');
			if (!(ft_isdigit(str[i + 1])))
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
	size_t result;

	result = 0;
	ft_check(&result, str);
	return ((int)result);
}
