/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryosukearima <ryosukearima@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 01:51:51 by ryosukearim       #+#    #+#             */
/*   Updated: 2021/12/01 01:51:52 by ryosukearim      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_strs(const char *s, char c)
{
	size_t	i;
	size_t	strs;

	i = 0;
	strs = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			strs++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (strs);
}

char	*word_in(char *p, const char *s, size_t i, size_t len)
{
	size_t	a;

	a = 0;
	while (len > 0)
	{
		p[a] = s[i - len];
		a++;
		len--;
	}
	p[a] = '\0';
	return (p);
}

char	**split_free(char **p, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num)
	{
		free(p[i]);
		p[i] = NULL;
		i++;
	}
	free(p);
	return (NULL);
}

char	**ft_split2(char **p, const char *s, char c, size_t strs)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (s[i] && j < strs)
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		p[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (!p[j])
		{
			return (split_free(p, j));
		}
		word_in(p[j], s, i, len);
		j++;
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	size_t	strs;

	if (s == NULL)
		return (NULL);
	strs = count_strs(s, c);
	p = (char **)malloc(sizeof(char *) * (strs + 1));
	if (!p)
		return (NULL);
	ft_split2(p, s, c, strs);
	p[strs] = NULL;
	return (p);
}
