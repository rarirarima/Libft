#include "libft.h"

int	ft_isalnum(int i)
{
	if ((i >= 'A' && i <= 'Z') || (i >= 'a' && i <= 'z'))
		return (1);
	else if (i >= '0' && i <= '9')
		return (1);
	else
		return (0);
}
