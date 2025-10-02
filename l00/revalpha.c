#include <unistd.h>

void putchar(char c)
{
    write (1, &c, 1);
    return ;
}

int main(void)
{
    int i;

    i = 123;
    
    while (i-- > 97)
        (i % 2 == 0 ? putchar(i) : putchar(i - 32));
    
    putchar('\n');
    return 0;
}