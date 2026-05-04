#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(va_list args);
int	ft_print_str(va_list args);
int	ft_print_int(va_list args);
int	ft_print_uint(va_list args);
int	ft_print_hexmin(va_list args);
int	ft_print_hexmaj(va_list args);
int	ft_print_ptr(va_list args);

#endif