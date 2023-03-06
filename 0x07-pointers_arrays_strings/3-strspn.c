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
