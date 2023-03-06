#include "main.h"

/**
* _memcpy : Function that copies memory area
* @dest: string input
* @src: string input
* @n: integer input
* Return : A pointer to the memory area s
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n)
    {
        *(dest + i) = src[i];
        i++;
    }
    return (dest);
}
