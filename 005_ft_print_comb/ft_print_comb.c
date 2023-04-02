#include <stdbool.h>

void ft_putchar(char);

void ft_print_comb()
{
    bool firstPrint = true;

    for (char hundred = '0'; hundred <= '9'; hundred++)
    {
        for (char ten = hundred + 1; ten <= '9'; ten++)
        {
            for (char unit = ten + 1; unit <= '9'; unit++)
            {
                if (firstPrint != true)
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }

                ft_putchar(hundred);
                ft_putchar(ten);
                ft_putchar(unit);

                firstPrint = false;
            }
        }
    }
}
