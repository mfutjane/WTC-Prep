#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_numbers(void)
{
    char num_to_print;

    num_to_print = '0';
    while(num_to_print <= '9')
        ft_putchar(num_to_print++);
}

int	main(void)
{
	ft_print_numbers();
	return 0;
}
