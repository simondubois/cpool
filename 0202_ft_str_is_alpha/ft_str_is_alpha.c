int ft_str_is_alpha(char *string)
{
    for (; *string; ++string)
    {
        if (*string < 'A')
        {
            return 0;
        }
        if (*string > 'Z' && *string < 'a')
        {
            return 0;
        }
        if (*string > 'z')
        {
            return 0;
        }
    }

    return 1;
}
