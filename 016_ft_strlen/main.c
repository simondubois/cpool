void ft_putnbr(int);
void ft_putstr(char *);
int ft_strlen(char *);

int main()
{
    char *text = "Hello world!";

    ft_putstr(text);
    ft_putstr("\n");
    ft_putnbr(ft_strlen(text));
    ft_putstr("\n");

    return 0;
}
