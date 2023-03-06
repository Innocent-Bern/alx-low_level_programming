#include "main.h"

/**
* _strpbrk : Function that function that searches a string for any of a set of bytes
* @s: string input
* @accept: string input
* Return : A pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
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
