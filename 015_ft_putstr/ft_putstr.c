void ft_putchar(char);

void ft_putstr(char *string)
{
    for (int i = 0; string[i]; ++i)
    {
        ft_putchar(string[i]);
    }
}
