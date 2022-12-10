#include "../ex07/ft_rev_int_tab.c"
#include "ft_putnbr.c"

void	main()
{
	int num[5] = {1, 2, 3, 4, 5};
	int *ptr;

	ptr = &num[0];
	ft_rev_int_tab(ptr, 5);
	for (int i = 0; i < 5; i++){
		ft_putnbr(num[i]);
	}
}
