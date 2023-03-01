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

    destlen = 0;
    strlen = 0;
    while (strpt[strlen])
    {
        strlen++;
    }
    while (destpt[destlen])
    {
        *(strpt + (strlen + destlen)) = destpt[destlen];
        destlen++;
    }
    printf("%s\n", strpt);
    return (0);
}