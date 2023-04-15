int ft_str_is_printable(char *string)
{
    for (; *string; ++string)
    {
        if (*string < ' ' || *string > '~')
        {
            return 0;
        }
    }

    return 1;
}
