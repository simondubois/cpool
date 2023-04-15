void ft_putnbr(int);
void ft_putstr(char *);
int ft_str_is_numeric(char *string);

int main(void)
{
    char *numeric = "123456";
    char *alpha_numeric = "HelloWorld123456";

    ft_putstr(numeric);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_numeric(numeric));
    ft_putstr("\n");

    ft_putstr(alpha_numeric);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_numeric(alpha_numeric));
    ft_putstr("\n");

    return 0;
}
