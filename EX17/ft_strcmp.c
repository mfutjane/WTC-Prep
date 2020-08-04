#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] != '\0')
    {
        if(s1[i] > s2[i])
            return 1;
        if(s1[i] < s2[i])
            return -1;
        i++;
    }
    return 0;
}

int	main(int argc, char **argv)
{
	int res;

	if(argc == 3)
	{
		res = ft_strcmp(argv[1], argv[2]);
		if(res == 1)
			printf("%s is bigger than %s\n", argv[1], argv[2]);
		else if(res == -1)
			printf("%s is less than %s\n", argv[1], argv[2]);
		else
			printf("%s is the same as %s\n", argv[1], argv[2]);
	}
	else
		printf("Wrong number of arguments. Please only write 2 strings to compare\n");
	return 0;
}
