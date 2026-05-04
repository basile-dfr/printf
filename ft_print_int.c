#include "ft_printf.h"

int	ft_print_int(va_list args)
{
	int		n;
	char	*str;
	size_t	len;


	n = va_arg(args, int);
	str = ft_itoa(n);
	if (!str)
    	return (0);
	len = ft_strlen(str);
	write(1, str, len);
	free (str);
	return(len);
}