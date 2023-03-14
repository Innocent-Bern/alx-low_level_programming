#include "main.h"
#include <stdlib.h>

/**
* str_concat : Entry point
* Description: Function that concatenates two strings.
* @s1: Input string
* @s2: input string
* Return: A pointer to the new string
*/

int _strlen(char *s)
{
    int i = 0;
    
    if (s == NULL)
        return (0);
    
    for (i = 0; *s ; i++)
    {
        i++;
        if (s[i] == '\0')
        {
            break;
        }
    }
    return (i);
}

char *str_concat(char *s1, char *s2)
{
    int i = 0;
    int len1 = _strlen(s1);
    int len2 = _strlen(s2);
    int total = len1 + len2;
    char *newString = malloc(sizeof(char) * total);

    for (i = 0; i < len1; i++)
    {
        newString[i] = s1[i];
    }

    for (i = 0; i < len2; i++)
    {
        newString[len1 + i ] = s2[i];
    }
    return (newString);
}
