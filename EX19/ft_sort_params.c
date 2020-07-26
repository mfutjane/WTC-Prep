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
    char *temp;
    int temp_min;
    int min_candidate;
    int unsorted_index;

    temp_min = 0;
    min_candidate = 1;
    unsorted_index = 0;
    while(unsorted_index < str_count - 1)
    {
        while(min_candidate < str_count)
        {
            if(ft_strcmp(strings[temp_min], strings[min_candidate]) > 0)
                temp_min = min_candidate;
        }
        temp = argv[unsorted_index];
        argv[unsorted_index] = argv[temp_min];
        argv[temp_min] = temp;

        unsorted_index++;
        temp_min = unsorted_min;
        min_candidate = unsorted_min + 1;
    }
}

int    main(int argc, char **argv)
{
    int i;

    i = 1;
    if(argc > 2)
        selection_sort(argc-1, argv);
    while(i < (argc - 1)
    {
        ft_putstr(argv[i]);
        ft_putstr("\n");
        i++;
    }
    return 0;
}
