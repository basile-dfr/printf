#include "ft_printf.h"

static int	ft_putnbruint(unsigned int n)
{
	int		count;
	char	c;
	count = 0;
	if (n / 10)
		count = count + ft_putnbruint(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
	count ++;
	return (count);
}


int	ft_print_uint(va_list args)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = va_arg(args, unsigned int);
	count = ft_putnbruint(n);
	return (count);
}