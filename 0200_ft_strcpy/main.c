void ft_putstr(char *);
char *ft_strcpy(char *, const char *);

int main(void)
{
    char string[13];

    ft_putstr(ft_strcpy(string, "Hello World!"));
    ft_putstr("\n");

    return 0;
}
