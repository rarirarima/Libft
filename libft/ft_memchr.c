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
