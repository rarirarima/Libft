#include "libft.h"

int	ft_check_over(long nbr, long s, long c, char const *str)
{
	if ((nbr * 10 + (str[c] - 48)) / 10 != nbr)
	{
		if (s == -1)
			return (0);
		else
			return (-1);
	}
	return (1);
}

int	ft_atoi(char const *str)
{
	long	c;
	long	s;
	long	res;

	c = 0;
	s = 1;
	res = 0;
	while (((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ') && str[c])
		c++;
	if ((str[c] == '+' || str[c] == '-') && str[c])
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while ((str[c] >= '0' && str[c] <= '9') && str[c])
	{
		if (ft_check_over(res, s, c, str) != 1)
		{
			return (ft_check_over(res, s, c, str));
		}
		res = (res * 10) + (str[c] - 48);
		c++;
	}
	return (res * s);
}
