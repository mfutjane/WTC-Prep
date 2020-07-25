//include stdlib.h to use malloc and null

int    *ft_range(int min, int max)
{
    int i;
    int difference;
    int *ret;

    difference = max - min;
    if(difference <= 0)
        return NULL;
    ret = (int*)malloc(sizeof(int)*difference);
    while(i < difference)
    {
        ret[i] = min + i;
        i++;
    }
    return ret;
}
