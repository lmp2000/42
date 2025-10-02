#include <unistd.h>

int main(int argc, char **argv)
{
    char *ptr;
    
    if (argc < 2)
    {
        write (1, "\n", 1);
        return 0;
    }

    ptr = *(argv + 1);
    while (*ptr)
    {
        write (1, ptr, 1);
        ptr++;
    }
    write (1, "\n", 1);
    return 0;
}