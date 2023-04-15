void ft_putstr(char *);
char *ft_str_capitalize(char *string);

int main(void)
{
    char string[]
        = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

    ft_putstr(string);
    ft_putstr("\n");
    ft_putstr(ft_str_capitalize(string));
    ft_putstr("\n");

    return 0;
}
