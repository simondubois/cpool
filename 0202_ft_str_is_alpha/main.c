void ft_putnbr(int);
void ft_putstr(char *);
int ft_str_is_alpha(char *string);

int main(void)
{
    char *alpha = "HelloWorld";
    char *alpha_numeric = "HelloWorld123456";

    ft_putstr(alpha);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_alpha(alpha));
    ft_putstr("\n");

    ft_putstr(alpha_numeric);
    ft_putstr(" : ");
    ft_putnbr(ft_str_is_alpha(alpha_numeric));
    ft_putstr("\n");

    return 0;
}
