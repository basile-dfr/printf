#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    ft_printf("Yo le s\n");
    ft_printf("Carac %c\n", 'B');         
	ft_printf("String : %s\n", "Basile");         
    ft_printf("Nb : %d\n", 42);   
	ft_printf("Nb : %d\n", -442); 
	ft_printf("Nb : %d\n", 456372);  
	ft_printf("Nb : %d\n", 0);        
}