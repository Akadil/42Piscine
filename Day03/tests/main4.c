#include "ft_putnbr.c"
#include "../ex04/ft_ultimate_div_mod.c"

void	main()
{
	int *ptr1;
	int *ptr2;
	int a;
	int b;

	a = 15;
	b = 6;
	ptr1 = &a;
	ptr2 = &b;

	ft_ultimate_div_mod(ptr1, ptr2);
	ft_putnbr(a);
	ft_putnbr(b);
}
