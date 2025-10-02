#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *ret;
    int len;
    int i;

    i = 0;
    len = 0;
    while (src[len])
        len++;

    len++;
    ret = malloc(len * sizeof(char));
    while(src[i])
    {
        ret[i] = src[i];
        i++;
    }
    ret[i] = '\0';
    return ret;
}