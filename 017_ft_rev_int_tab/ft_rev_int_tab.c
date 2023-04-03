void ft_rev_int_tab(int *numbers, int length)
{
    for (int i = 0; i < length / 2; ++i)
    {
        int temporary = numbers[i];
        numbers[i] = numbers[length - i - 1];
        numbers[length - i - 1] = temporary;
    }
}
