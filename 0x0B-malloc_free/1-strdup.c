#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup : Entry point
* Description: Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* @str: Input string
* Return: A pointer to the new string or NULL if string is NULL
*/

char *_strdup(char *str)
{
    long unsigned int i = 0;
    char *newString = malloc(sizeof(str));

    if (str == NULL)
        return (NULL);

    for (i = 0; i <= sizeof(str); i++)
    {
        newString[i] = str[i];
    }
    return (newString);
}
