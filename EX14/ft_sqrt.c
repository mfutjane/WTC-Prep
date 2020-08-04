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
