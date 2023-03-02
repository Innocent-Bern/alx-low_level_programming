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
