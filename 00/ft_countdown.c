#include <unistd.h>

int main(void)
{
    char i = '9';

    while (i >= '0')
    {
        write(1, &i, sizeof(i));
        i--;
    }
    write(1, "\n", 1);
    return(0);
}