#include "libft.h"

t_list *ft_lstnew(void const *content, size_t content_size)
{

	t_list *elem;

	elem = (t_list*)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (content)
	{
		elem->content = malloc(content_size);
		if (!elem->content)
		{
			free (elem);
			return (NULL);
		}
		ft_memcpy(elem->content, content, content_size);
		elem->content_size = content_size;
	}
	else
	{
		elem->content = NULL;
		elem->content_size = 0;
	}
	elem->next = NULL;
	return (elem);

	
	// t_list *elem;
	//
	// elem = (t_list*)malloc(sizeof(content_size));
	//
	// if (content)
	// {
	// 	if (elem)
	// 		elem -> content = (void *)content;
	// 	else
	// 		return (NULL);
	// }
	// else
	// {
	// 	elem->content = NULL;
	// 	elem->content_size = 0;
	// 	elem->next = NULL;
	// }
	// return (elem);
}
