#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == s2)
		return (s1);
	else if (s1 < s2)
		ft_memcpy(s1, s2, n);
	else
	{
		while (n-- > 0)
		{
			*(unsigned char *)(s1 + n) = *(unsigned char *)(s2 + n);
		}
	}
	return (s1);
}
