char *ft_str_upcase(char *string)
{
    for (int i = 0; string[i]; ++i)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 'a' + 'A';
        }
    }

    return string;
}
