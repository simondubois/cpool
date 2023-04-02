#include <limits.h>

void ft_putnbr(int);
void ft_putchar(char);

int main()
{
    ft_putnbr(INT_MIN);
    ft_putchar('\n');

    ft_putnbr(-42);
    ft_putchar('\n');

    ft_putnbr(0);
    ft_putchar('\n');

    ft_putnbr(42);
    ft_putchar('\n');

    ft_putnbr(INT_MAX);
    ft_putchar('\n');

    return 0;
}
