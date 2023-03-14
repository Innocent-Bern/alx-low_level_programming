#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
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
            return (i);
        }
    }
    return (i);
}

char *str_concat(char *s1, char *s2)
{
    int i = 0;
    int len1 = _strlen(s1);
    int len2 = _strlen(s2);
    char *newString = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));

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
int main(void)
{
    char *s;

    s = str_concat("Berry", NULL);
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}