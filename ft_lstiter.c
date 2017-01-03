/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 13:31:22 by imoran            #+#    #+#             */
/*   Updated: 2017/01/02 13:31:25 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	while (lst != NULL)
	{
		f(lst);
		lst = lst->next;
	}
}

// Description Iterates the list lst and applies the function f to each link.
// Param. #1 A pointer to the first link of a list.
// Param. #2 The address of a function to apply to each link of a list.
// Return value None.
// Libc functions None



// {
//   if (!(elem->next = NULL))
//     f(*elem);
//   ft_lstiter(&(*lst), f);
// }
