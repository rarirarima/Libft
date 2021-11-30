#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (p == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
