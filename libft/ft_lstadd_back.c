#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (lst == NULL || new == NULL)
		return ;
	if (lst != NULL && *lst == NULL)
		*lst = new;
	else if (lst != NULL && *lst != NULL)
	{
		tmp = ft_lstlast(*lst);
		tmp->next = new;
	}
}
