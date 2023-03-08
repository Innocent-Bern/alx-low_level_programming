#include "main.h"

/**
* int _strlen_recursion: Entry point
* Description : Funtion that prints the length of a string
* @s: input string
* Return : Void.
*/
int _strlen(char *s, int num)
{
    if (*s == '\0')
    {
        return (num);
    } else
    {
        num += 1;
        _strlen(s+1, num);
    }
}

int _strlen_recursion(char *s)
{
    int mystrlen = 0;
    return (_strlen(s, mystrlen));
}