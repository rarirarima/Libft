#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (size > 0)
	{
		ptr[i] = c;
		i++;
		size--;
	}
	return (s);
}
