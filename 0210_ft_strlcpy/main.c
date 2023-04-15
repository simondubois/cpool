void ft_putnbr(int);
void ft_putstr(char *);
unsigned int ft_strlcpy(char *, const char *, unsigned int);

int main(void)
{
    char string[6];
    unsigned int length = ft_strlcpy(string, "Hello World!", 5);

    ft_putstr(string);
    ft_putstr(" : ");
    ft_putnbr(length);
    ft_putstr("\n");

    return 0;
}
