int    ft_sqrt(int nb)
{
    int candidate;
    int temp;

    candidate = 0;
    temp = nb;
    if(nb <= 0)
        return 0;
    while((temp/2) > 0)
    {
        candidate++;
        temp /= 2;
    }
    if(candidate * candidate == nb)
        return candidate;
    return 0;
}
