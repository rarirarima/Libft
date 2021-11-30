/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:50:40 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:50:41 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
