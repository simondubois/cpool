void ft_print_combn(int);
void ft_putchar(char);

int main()
{
    for (char length = 2; length <= 10; length++)
    {
        ft_print_combn(length);
        ft_putchar('\n');
    }

    return 0;
}
