#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int rot_13(char c)
{
    if ((c >= 'A' && c <= 'M') || (c >= 'a' && c >= 'm'))
        c += 13;
    else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
        c -= 13;
    return (c);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        while (*argv[1])
            ft_putchar(rot_13(*argv[1]++));
    ft_putchar('\0');
    return (0);
}