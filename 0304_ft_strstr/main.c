void ft_putstr(char *);
char *ft_strstr(char *, char *);

int main(void)
{
    ft_putstr("bc in abcd : ");
    ft_putstr(ft_strstr("abcd", "bc"));
    ft_putstr("\n");

    ft_putstr("bcde in abcd : ");
    ft_putstr(ft_strstr("abcd", "bcde") == 0 ? "null" : "no null");
    ft_putstr("\n");

    ft_putstr("'' in abcd : ");
    ft_putstr(ft_strstr("abcd", ""));
    ft_putstr("\n");

    ft_putstr("bc in '' : ");
    ft_putstr(ft_strstr("", "bc") == 0 ? "null" : "no null");
    ft_putstr("\n");

    return 0;
}
