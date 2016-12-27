void ft_lstiter(t_list *lst, void (*f)(t_list *elem))
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
