
#include "ft_printf.h"

#include <limits.h>

int main(void)
{
	int result;
	result = 0;

result = ft_printf("%x", 0);
printf("\n%d\n", result);
result = ft_printf("%x", -10);
printf("\n%d\n", result);
result = ft_printf("%x", -200000);
printf("\n%d\n", result);
result = ft_printf("%x", -6000023);
printf("\n%d\n", result);
result = ft_printf("%x", 10);
printf("\n%d\n", result);
result = ft_printf("%x", 10000);
printf("\n%d\n", result);
result = ft_printf("%x", 100023);
printf("\n%d\n", result);
result = ft_printf("%x", 0xabcdef);
printf("\n%d\n", result);
result = ft_printf("%x", 0x7fedcba1);
printf("\n%d\n", result);
result = ft_printf("%x", INT_MAX);
printf("\n%d\n", result);
result = ft_printf("%x", INT_MIN);
printf("\n%d\n", result);
result = ft_printf("%x", UINT_MAX);
printf("\n%d\n", result);
result = ft_printf("dgs%xxx", 10);
printf("\n%d\n", result);
result = ft_printf("%x%xx%x", 1, 2, -3);
printf("\n%d\n", result);

ft_printf("\n");
ft_printf("vrai result : \n");

result = printf("%x", 0);
printf("\n%d\n", result);
result = printf("%x", -10);
printf("\n%d\n", result);
result = printf("%x", -200000);
printf("\n%d\n", result);
result = printf("%x", -6000023);
printf("\n%d\n", result);
result = printf("%x", 10);
printf("\n%d\n", result);
result = printf("%x", 10000);
printf("\n%d\n", result);
result = printf("%x", 100023);
printf("\n%d\n", result);
result = printf("%x", 0xabcdef);
printf("\n%d\n", result);
result = printf("%x", 0x7fedcba1);
printf("\n%d\n", result);
result = printf("%x", INT_MAX);
printf("\n%d\n", result);
result = printf("%x", INT_MIN);
printf("\n%d\n", result);
result = printf("%x", UINT_MAX);
printf("\n%d\n", result);
result = printf("dgs%xxx", 10);
printf("\n%d\n", result);
result = printf("%x%xx%x", 1, 2, -3);
printf("\n%d\n", result);
}