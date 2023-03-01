#include <stdio.h>

char *_strcat(char *dest, char *src)
{
    
}

int main(void)
{
    char dest[] = "World";
    char *destpt = &dest[0];
    char str[] = "Hello";
    char *strpt = &str[0];
    int strlen, destlen, i;

    strlen = 0;
    destlen = 0;
    i = 0;
    // get len of the strings
    while (str[strlen])
    {
        strlen++;
    }

    while (dest[destlen])
    {
        destlen++;
    }

    while (dest[i])
    {
        *(strpt + (strlen + i)) = destpt[i];
        i++;
    }
    // printf("%d\n%d\n", strlen, destlen);
    printf("%s\n", strpt);
    return (0);
}