/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ispunct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:32:22 by imoran            #+#    #+#             */
/*   Updated: 2017/01/02 14:32:32 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ispunct(int c)
{
	if ((c > 32 && c < 48) || (c > 57 && c < 65) || \
		(c > 90 && c < 97) || (c > 122 && c < 127))
	{
		return (1);
	}
	return (0);
}