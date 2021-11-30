#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	a;
	size_t	b;

	if (*needle == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	a = 0;
	while (haystack[a] != '\0' && 0 < len--)
	{
		b = 0;
		while (needle[b] == haystack[a + b] && !(b > len))
		{
			if (needle[b + 1] == '\0')
				return ((char *)haystack + a);
			b++;
		}
		a++;
	}
	return (0);
}
