#include <stdio.h>

void ft_sort_int_tab(int *numbers, int length)
{
    for (int i = 0; i < length - 1; ++i)
    {
        if (numbers[i] > numbers[i + 1])
        {
            int temporary = numbers[i + 1];
            numbers[i + 1] = numbers[i];
            numbers[i] = temporary;

            if (i > 0)
            {
                i -= 2;
            }
        }
    }
}
