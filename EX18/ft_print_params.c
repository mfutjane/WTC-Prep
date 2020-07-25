int    main(int argc, char *argv)
{
    int i;

    i = 1;
    if(argc > 1 && i < argc)
    {
        ft_putstr(argv[i]); //code for function in EX15
        ft_putchar('\n'); //code for function in EX06
        i++;
    }
    return 0;
}
