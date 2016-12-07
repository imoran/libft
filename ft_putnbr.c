/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 22:13:48 by imoran            #+#    #+#             */
/*   Updated: 2016/12/05 22:40:20 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	int nb2;
	int power;

	power = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	nb2 = nb;
	while ((nb2 /= 10) > 0)
		power *= 10;
	while (power)
	{
		ft_putchar((nb / power) + '0');
		nb %= power;
		power /= 10;
	}
}
