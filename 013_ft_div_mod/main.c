void ft_div_mod(int, int, int *, int *);
void ft_putchar(char);
void ft_putnbr(int);

int main()
{
    int dividend = 42;
    int divisor = 10;
    int quotient = 0;
    int remainder = 0;

    ft_div_mod(dividend, divisor, &quotient, &remainder);

    ft_putnbr(dividend);
    ft_putchar(' ');
    ft_putchar('/');
    ft_putchar(' ');
    ft_putnbr(divisor);
    ft_putchar(' ');
    ft_putchar('=');
    ft_putchar(' ');
    ft_putnbr(quotient);
    ft_putchar(' ');
    ft_putchar('(');
    ft_putchar('+');
    ft_putnbr(remainder);
    ft_putchar(')');
    ft_putchar('\n');

    return 0;
}
