int ft_str_is_numeric(char *string)
{
    for (; *string; ++string)
    {
        if (*string < '0' || *string > '9')
        {
            return 0;
        }
    }

    return 1;
}
