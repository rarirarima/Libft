#include "libft.h"

static int	ft_s1_check(char c, char *set)
{
	while (*set != '\0')
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_start(char *str, char *set)
{
	size_t	start;

	start = 0;
	while (ft_s1_check(str[start], set) == 1)
	{
		start++;
	}
	return (start);
}

static size_t	ft_end(char *str, char *set)
{
	size_t	end;

	if (ft_strlen(str) == 0)
		return (0);
	end = ft_strlen(str) - 1;
	while (ft_s1_check(str[end], set) == 1 && end > 0)
	{
		end--;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = ft_start((char *)s1, (char *)set);
	end = ft_end((char *)s1, (char *)set);
	if (start > end)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (end - start + 2));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}
