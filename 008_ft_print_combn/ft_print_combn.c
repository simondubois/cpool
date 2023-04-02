#include <stdbool.h>

void ft_putchar(char);
void ft_print_combn_print(int, int);
bool ft_print_combn_printable(int, int, int);
bool ft_print_combn_recursive(int, int, int, bool);

void ft_print_combn(int length)
{
    ft_print_combn_recursive(length, length, 0, false);
}

void ft_print_combn_print(int number, int length)
{
    if (length > 1)
    {
        ft_print_combn_print(number / 10, length - 1);
    }

    ft_putchar('0' + number % 10);
}

bool ft_print_combn_printable(int number, int length, int max)
{
    if (length == 0)
    {
        return true;
    }

    if (number % 10 > max)
    {
        return false;
    }

    return ft_print_combn_printable(number / 10, length - 1, number % 10 - 1);
}

bool ft_print_combn_recursive(int total_length, int current_length, int base, bool hasPrinted)
{
    for (char digit = base % 10; digit <= 9; digit++)
    {
        int number = base * 10 + digit;

        if (current_length == 1 && ft_print_combn_printable(number, total_length, 9))
        {
            if (hasPrinted)
            {
                ft_putchar(',');
                ft_putchar(' ');
            }

            ft_print_combn_print(number, total_length);

            hasPrinted = true;
        }

        if (current_length > 1)
        {
            hasPrinted = ft_print_combn_recursive(total_length, current_length - 1, number, hasPrinted) || hasPrinted;
        }
    }

    return hasPrinted;
}
