#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

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

int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}