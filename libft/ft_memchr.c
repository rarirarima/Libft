/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:51:19 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:51:20 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int c, size_t n)
{
	unsigned char	*dest;

	dest = (unsigned char *)buf;
	c = (unsigned char)c;
	while (n > 0)
	{
		if (*dest == c)
			return ((void *)dest);
		dest++;
		n--;
	}
	return (NULL);
}
