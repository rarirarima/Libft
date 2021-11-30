#include "libft.h"

static int	ft_count_digit(long	n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		digit++;
	}
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static void	my_itoa(long nbr, char *str)
{
	size_t	i;
	size_t	j;

	i = ft_count_digit(nbr);
	j = i;
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[i - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		i--;
	}
	str[j] = '\0';
}

char	*ft_itoa(int n)
{
	char	*p;

	p = (char *)malloc(sizeof(char) * (ft_count_digit((long)n) + 1));
	if (p == NULL)
		return (NULL);
	if (n == 0)
	{
		p[0] = '0';
		p[1] = '\0';
		return (p);
	}
	my_itoa((long)n, p);
	return (p);
}
