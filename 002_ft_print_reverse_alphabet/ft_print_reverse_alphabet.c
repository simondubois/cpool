void ft_putchar(char);

void ft_print_reverse_alphabet()
{
    for (char letter = 'z'; letter >= 'a'; letter--)
    {
        ft_putchar(letter);
    }
}
