/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:51:28 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:51:29 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*str;

	dest = s1;
	str = s2;
	i = 0;
	if (dest == NULL && str == NULL)
		return (NULL);
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return ((char *)dest);
}
