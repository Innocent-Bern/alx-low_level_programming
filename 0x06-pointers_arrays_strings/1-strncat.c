#include "main.h"

/**
* _*strcat : Function that appends the src string to the dest string
* @dest: input string
* @src: input string
* @n: input inerger
* Return : pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
    int destlen, srclen;

    destlen = 0;
    srclen = 0;

    while (dest[destlen])
    {
        destlen++;
    }
    while (src[srclen])
    {
        *(dest + (srclen + destlen)) = src[srclen];
        srclen++;
        if (srclen > n)
        {
            break;
        }
    }
    return (dest);
}
