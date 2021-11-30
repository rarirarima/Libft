#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*new;

	i = 0;
	new = lst;
	if (lst == NULL)
		return (0);
	while (new != NULL)
	{
		i++;
		new = new->next;
	}
	return (i);
}
