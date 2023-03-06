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
    int rtnint = 0;

    for (x = 0; s[x] ; x++)
    {
        for (i =0; accept[i] ; i++)
        {
            if (s[x] == accept[i])
            {
                rtnint++;
                break;
            }
            else if (accept[i + 1] == '\0')
            {
                return (rtnint);
            }
        }
    }
    return (rtnint);
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