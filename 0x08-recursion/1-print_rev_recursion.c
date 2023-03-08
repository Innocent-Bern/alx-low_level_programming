#include "main.h"

/**
* _print_rev_recursion : Entry point
* Description : Funtion that prints a string in reverse.
* @s: input string
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
void rev(char *s, int myStrLen)
{
    if (myStrLen >= 0)
    {
        _putchar(*(s + myStrLen));
        rev(s, myStrLen - 1);
    }
}

void _print_rev_recursion(char *s)
{
    int myStrLen = 0;

    myStrLen = _strlen(s, myStrLen);
    rev(s, myStrLen-1);
}