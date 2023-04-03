void ft_swap(int *, int *);
void ft_putchar(char);
void ft_putnbr(int);

int main()
{
    int negative = -42;
    int positive = 42;

    ft_putnbr(negative);
    ft_putchar(' ');
    ft_putchar('<');
    ft_putchar(' ');
    ft_putnbr(positive);
    ft_putchar('\n');

    ft_swap(&negative, &positive);

    ft_putnbr(negative);
    ft_putchar(' ');
    ft_putchar('>');
    ft_putchar(' ');
    ft_putnbr(positive);
    ft_putchar('\n');

    return 0;
}
