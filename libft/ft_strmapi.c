#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*p;
	unsigned int		i;

	if (s == NULL || f == NULL)
		return (ft_strdup(""));
	p = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
