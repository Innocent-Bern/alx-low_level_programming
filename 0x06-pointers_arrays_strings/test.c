#include <stdio.h>
#include <string.h>

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

    i = 1;

    for (strlen = 0; strlen <= i; strlen++)
    {
        *(destpt + strlen) = strpt[strlen];
    }
    *(destpt + (i)) = '\0';
    printf("%s\n", destpt);
    return (0);
}