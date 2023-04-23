int ft_strcmp(char *string1, char *string2)
{
    while (*string1 == *string2 && *string1)
    {
        ++string1;
        ++string2;
    }

    return *string1 - *string2;
}
