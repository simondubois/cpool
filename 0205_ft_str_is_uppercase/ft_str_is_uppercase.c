int ft_str_is_uppercase(char *string)
{
    for (; *string; ++string)
    {
        if (*string < 'A' || *string > 'Z')
        {
            return 0;
        }
    }

    return 1;
}
