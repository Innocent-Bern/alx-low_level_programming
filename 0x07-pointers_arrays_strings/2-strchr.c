#include "main.h"

/**
* _strchr : Function that locates a character in a string
* @s: string input
* @c: character input
* Return : A pointer to the first occurrence of the character c in the string s
*/

char *_strchr(char *s, char c)
{
    int i = 0;
    char *rtnstr;

    while (s[i])
    {
        if (s[i] == c)
        {
            rtnstr = &s[i];
            break;
        } else if (s[i] == '\0')
        {
            return (NULL);
        }
        i++;
    }
    return (rtnstr);
}