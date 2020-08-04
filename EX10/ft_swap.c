#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a; //set temp to int value of a
    *a = *b; //set value of a to value of b
    *b = temp; //set value of b to temp
}

int	main(void)
{
	int	uno;
	int	dos;

	uno = 0;
	dos = 4353234;
	ft_swap(&uno, &dos);
	printf("uno %d dos %d dos\n", uno, dos);
	return 0;
}
