char *ft_strcpy(char *to, const char *from)
{
    unsigned int i;

    for (i = 0; from[i]; ++i)
    {
        to[i] = from[i];
    }

    to[i] = from[i];

    return to;
}
