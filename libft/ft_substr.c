/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:53:38 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:53:39 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	if ((size_t)start >= ft_strlen((char *)s) || len <= 0)
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		size = ft_strlen(s) - start;
	else
		size = len;
	p = malloc(sizeof(char) * (size + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		p[i++] = s[start++];
	}
	p[i] = '\0';
	return (p);
}
