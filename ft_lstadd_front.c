#include "libft.h"

// Adds the node ’new’ at the beginning of the list.
// lst: The address of a pointer to the first node of
// a list.
// new: The address of a pointer to the node to be
// added.
void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = *lst;
	*lst = new;
}