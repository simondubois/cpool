void ft_putnbr(int);
void ft_putstr(char *);
int ft_str_is_lowercase(char *string);

int main(void)
{
    char *lowercase = "helloworld";
    char *mixedcase = "HelloWorld";

    ft_putstr(lowercase);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_lowercase(lowercase));
    ft_putstr("\n");

    ft_putstr(mixedcase);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_lowercase(mixedcase));
    ft_putstr("\n");

    return 0;
}
