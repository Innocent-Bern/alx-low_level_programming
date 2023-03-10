#include "main.h"

/**
* _strcmp : Function that compares two strings
* @s2: input string
* @s1: input string
* Return : an int 1 or 0
*/

int _strcmp(char *s1, char *s2)
{
    int check = 0;
    int len1, len2;

    len1 = 0;
    len2 = 0;

    while (s1[len1])
        len1++;
    while (s2[len2])
        len2++;

    if (len1 != len2)
    {
        return (1);
    }

    while (s1[check] && s2[check])
    {
        if (s1[check] == s2[check])
        {
            continue;
        }else
        {
            return (1);
        }
        check++;
    }
    return (0);
}
