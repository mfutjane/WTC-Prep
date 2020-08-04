#include <stdio.h>

void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while(i < length)
    {
        (*f)(tab[i]);
        i++;
    }
}

void multiply_by_itself(int n)
{
	int ret;

	ret = n*n;
	printf("%d is the result of %d*%d\n", ret, n, n);
}

int	main(void)
{
	int list[5] = {1,2,3,4,10};

	ft_foreach(list, 5, &multiply_by_itself);
	return 0;
}
