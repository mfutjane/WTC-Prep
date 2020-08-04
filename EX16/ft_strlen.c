#include <stdio.h>

int    ft_strlen(char *str)
{
    int counter;

    counter = 0;
    while(str[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

//prints out the number of characters in a string except the program name
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while(i < argc && argc > 1)
	{
			
			printf("String %d has %d characters\n", i, ft_strlen(argv[i]));
			i++;
	}
	return 0;
}
