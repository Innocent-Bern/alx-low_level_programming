#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
    int i = 0;
    int y = 0;
    int foundIndex;
    char *rtnpointer;
    for (i = 0; s[i]; i++)
    {
        for (y = 0; accept[y]; y++)
        {
            if (s[i] == accept[y])
            {
                printf("%c\n", accept[y]);
                foundIndex = i;
                rtnpointer = &s[foundIndex];
                break;
            }
        }
        if (rtnpointer[0] != '\0')
        {
            break;
        }
    }
    return (rtnpointer);
}

int main(void)
{
    char *s = "Read the fucking manual";
    char *f = "Read";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}