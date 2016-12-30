#include "libft.h"

t_list  *ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
    t_list *element;
    // int    i;

    element = (t_list *)malloc(sizeof(t_list));
    // i = 0;
	element = f(lst);
    if (!element)
        return (NULL);
    while (lst->next)
    {
      element->next = f(lst);
      lst = lst->next;
    //   i++;
    }
    return (element);
}

// #include "libft.h"
//
// t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
// {
// 	t_list	*ret;
// 	t_list	*ret_last;
//
// 	ret = (t_list *)malloc(sizeof(t_list));
// 	// ret = ret_last = f(lst);
// 	ret_last = f(lst);
// 	ret = ret_last;
// 	if (ret == NULL)
// 		return (NULL);
//
// 	while (lst->next) {
// 		lst = lst->next;
// 		ret_last->next = f(lst);
// 		if (ret_last->next == NULL)
// 			return (NULL);
// 		ret_last = ret_last->next;
// 	}
// 	return (ret);
// }




// Description Iterates a list lst and applies the function f to each link to
// create a “fresh” list (using malloc(3)) resulting from the successive
// applications of f. If the allocation fails, the function
// returns NULL.
// Param. #1 A pointer’s to the first link of a list.
// Param. #2 The address of a function to apply to each link of a list.
// Return value The new list.
// Libc functions malloc(3), free(3).
