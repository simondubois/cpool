void ft_putnbr(int);
void ft_putstr(char *);
int ft_sort_int_tab(int *, int);

int main()
{
    int numbers[10] = {1, 2, 3, 4, 5, -5, -4, -3, -2, -1};

    for (int i = 0; i < 10; ++i)
    {
        ft_putnbr(numbers[i]);
        ft_putstr(" ");
    }
    ft_putstr("\n");

    ft_sort_int_tab(numbers, 10);

    for (int i = 0; i < 10; ++i)
    {
        ft_putnbr(numbers[i]);
        ft_putstr(" ");
    }
    ft_putstr("\n");

    return 0;
}
