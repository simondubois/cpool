void ft_ultimate_ft(int *********);
void ft_putchar(char);
void ft_putnbr(int);

int main()
{
    int number = 0;
    int *pointer1 = &number;
    int **pointer2 = &pointer1;
    int ***pointer3 = &pointer2;
    int ****pointer4 = &pointer3;
    int *****pointer5 = &pointer4;
    int ******pointer6 = &pointer5;
    int *******pointer7 = &pointer6;
    int ********pointer8 = &pointer7;
    int *********pointer9 = &pointer8;

    ft_ultimate_ft(pointer9);

    ft_putnbr(number);
    ft_putchar('\n');

    return 0;
}
