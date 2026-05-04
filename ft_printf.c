#include "ft_printf.h"

int	ft_selection(char type, va_list args)
{
	if (type == 'c')
		return (ft_print_char(args));
	else if (type == 's')
		return (ft_print_str(args));
	else if (type == 'd' || type == 'i')
		return (ft_print_int(args));
	else if (type == 'u')
		return (ft_print_uint(args));
	else if (type == 'x')
		return (ft_print_hexmin(args));
	else if (type == 'X')
		return (ft_print_hexmaj(args));
	else if (type == 'p')
		return (ft_print_ptr(args));
	else if (type == '%')
	{
		write (1, "%", 1);
		return (1);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;
	int		i;

	count = 0;
	i = 0;
	va_start(args, format);
	if (!format)
	{
		va_end(args);
		return (count);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			count = count + ft_selection(format[i + 1], args);
			i = i + 2;
		}
		else
		{
			write(1, &format[i], 1);
			i++;
			count++;
		}
	}
	va_end(args);
	return (count);
}
