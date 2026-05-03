#include "ft_printf.h"

int	ft_print_char(va_list args)
{
	int	c;
	
	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
