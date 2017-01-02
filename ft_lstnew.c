/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imoran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 13:30:34 by imoran            #+#    #+#             */
/*   Updated: 2017/01/02 13:31:47 by imoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *elem;

	elem = (t_list*)malloc(sizeof(t_list));
	if (elem == NULL)
		return (NULL);
	if (content)
	{
		elem->content = (void *)malloc(sizeof(content_size));
		if (elem->content == NULL)
		{
			free(elem);
			return (NULL);
		}
		elem->content_size = content_size;
		ft_memcpy(elem->content, content, content_size);
	}
	else
	{
		elem->content = NULL;
		elem->content_size = 0;
	}
	elem->next = NULL;
	return (elem);
}
