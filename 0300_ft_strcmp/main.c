void ft_putnbr(int);
void ft_putstr(char *);
int ft_strcmp(char *, char *);

int main(void)
{
    ft_putstr("abcd <> abce : ");
    ft_putnbr(ft_strcmp("abcd", "abce"));
    ft_putstr("\n");

    ft_putstr("abcd <> abcd : ");
    ft_putnbr(ft_strcmp("abcd", "abcd"));
    ft_putstr("\n");

    ft_putstr("abcd <> abc : ");
    ft_putnbr(ft_strcmp("abcd", "abc"));
    ft_putstr("\n");

    return 0;
}
