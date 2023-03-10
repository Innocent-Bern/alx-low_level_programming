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
    int i = 0, srclen = 0;

	while (src[i++])
		srclen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = srclen; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
