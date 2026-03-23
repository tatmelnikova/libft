#include "libft.h"

// Counts the number of nodes in the list
int ft_lstsize(t_list *lst)
{
	size_t size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}