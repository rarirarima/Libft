#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = s;
	while (size > 0)
	{
		ptr[i] = '\0';
		i++;
		size--;
	}
}
