#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	const unsigned char	*dest;
	const unsigned char	*str;
	size_t				i;

	i = 0;
	dest = (const unsigned char *)buf1;
	str = (const unsigned char *)buf2;
	if (n == 0 || (dest == NULL && str == NULL))
		return (0);
	while (i < n)
	{
		if (dest[i] != str[i])
			return (dest[i] - str[i]);
		i++;
	}
	return (0);
}
