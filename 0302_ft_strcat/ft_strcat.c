char *ft_strcat(char *prefix, char *suffix)
{
    unsigned int i;

    for (i = 0; prefix[i]; ++i);

    for (; *suffix; ++suffix)
    {
        prefix[i++] = *suffix;
    }

    prefix[i] = 0;

    return prefix;
}
