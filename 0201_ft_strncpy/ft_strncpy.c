char *ft_strncpy(char *to, const char *from, unsigned int length)
{
    unsigned int i;

    for (i = 0; i < length && from[i]; ++i)
    {
        to[i] = from[i];
    }

    for (; i < length; ++i)
    {
        to[i] = '\0';
    }

    return to;
}
