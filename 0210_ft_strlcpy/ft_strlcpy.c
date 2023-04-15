unsigned int ft_strlcpy(char *to, const char *from, unsigned int length)
{
    unsigned int i;

    for (i = 0; i < length - 1 && from[i]; ++i)
    {
        to[i] = from[i];
    }

    if (i < length)
    {
        to[i] = '\0';
    }

    for (; from[i]; ++i);

    return i;
}
