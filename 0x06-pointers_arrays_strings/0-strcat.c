#include "main.h"

/**
* _*strcat : Function that appends the src string to the dest string
* @*dest: input string
* @*src: input string
* Return : pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
    int destlen, srclen;

    destlen = 0;
    srclen = 0;

    while (src[srclen])
    {
        *(dest + srclen) = src[srclen];
        srclen++;
    }
    return (dest);
}