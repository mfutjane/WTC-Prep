#include <stdlib.h>
#include <unistd.h>

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write(1, str + i, 1);
        i++;
    }
}

int    ft_strcmp(char *str1, char *str2)
{
    int i;

    i = 0;
    while(str1[i] == str2[i] && str1[i] != '\0')
        i++;
    return str1[i] - str2[i];
}

void    selection_sort(int str_count, char **strings)
{
}

int    main(int argc, char **argv)
{
    int i;

    i = 1;
    if(argc > 2)
        selection_sort(argc, argv);
    while(i < (argc - 1)
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i++;
    }
    return 0;
}
}
