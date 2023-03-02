#include "main.h"

/**
* _strncpy : Function that copies string src up to n to the dest string
* @dest: input string
* @src: input string
* @n: input inerger
* Return : pointer to the resulting string dest
*/

char *_strncpy(char *dest, char *src, int n)
{ 
    // int destlen, srclen;

    // destlen = 0;
    // srclen = 0;

    // for (srclen = 0; src[srclen] && srclen < n; srclen++)
    // {
    //     dest[srclen] = src[srclen];
    // }
    // *(dest + (n+1)) = '\0';
    // return (dest);
    int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
