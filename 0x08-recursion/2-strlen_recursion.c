#include "main.h"

/**
* int _strlen_recursion: Entry point
* Description : Funtion that prints the length of a string
* @s: input string
* Return : Void.
*/
void _strlen(char *s, int mystrlen)
{
    if (*s == '\0')
        return;
    mystrlen += 1;
    _strlen(s+1, mystrlen);
}

int _strlen_recursion(char *s)
{
    int mystrlen = 0;
    _strlen(s, mystrlen);
    return (mystrlen);
}
