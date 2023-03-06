#include "main.h"

/**
* _strspn : Function that gets the length of a prefix substring
* @s: string input
* @accept: string input
* Return : the number of bytes in the initial segment of s which consist only of bytes from accept
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
