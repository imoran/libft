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

int		ft_atoi(const char *str)
{
	int i;
	int result;
	int negative;

	negative = 0;
	i = 0;
	result = 0;
	while (str[i])
	{
		if (str[i] == '-' && (str[i + 1] > 47 && str[i + 1] < 58))
			negative = 1;
		if (str[i] > 47 && str[i] < 58)
		{
			result = result * 10 + (str[i] - '0');
			if (str[i + 1] == '-')
				break ;
		}
		else if (!(str[i] > 0 && str[i] <= 32) && !(negative))
			break ;
		i++;
	}
	if (negative)
		result = -result;
	return (result);
}
