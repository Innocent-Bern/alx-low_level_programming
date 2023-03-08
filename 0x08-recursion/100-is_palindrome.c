#include "main.h"

/**
* int is_palindrome : Entry point
* Description : Funtion that returns 1 if a string is a palindrome and 0 if not.
* @s: input string
* @pal: input string
* Return : Void.
*/

int _strlen(char *s, int num)
{
    if (*s)
    {
        num += 1;
    } else
    {
        return (num);
    }
    return (_strlen(s+1, num));
}

int palCheck(char *s, char *pal, int myStrLen)
{
    if (*s != '\0' && *s == *(pal + myStrLen))
    {
        if (myStrLen == 0)
        {
            return (1);
        }
        s++;
        palCheck(s, pal, myStrLen -1 );
    } else 
    {
        return (0);
    }
    return (palCheck(s, pal,myStrLen -1));
}
int is_palindrome(char *s)
{
    int myStrLen = 0;
    myStrLen= _strlen(s, myStrLen);
    return (palCheck(s, s,myStrLen - 1));
}
