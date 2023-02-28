#include "main.h"

/**
* print_rev - Entry point
* Description: prints a string in reverse
* @s: char pointer string input parameter
* Return: void
*/

void print_rev(char *s)
{
    int i = 0;

    while (s[i])
    {
        i++;
    }
    while (i--)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
}
