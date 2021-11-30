#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;

	if (!count || !size)
	{
		count = 1;
		size = 1;
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	p = (void *)malloc((size) * (count));
	if (p == NULL)
		return (NULL);
	ft_bzero((void *)p, size * count);
	return ((void *)p);
}
