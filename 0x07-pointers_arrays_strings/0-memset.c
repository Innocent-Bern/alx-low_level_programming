#include "main.h"

/**
* _memset : Function that fills memory with a constant byte
* @s: string input
* @b: string input
* @n: integer input
* Return : A pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
    int  i = 0;

    while (i < n)
    {
        *(s + i) = b;
        i++;
    }
    return (s);
}