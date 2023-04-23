void ft_putnbr(int);
void ft_putstr(char *);
int ft_strncmp(char *, char *, unsigned int);

int main(void)
{
    ft_putstr("abcd <> abce : ");
    ft_putnbr(ft_strncmp("abcdf", "abceg", 4));
    ft_putstr("\n");

    ft_putstr("abcd <> abcd : ");
    ft_putnbr(ft_strncmp("abcdf", "abcde", 4));
    ft_putstr("\n");

    ft_putstr("abcd <> abc : ");
    ft_putnbr(ft_strncmp("abcd", "abc", 4));
    ft_putstr("\n");

    return 0;
}
