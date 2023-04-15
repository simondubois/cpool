void ft_putnbr(int);
void ft_putstr(char *);
int ft_str_is_uppercase(char *string);

int main(void)
{
    char *uppercase = "HELLOWORLD";
    char *mixedcase = "HelloWorld";

    ft_putstr(uppercase);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_uppercase(uppercase));
    ft_putstr("\n");

    ft_putstr(mixedcase);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_uppercase(mixedcase));
    ft_putstr("\n");

    return 0;
}
