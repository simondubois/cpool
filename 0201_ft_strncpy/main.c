void ft_putstr(char *);
char *ft_strncpy(char *, const char *, unsigned int);

int main(void)
{
    char string[6];

    ft_strncpy(string, "Hello World!", 5);
    string[5] = '\0';

    ft_putstr(string);
    ft_putstr("\n");

    return 0;
}
