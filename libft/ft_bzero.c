/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:50:07 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:50:08 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (size > 0)
	{
		ptr[i] = '\0';
		i++;
		size--;
	}
}
