#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last;

	if (!lst || !new)
		return;
	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}

// int main(void)
// {
// 	t_list *lst = ft_lstnew("first");
// 	t_list *new = ft_lstnew("second");
// 	ft_lstadd_back(&lst, new);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s\n", (char *)lst->next->content);
// 	return 0;
// }