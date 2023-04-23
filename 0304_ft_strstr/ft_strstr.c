char *ft_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        int i;
        for (i = 0; haystack[i] && needle[i] && haystack[i] == needle[i]; ++i);
        if (needle[i] == 0)
        {
            return haystack;
        }
        ++haystack;
    }

    return 0;
}
