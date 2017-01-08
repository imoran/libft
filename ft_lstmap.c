/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 13:31:39 by imoran            #+#    #+#             */
/*   Updated: 2017/01/02 13:31:40 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *element;
	t_list *first_elem;

	element = (t_list *)malloc(sizeof(t_list));
	first_elem = f(lst);
	element = first_elem;
	if (!element)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		first_elem->next = f(lst);
		if (first_elem->next == NULL)
			return (NULL);
		first_elem = first_elem->next;
	}
	return (element);
}
