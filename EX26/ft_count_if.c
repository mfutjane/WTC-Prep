#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int count;

	i = 0;
	count = 0;
	while (tab[i]) // This can be written as either (tab[i] != 0) or as it has been here
	{
		if (f(tab[i]) == 1) // we pass a pointer to the function as a parameter but in the function we use our passed function as usual
			count++;
		i++;
	}
	return (count);
}

int	includes_a(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == 'a')
			return 1;
		i++;
	}
	return 0;
}

int	main(int argc, char **argv)
{
	int count;

	count = ft_count_if(argv, &includes_a);
	printf("The entered arguments have %d strings that include a at least once.\n", count);
	return 0;
}
