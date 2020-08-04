#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
    char letter_to_print;

    letter_to_print = 'a';
    while(letter_to_print <= 'z')
        ft_putchar(letter_to_print++);
}

int	main(void)
{
	ft_print_alphabet();
	return 0;
}
