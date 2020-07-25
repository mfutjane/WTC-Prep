void ft_print_alphabet(void)
{
    char letter_to_print;

    letter_to_print = 'a';
    while(letter_to_print <= 'z')
        ft_putchar(letter_to_print++);
}
