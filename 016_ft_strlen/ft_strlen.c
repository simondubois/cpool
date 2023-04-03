int ft_strlen(char *string)
{
    int length = 0;

    while (string[length])
    {
        ++length;
    }

    return length;
}
