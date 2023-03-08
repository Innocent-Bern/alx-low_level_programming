#include "main.h"

/**
* int _strlen_recursion: Entry point
* Description : Funtion that prints the length of a string
* @s: input string
* Return : Void.
*/

int _strlen_recursion(char *s)
{
    int mystrlen = 0;
    void _strlen(char *s)
    {
        if (*s == '\0')
            return;
        mystrlen += 1;
        _strlen(s+1);
    }
    _strlen(s);
    return (mystrlen);
}