#include <stdio.h>

int    ft_sqrt(int nb)
{
    int candidate;

    candidate = 0;
    while(candidate < nb/2)
    {
        candidate++;
        if(candidate*candidate == nb)
            return candidate;
    }
    return 0;
}

int	main(void)
{
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(-33));
	printf("%d\n", ft_sqrt(64));
	printf("%d\n", ft_sqrt(13689));
	return 0;
}
