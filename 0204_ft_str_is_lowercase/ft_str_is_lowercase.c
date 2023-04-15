int ft_str_is_lowercase(char *string)
{
    for (; *string; ++string)
    {
        if (*string < 'a' || *string > 'z')
        {
            return 0;
        }
    }

    return 1;
}
