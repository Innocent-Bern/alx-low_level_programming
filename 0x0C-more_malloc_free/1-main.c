#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strlen (char *s)
{
    unsigned int i = 0;
    if (s == NULL)
        return (0);
    for (i = 0; *s; i++)
    {
        if (*s == '\0')
            break;
        s++;
    }
    return (i);
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *rtnstring;
    unsigned int i = 0;
    unsigned int total_len;

    if (_strlen(s2) <= n)
    {
        total_len = _strlen(s1) + _strlen(s2) + 2;
    } else
    {
        total_len = _strlen(s1) + n + 1;
    }

    rtnstring = malloc(sizeof(char) * total_len);

    if (rtnstring == NULL)
    {
        free(rtnstring);
        return (NULL);
    }

    for (i = 0; i < _strlen(s1); i++)
    {
        rtnstring[i] = s1[i];
    }

    for (i = 0; i < total_len -_strlen(s1); i++)
    {
        rtnstring[_strlen(s1) + i] = s2[i];
    }
    return (rtnstring);
}
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
