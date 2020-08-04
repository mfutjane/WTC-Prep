#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int	main(void)
{
	int	test;

	test = 35;
	ft_ft(&test);
	printf("%d", test);
	return 0;
}
