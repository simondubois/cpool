void ft_div_ultimate_mod(int *, int *);
void ft_putchar(char);
void ft_putnbr(int);

int main()
{
    int dividend = 42;
    int divisor = 10;

    ft_putnbr(dividend);
    ft_putchar(' ');
    ft_putchar('/');
    ft_putchar(' ');
    ft_putnbr(divisor);

    ft_div_ultimate_mod(&dividend, &divisor);

    ft_putchar(' ');
    ft_putchar('=');
    ft_putchar(' ');
    ft_putnbr(dividend);
    ft_putchar(' ');
    ft_putchar('(');
    ft_putchar('+');
    ft_putnbr(divisor);
    ft_putchar(')');
    ft_putchar('\n');

    return 0;
}
