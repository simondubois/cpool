void ft_putchar(char);
void ft_putstr_non_printable_hexadecimal(char);

void ft_putstr_non_printable(char *string)
{
    for (; *string; ++string)
    {
        if (*string < ' ' || *string > '~')
        {
            ft_putstr_non_printable_hexadecimal(*string);
        }
        else
        {
            ft_putchar(*string);
        }
    }
}

void ft_putstr_non_printable_hexadecimal(char number)
{
    char digit1 = number / 0x10;
    char digit2 = number % 0x10;

    ft_putchar('\\');

    if (digit1 > 9)
    {
        ft_putchar('a' - 10 + digit1);
    }
    else
    {
        ft_putchar('0' + digit1);
    }

    if (digit2 > 9)
    {
        ft_putchar('a' - 10 + digit2);
    }
    else
    {
        ft_putchar('0' + digit2);
    }
}
