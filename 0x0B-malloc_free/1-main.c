#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
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
}
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}