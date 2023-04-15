void ft_putnbr(int);
void ft_putstr(char *);
int ft_str_is_printable(char *string);

int main(void)
{
    char *printable = " !Aa9";
    char *nonprintable = " !Aa9\t";

    ft_putstr(printable);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_printable(printable));
    ft_putstr("\n");

    ft_putstr(nonprintable);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_printable(nonprintable));
    ft_putstr("\n");

    return 0;
}
