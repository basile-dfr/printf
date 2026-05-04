#include "ft_printf.h"

static int	ft_putnbrhexmin(unsigned int n)
{
	char	*basem;
	int		count;
	char	c;

	basem = "0123456789abcdef";
	count = 0;
	if (n / 16)
		count = count + ft_putnbrhexmin(n / 16);
	c = basem[n % 16];
	write (1, &c, 1);
	count ++;
	return (count);
}


int	ft_print_hexmin(va_list args)
{
	unsigned int	n;
	int				count;

	count = 0;
	n = va_arg(args, unsigned int);
	count = ft_putnbrhexmin(n);
	return (count);
}