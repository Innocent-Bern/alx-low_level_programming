#include "main.h"

/**
 * _strncpy - function that copies scr str to dest upto n characters.
 * @dest: destination string.
 * @src: source string.
 * @n: number of characters to copy.
 * Return: pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	if (dest == NULL || src == NULL)
		return (NULL);
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (dest);
}
