
#include "printflib.h"

int main(void)
{
	ft_printf("salut les %d %s", 42,"pd");
	write(1, "\n", 1);
	ft_printf("%d,%d,%d", 42, 43, 44);
	write(1, "\n", 1);
	ft_printf("%s %s %s %s", "salut","les","42","pd");
	write(1, "\n", 1);
}