char *ft_str_capitalize(char *string)
{
    for (int i = 0; string[i]; ++i)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            if (i == 0)
            {
                string[i] = string[i] - 'a' + 'A';
            }
            else if (string[i - 1] < 'a' || string[i - 1] > 'z')
            {
                if (string[i - 1] < 'A' || string[i - 1] > 'Z')
                {
                    if (string[i - 1] < '0' || string[i - 1] > '9')
                    {
                        string[i] = string[i] - 'a' + 'A';
                    }
                }
            }
        }
    }

    return string;
}
