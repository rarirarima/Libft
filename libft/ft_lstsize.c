/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:51:04 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:51:05 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
