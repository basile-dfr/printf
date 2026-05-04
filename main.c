#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	int	n;
	n = 42;

	int	retourprintflibc;
	int	retourprintfdemalib;

    ft_printf("Yo le s\n");
    ft_printf("Carac Y : %c\n", 'Y');         
	ft_printf("String Yo le s : %s\n", "Yo le s");         
    ft_printf("Int 42 : %d\n", 42);   
	ft_printf("Int -442 : %d\n", -442); 
	ft_printf("Int 456372 : %d\n", 456372);  
	ft_printf("Int 0 : %d\n", 0);
	ft_printf("Uint -1 : %u\n", -1);
	ft_printf("Uint -2 : %u\n", -2);
	ft_printf("Uint 15456 : %u\n", 15456); 
	ft_printf("Uint 4294967296 : %u\n", 4294967296);
	ft_printf("Hexmin 16 : %x\n", 16);
	ft_printf("Hexmin 8 : %x\n", 8);
	ft_printf("Hexmin 854758 : %x\n", 854758);
	ft_printf("Hexmin -2 : %x\n", -2);
	ft_printf("Hexmin 66 : %x\n", 66);
	ft_printf("Hexmaj 16 : %X\n", 16);
	ft_printf("Hexmaj 8 : %X\n", 8);
	ft_printf("Hexmaj 854758 : %X\n", 854758);
	ft_printf("Hexmaj -2 : %X\n", -2);
	ft_printf("Hexmaj 66 : %X\n", 66);
	retourprintflibc = printf("Addresse le printf stdio : %p\n", &n);
	retourprintfdemalib = ft_printf("Addresse de ma ft_printf : %p\n", &n);
	printf("retourlibc : %d\n", retourprintflibc);
	printf("retourmalib : %d\n", retourprintfdemalib);
}