#include <stdlib.h>
#include <stdio.h>

void	print_list(int *list, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		printf("Digit num %d is the number: %d\n", i+1, list[i]);
		i++;
	}
}

int    *ft_range(int min, int max)
{
    int i;
    int difference;
    int *ret;

	i = 0;
    difference = max - min;
	printf("diff is %d\n", difference);
    if(difference <= 0)
        return NULL;
    ret = (int*)malloc(sizeof(int)*difference + 1);
    while(i < difference)
    {
        ret[i] = min + i;
        i++; 
    }
    return ret;
}

int	main(void)
{
	int	*list;

	list = ft_range(-4, 8);
	print_list(list, 12);
	return 0;
}
