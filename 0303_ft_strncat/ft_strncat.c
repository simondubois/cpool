char *ft_strncat(char *prefix, char *suffix, unsigned int length)
{
    unsigned int i;

    for (i = 0; prefix[i]; ++i);

    for (; *suffix && length--; ++suffix)
    {
        prefix[i++] = *suffix;
    }

    prefix[i] = 0;

    return prefix;
}
