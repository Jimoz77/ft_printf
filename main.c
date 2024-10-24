
#include "ft_printf.h"

#include <limits.h>

int main(void)
{
	int result;

	result = 0;

	result = ft_printf(" %d ", -1);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", -9);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", LONG_MAX);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", LONG_MIN);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", UINT_MAX);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", ULONG_MAX);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", 9223372036854775807LL);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d %d %d %d %d %d %d", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_putstr(ft_itoa(result)); 

	write(1, "\n", 1);
	result = ft_printf(" %d ", -42);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", INT_MAX);
	ft_putstr(ft_itoa(result));

	write(1, "\n", 1);

	result = ft_printf(" %d ", INT_MIN);
	ft_putstr(ft_itoa(result)); 

	write(1, "\n", 1); 
}