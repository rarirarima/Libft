/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:52:29 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:52:30 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	char	*s3;
	char	*s4;

	s3 = (char *)s1;
	s4 = (char *)s2;
	if (s1 == NULL || s2 == NULL)
		return (ft_strdup(""));
	p = (char *)malloc((sizeof(char)) * (ft_strlen(s3) + ft_strlen(s4) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s3 != '\0')
		p[i++] = *s3++;
	while (*s4 != '\0')
		p[i++] = *s4++;
	p[i] = '\0';
	return (p);
}
