#include "../ex00/ft_ft.c"
#include "ft_putnbr.c"

int	main(void)
{
	int *ptr;
	int a;

	a = 12;
	ptr = &a;
	ft_ft(ptr);
	ft_putnbr(a);
	return (0);
}
