#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a/b; //divide a by b, store result as value for div
    *mod = a%b; //divide a by b, store remainder as value for mod
}

int	main(void)
{
	int	div;
	int mod;

	ft_div_mod(30, 7, &div, &mod);
	printf("div %d mod %d", div, mod);
	return 0;
}
