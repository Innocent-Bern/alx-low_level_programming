#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
    int i;
    while (*s)
    {
        for (i = 0; accept[i]; i++)
        {
            if (*s == accept[i])
            {
                return (s);
            }
        }
        s++;
    }
    return ('\0');
}


int main(void)
{
    char *s = "Hello, world";
    char *f = "Read";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}