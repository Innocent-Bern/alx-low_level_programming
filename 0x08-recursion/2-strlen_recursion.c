#include "main.h"

/**
* int _strlen_recursion: Entry point
* Description : Funtion that prints the length of a string
* @s: input string
* Return : Void.
*/
int _strlen_recursion(char *s)
{
    int mylen = 0;

    if (*s)
    {
        mylen++;
        mylen += _strlen_recursion(s+1);
    }
    return (mylen);
}