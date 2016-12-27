#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	if ((*alst)->next)
		ft_lstdel(&(*alst)->next, del);
	del ((*alst)->content, (*alst)->content_size);
	free (*alst);
	*alst = NULL;
}

// void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
// {
// 	del((*alst)->content, (*alst)->content_size);
// 	free(*alst);
// 	*alst = NULL;
// }

// void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
// {
// 	if ((*alst)->next)
// 		ft_lstdel(&(*alst)->next, del);
// 	ft_lstdelone(alst, del);
// }




//
// Description
// Takes as a parameter the address of a pointer to a link and frees the memory of this link and every successors of that link using the functions del and free(3). Finally the pointer to the link that was just freed must be set to NULL (quite similar to the function ft_memdel from the mandatory part).
// Param. #1
// The address of a pointer to the first link of a list that needs to be freed.
// Return value
// None.
// Libc functions
// free(3)
