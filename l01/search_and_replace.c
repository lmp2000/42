#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 4 || argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        write (1, "\n", 1);
        return 0;
    }

    char a = *argv[2];
    char b = *argv[3];
    char *ptr = argv[1];

    while (*ptr)
    {
        if (*ptr == a)
            write (1, &b, 1);
        else
            write (1, ptr, 1);
        ptr++;
    }
    
    write (1, "\n", 1);
    return 0;
}