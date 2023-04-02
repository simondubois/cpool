void ft_is_negative(int);
void ft_putchar(int);

int main()
{
    for (char number = -3; number <= 3; number++)
    {
        ft_putchar(number < 0 ? '-' : ' ');
        ft_putchar('0' + (number < 0 ? -number : number));
        ft_putchar(':');
        ft_putchar(' ');
        ft_is_negative(number);
        ft_putchar('\n');
    }

    return 0;
}
