#include "ft_printf.h"

static int	ft_putnbrhexmaj(unsigned int n)
{
	char	*baseM;
	int		count;
	char	c;

	baseM = "0123456789ABCDEF";
	count = 0;
	if (n / 16)
		count = count + ft_putnbrhexmaj(n / 16);
	c = baseM[n % 16];
	write (1, &c, 1);
	count ++;
	return (count);
}


int	ft_print_hexmaj(va_list args)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = va_arg(args, unsigned int);
	count = ft_putnbrhexmaj(n);
	return (count);
}