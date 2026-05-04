#include "ft_printf.h"

static int	ft_putptrhexmin(unsigned long int n)
{
	char	*basem;
	int		count;
	char	c;

	basem = "0123456789abcdef";
	count = 0;
	if (n / 16)
		count = count + ft_putptrhexmin(n / 16);
	c = basem[n % 16];
	write (1, &c, 1);
	count ++;
	return (count);
}

int	ft_print_ptr(va_list args)
{
	unsigned long	n;
	void			*ptr;
	int				count;

	ptr = va_arg(args, void*);
	n = (unsigned long)ptr;
	write(1, "0x", 2);
	count = ft_putptrhexmin(n) + 2;
	return (count);
}