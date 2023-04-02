#include <stdbool.h>

void ft_putchar(char);

void ft_print_comb2()
{
    bool firstPrint = true;

    for (char number1 = 0; number1 <= 99; number1++)
    {
        for (char number2 = number1 + 1; number2 <= 99; number2++)
        {
            if (firstPrint != true)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }

            ft_putchar('0' + number1 / 10);
            ft_putchar('0' + number1 % 10);
            ft_putchar(' ');
            ft_putchar('0' + number2 / 10);
            ft_putchar('0' + number2 % 10);

            firstPrint = false;
        }
    }
}
