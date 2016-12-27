void ft_lstadd(t_list **alst, t_list *new)
{
  if (!new)
    return (NULL);
  new->next = (*alst);
  (*alst) = new;
}
