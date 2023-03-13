#include "main.h"
#include <stdlib.h>


/**
* _strdup : Entry point
* Description: Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* @str: Input string
* Return: A pointer to the new string or NULL if string is NULL
*/

int _strlen (char *s)
{
    int i = 0;
    while (*s)
    {
        i++;
        s++;
    }
    return (i);
}

char *_strdup(char *str)
{
    int i = 0;
    int mystrlen = _strlen(str);
    char *newString = malloc(sizeof(char) * mystrlen);

    if (str == NULL)
        return (NULL);
    
    for (i = 0; i < mystrlen; i++ )
    {
        newString[i] = str[i];
    }
    return (newString);
    free(newString);
}
