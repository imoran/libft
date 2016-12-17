/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 14:36:11 by imoran            #+#    #+#             */
/*   Updated: 2016/12/09 15:00:26 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	if (s && f)
	{
		while (*s)
			f(s++);
	}
}


// ft_striter
// Prototype
// void ft_striter(char*s,void(*f)(char*));
// Description
// Applies the function f to each character of the string passed as argument. Each character is passed by address to f to be modified if necessary.
// Param. #1
// The string to iterate.
// Param. #2
// The function to apply to each character of s.
// Return value
// None.
// Libc functions
// None.
