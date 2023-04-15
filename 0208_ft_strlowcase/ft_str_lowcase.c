char *ft_str_lowcase(char *string)
{
    for (int i = 0; string[i]; ++i)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
        {
            string[i] = string[i] - 'A' + 'a';
        }
    }

    return string;
}
