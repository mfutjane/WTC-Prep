#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

char    *ft_strdup(char *src)
{
    char *ret;
    int src_len;
    int i;

    i = 0;
    src_len = ft_strlen(src);
    ret = malloc((sizeof(char)*src_len) + 1);
    while(src[i] != '\0')
	{
        ret[i] = src[i]; //copy character, increment i afterwards
		i++;
	}
	ret[i] = '\0';
    return ret;
}

int	main(void)
{
	char *dup;
	char *original;

	original = "Test";
	dup = ft_strdup(original);
	printf("Duplicated: %s\n", dup);
	return 0;
}
