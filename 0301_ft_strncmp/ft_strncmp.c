int ft_strncmp(char *string1, char *string2, unsigned int length)
{
    for (unsigned int i = 0; i < length; ++i)
    {
        if (string1[i] != string2[i])
        {
            return string1[i] - string2[i];
        }
        if (string1[i] == 0)
        {
            return 0;
        }
    }

    return 0;
}
