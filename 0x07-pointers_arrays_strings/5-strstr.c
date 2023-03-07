#include "main.h"

/**
* _strstr : Function that function that locates a substring
* @haystack: string input
* @needle: string input
* Return : A pointer to the beginning of the located substring, or NULL if the substring is not found.
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
