#include "main.h"

/**
* rev_string - Entry point
* Description: Reverses a string
* @s: char pointer string input parameter
* Return: void
*/

void rev_string(char *s)
{
    char i = s[0];
    int check = 0;
    int y;

    while (s[check] != '\0')
        check++;
    for (y = 0; y < check; y++)
    {
        check--;
        i = s[y];
        s[y] = s[check];
        s[check] = i;
    }
}
