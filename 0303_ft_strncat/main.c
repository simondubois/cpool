void ft_putstr(char *);
char *ft_strncat(char *, char *, unsigned int);

int main(void)
{
    char string[7];

    string[0] = 'a';
    string[1] = 'b';
    string[2] = 'c';
    string[3] = 0;

    ft_putstr(ft_strncat(string, "defghi", 2));
    ft_putstr("\n");

    return 0;
}
