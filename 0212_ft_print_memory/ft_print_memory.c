void ft_print_memory_address(unsigned long);
void ft_print_memory_hexadecimal(char *);
void ft_print_memory_printable(char *);
void ft_putchar(char);

char *ft_print_memory(char *memory)
{
    int max;

    for (max = 0; memory[max]; ++max);

    for (int i = 0; i < max; i += 8)
    {
        ft_print_memory_address((unsigned long)memory + i);
        ft_putchar(':');
        ft_print_memory_hexadecimal(memory + i);
        ft_putchar(' ');
        ft_print_memory_printable(memory + i);
        ft_putchar('\n');
    }

    return memory;
}

void ft_print_memory_address(unsigned long number)
{
    for (unsigned long range = 0x10000000000000; range > 0; range /= 0x10)
    {
        int digit = number / range;

        if (digit > 9)
        {
            ft_putchar('a' - 10 + digit);
        }
        else
        {
            ft_putchar('0' + digit);
        }

        number %= range;
    }
}

void ft_print_memory_hexadecimal(char *line)
{
    int i;

    for (i = 0; i < 8 && line[i]; ++i)
    {
        ft_putchar(' ');

        if (line[i] / 0x10 > 9)
        {
            ft_putchar('a' - 10 + line[i] / 0x10);
        }
        else
        {
            ft_putchar('0' + line[i] / 0x10);
        }

        if (line[i] % 0x10 > 9)
        {
            ft_putchar('a' - 10 + line[i] % 0x10);
        }
        else
        {
            ft_putchar('0' + line[i] % 0x10);
        }
    }

    for (; i < 8; ++i)
    {
        ft_putchar(' ');
        ft_putchar(' ');
        ft_putchar(' ');
    }
}

void ft_print_memory_printable(char *line)
{
    for (int i = 0; line[i] && i < 8; ++i)
    {
        if (line[i] < ' ' || line[i] > '~')
        {
            ft_putchar('.');
        }
        else
        {
            ft_putchar(line[i]);
        }
    }
}
