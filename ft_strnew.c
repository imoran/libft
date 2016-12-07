/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 21:53:36 by imoran            #+#    #+#             */
/*   Updated: 2016/12/06 21:53:52 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *result;

	result = (char *)malloc(size + 1);
	if (!result)
		return (0);
	return (ft_memset(result, 0, size + 1));
}
