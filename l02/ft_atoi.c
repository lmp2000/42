int isspace42(char c)
{
    if (c == 32 || (c >= 9 && c <= 13))
        return 1;
    return 0;
}

int issign42(char c)
{
    if (c == '+')
        return 1;
    else if (c == '-')
        return -1;
    return 0;
}

int isdigit42(char c)
{
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

int ft_atoi(char *str)
{
    long n;
    int sign;

    while (isspace42(*str))
        str++;
    
    while (issign42(*str))
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }

    while (isdigit42(*str))
    {
        n = n * 10 + (*str - '0');
        str++;
    }

    return (n * sign);
}