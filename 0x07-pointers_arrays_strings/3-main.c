#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int x = 0;
    unsigned int i = 0;

    while (s[x])
    {
        for (i = 0; accept[i] >= '\0'; i++)
        {
            if (s[x] == accept[i])
            {
                continue;
            } else if (accept[x] == '\0')
            {
                return (x+1);
            }
        }
        x++;
    }
}

int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}