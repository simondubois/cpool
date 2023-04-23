void ft_putnbr(int);
void ft_putstr(char *);
unsigned int ft_strlcat(char *, char *, unsigned int);

int main(void)
{
    char string[7];

    string[0] = 'a';
    string[1] = 'b';
    string[2] = 'c';
    string[3] = 0;

    ft_putnbr(ft_strlcat(string, "def", 7));
    ft_putstr(" => ");
    ft_putstr(string);
    ft_putstr("\n");

    return 0;
}
