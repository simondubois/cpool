void ft_putstr(char *);
char *ft_str_lowcase(char *string);

int main(void)
{
    char string[] = "Hello World 123 !";

    ft_putstr(string);
    ft_putstr(" : ");
    ft_putstr(ft_str_lowcase(string));
    ft_putstr("\n");

    return 0;
}
