#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

void ft_putchar(char);

void ft_putnbr(int number)
{
    if (number == INT_MIN)
    {
        ft_putchar('-');
        number = INT_MAX;
    }

    if (number < 0)
    {
        ft_putchar('-');
        number = -number;
    }

    if (number / 10 > 0)
    {
        ft_putnbr(number / 10);
    }

    ft_putchar('0' + number % 10);
}
