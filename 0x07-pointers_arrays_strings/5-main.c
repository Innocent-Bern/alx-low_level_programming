#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strstr(char *haystack, char *needle)
{
    int needleLen = 0;
    int i = 0;
    while (needle[needleLen])
    {
        needleLen++;
    }
    while (*haystack)
    {
        if (*haystack == needle[0])
        {
            for (i = 0; i < needleLen; i++)
            {
                if(*(haystack + i) == needle[i])
                {
                    if (*(haystack + i) == needle[i] && i+1 == needleLen)
                    {
                        return (haystack);
                    }
                    continue;
                } else 
                {
                    break;
                }
            }
        } 
        haystack++;
    }
    return ('\0');
}
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}